#include "feature.hpp"
#include "map_generator.hpp"
#include "console_generator.hpp"

void DrawTitle()
{
	system("cls"); // Clear the console
	GenerateBorder();
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 - 8);
	cout << " ____  __ _   __   __ _  ____         ___   __   _  _  ____";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 - 7);
	cout << "/ ___)(  ( \\ / _\\ (  / )(  __)       / __) / _\\ ( \\/ )(  __)";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 - 6);
	cout << "\\___ \\/    //    \\ )  (  ) _)       ( (_ \\/    \\/ \\/ \\ ) _)";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 - 5);
	cout << "(____/\\_)__)\\_/\\_/(__\\_)(____)       \\___/\\_/\\_/\\_)(_/(____)";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 - 4);
	cout << "------------------------------------------------------------\n";
}

void DrawChoosePlay()
{
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << " _     ___  __     __   _  _ ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << "( \\   (  ,\\(  )   (  ) ( \\/ )";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);
	cout << " ) )   ) _/ )(__  /__\\  \\  /";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 8);
	cout << "(_/   (_)  (____)(_)(_)(__/ ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 9);
}

void DrawNotChoosePlay()
{
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << "       ___  __     __   _  _ ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << "      (  ,\\(  )   (  ) ( \\/ )";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);
	cout << "       ) _/ )(__  /__\\  \\  /";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 8);
	cout << "      (_)  (____)(_)(_)(__/ ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 9);
}

void DrawChooseOption()
{
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 11);
	cout << " _      __  ___  ____  __  __  _  _ ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 12);
	cout << "( \\    /  \\(  ,\\(_  _)(  )/  \\( \\( )";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 13);
	cout << " ) )  ( () )) _/  )(   )(( () ))  ( ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 14);
	cout << "(_/    \\__/(_)   (__) (__)\\__/(_)\\_)";
}

void DrawNotChooseOption()
{
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 11);
	cout << "        __  ___  ____  __  __  _  _ ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 12);
	cout << "       /  \\(  ,\\(_  _)(  )/  \\( \\( )";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 13);
	cout << "      ( () )) _/  )(   )(( () ))  ( ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 14);
	cout << "       \\__/(_)   (__) (__)\\__/(_)\\_)";
}

void DrawChooseExit()
{
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 16);
	cout << " _     ___  _  _  __  ____ ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 17);
	cout << "( \\   (  _)( \\/ )(  )(_  _)";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 18);
	cout << " ) )   ) _) )  (  )(   )(  ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 19);
	cout << "(_/   (___)(_/\\_)(__) (__) ";
}

void DrawNotChooseExit()
{
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 16);
	cout << "       ___  _  _  __  ____ ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 17);
	cout << "      (  _)( \\/ )(  )(_  _)";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 18);
	cout << "       ) _) )  (  )(   )(  ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 19);
	cout << "      (___)(_/\\_)(__) (__) ";
}


void Menu(int selectedOption) 
{
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	if (selectedOption == PLAY)
		DrawChoosePlay();
	else
		DrawNotChoosePlay();
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 11);
	if (selectedOption == OPTIONS)
		DrawChooseOption();
	else
		DrawNotChooseOption();

	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 16);
	if (selectedOption == EXIT)
		DrawChooseExit();
	else
		DrawNotChooseExit();
}

void DisplayMenu()
{
	DrawTitle();

	int menuOption = PLAY; // Default selected option is PLAY

	while (true) {
		Menu(menuOption);

		char key = _getch(); // Get user input without waiting for Enter key

		if (key == 'w' || key == 'W' || key == ARROW_UP) {
			menuOption = (menuOption == PLAY) ? EXIT : static_cast<MenuOption>(menuOption - 1);
		}
		else if (key == 's' || key == 'S' || key == ARROW_DOWN) {
			menuOption = (menuOption == EXIT) ? PLAY : static_cast<MenuOption>(menuOption + 1);
		}
		else if (key == ENTER_KEY) { // ASCII value of Enter key
			switch (menuOption) {
			case PLAY:
				RunGame();
				break;
			case OPTIONS:
				// Call functions to show options menu
				// You can implement the options menu logic here
				break;
			case EXIT:
				return; // Exit the program
			}
		}
	}
}

