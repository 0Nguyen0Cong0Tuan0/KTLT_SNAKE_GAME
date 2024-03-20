#include "console_generator.hpp"

void MoveConsoleWindowTo(int x, int y) {
	HWND consoleWindow = GetConsoleWindow();
	SetWindowPos(consoleWindow, 0, x, y, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
}

void CustomizeConsole()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	DWORD dwMode = 0;
	GetConsoleMode(hConsole, &dwMode);
	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	SetConsoleMode(hConsole, dwMode);
}

void SetConsoleSizeToFullScreen()
{
	HWND consoleWindow = GetConsoleWindow();
	RECT desktopRect;

	// Get the dimensions of the desktop
	if (GetWindowRect(GetDesktopWindow(), &desktopRect)) 
	{
		// Set the console window size based on the desktop size
		SetWindowPos(consoleWindow, 0, 0, 0, desktopRect.right, desktopRect.bottom, SWP_SHOWWINDOW);
	}
}

void FixConsoleWindow()
{
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}

COORD GetConsoleWindowSize()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hConsole, &csbi);

	COORD size;
	size.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	size.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

	return size;
}

void HideScrollbar()
{
	HWND hWnd = GetConsoleWindow();
	ShowScrollBar(hWnd, SB_BOTH, false);
}

void RunSetConsole()
{
	system("cls");
	MoveConsoleWindowTo(-3, -3);

	CustomizeConsole();
	SetConsoleSizeToFullScreen();

	HideScrollbar();

	FixConsoleWindow();
}

void GotoXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void TextColor(int backgroundColor, int textColor)
{
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	int color_code = backgroundColor * 16 + textColor;
	SetConsoleTextAttribute(color, color_code);
}

void DisableUserInput() 
{

	while (_kbhit()) 
	{
		_getch();
	}
}

void EnableUserInput() 
{

}