void SaveGame(unsigned char temp, int SPD)
{
	system("cls");
	string name;

	cout << "Input the file name to save: ";
	getline(cin, name);
	name = name + ".txt";

	ofstream fout(name);

	fout << "Obstacles:\n";
	for (const auto& pos : obsPos)
		fout << pos.first << " " << pos.second << endl;

	fout << "Food:\n";
	fout << foodPos[0].first << " " << foodPos[0].second << endl;

	fout << "Snake:\n";
	for (const auto& pos : snakePos)
		fout << pos.first << " " << pos.second << endl;

	fout << "Direction: " << temp << endl;
	fout << "Speed: " << SPD << endl;

	fout.close();
}

void LoadGame(unsigned char& temp, int& SPD)
{
	system("cls");
	string name;

	cout << "Input the file name to load: ";
	getline(cin, name);
	name = name + ".txt";

	ifstream fin(name);


	while (!fin.is_open())
	{
		cout << "Error: Could not open file " << name << " .Try again!" << endl;

		cout << "Input the file name to load: ";
		getline(cin, name);
		name = name + ".txt";

		fin.open(name);
	}

	string line;
	while (getline(fin, line))
	{
		if (line == "Obstacles:")
		{
			obsPos.clear();
			while (getline(fin, line) && line != "Food:")
			{
				stringstream ss(line);
				int x, y;
				ss >> x >> y;
				obsPos.push_back(make_pair(x, y));
			}
		}
		else if (line == "Food:")
		{
			foodPos.clear();
			while (getline(fin, line) && line != "Snake:")
			{
				stringstream ss(line);
				int x, y;
				ss >> x >> y;
				foodPos.push_back(make_pair(x, y));
			}
		}
		else if (line == "Snake:")
		{
			snakePos.clear();
			while (getline(fin, line) && line != "Temp:")
			{
				stringstream ss(line);
				int x, y;
				ss >> x >> y;
				snakePos.push_back(make_pair(x, y));
			}
		}
		else if (line.find("Temp:") != string::npos)
		{
			stringstream ss(line);
			string tempStr;
			ss >> tempStr >> temp;
		}
		else if (line.find("Speed:") != string::npos)
		{
			stringstream ss(line);
			string speedStr;
			ss >> speedStr >> SPD;
		}
	}

	fin.close();
}

void RunGameAgain()
{
	system("cls");

	GenerateBorder();
	GenerateObstacles();
	GenerateRandomFood();

	InitSnake();
	DrawSnake();
}

void RunGame()
{
	system("cls");

	GenerateBorder();
	GenerateObstacles();
	GenerateRandomFood();

	InitSnake();
	DrawSnake();

	unsigned char ch = ARROW_RIGHT;
	unsigned char temp = ARROW_RIGHT;
	int time_sleep = 0;

	while (ch)
	{
		if (_kbhit()) // Check if a key has been pressed
		{
			ch = InputKey();

			switch (ch)
			{
			case L_KEY:
				SaveGame(temp, ReturnSpeed());
				cout << "THANK FOR PLAYING THE GAME\n";
				Sleep(10000);
				return;
			case T_KEY:
				LoadGame(temp, time_sleep);
				SPD = time_sleep;
				RunGameAgain();
				break;
			default:
				break;

			}
		}

		time_sleep = 100 - ReturnSpeed() * SPEED_FACTOR;
		Sleep(time_sleep);

		if ((ch == ARROW_UP && temp != ARROW_DOWN) ||
			(ch == ARROW_DOWN && temp != ARROW_UP) ||
			(ch == ARROW_LEFT && temp != ARROW_RIGHT) ||
			(ch == ARROW_RIGHT && temp != ARROW_LEFT))
		{
			temp = ch;
		}

		switch (temp) // Use temp instead of ch to maintain current direction
		{
		case ARROW_UP:
			MoveUp();
			break;
		case ARROW_DOWN:
			MoveDown();
			break;
		case ARROW_LEFT:
			MoveLeft();
			break;
		case ARROW_RIGHT:
			MoveRight();
			break;
		default:
			break;
		}
	}
}