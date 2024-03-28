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

void DrawQuestion()
{
	system("cls");
	GenerateBorder();
	GotoXY((sizeX - 2 * StartX + 5 - 60) / 2, (sizeY - 2 * StartY - 15) / 2 - 8);
	cout << "  __  __  _  _  ____  __  _  _  _  _  ___    ____  _  _  ___     __   __   __  __  ___  ___ ";
	GotoXY((sizeX - 2 * StartX + 5 - 60) / 2, (sizeY - 2 * StartY - 15) / 2 - 7);
	cout << " / _)/  \\( \\( )(_  _)(  )( \\( )( )( )(  _)  (_  _)( )( )(  _)   / _) (  ) (  \\/  )(  _)(__ )";
	GotoXY((sizeX - 2 * StartX + 5 - 60) / 2, (sizeY - 2 * StartY - 15) / 2 - 6);
	cout << "( (_( () ))  (   )(   )(  )  (  )()(  ) _)    )(   )__(  ) _)  ( (/\\ /__\\  )    (  ) _) (_/ ";
	GotoXY((sizeX - 2 * StartX + 5 - 60) / 2, (sizeY - 2 * StartY - 15) / 2 - 5);
	cout << " \\__)\\__/(_)\\_) (__) (__)(_)\\_) \\__/ (___)   (__) (_)(_)(___)   \\__/(_)(_)(_/\\/\\_)(___) (_) ";
	GotoXY((sizeX - 2 * StartX + 5 - 60) / 2, (sizeY - 2 * StartY - 15) / 2 - 4);
	cout << "--------------------------------------------------------------------------------------------\n";
}

void DrawThankYou()
{
	system("cls");
	GenerateBorder();
	GotoXY((sizeX - 2 * StartX - 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 3);
	cout << " ____  _  _   __   _  _  _ _     ___   __  ___          ";
	GotoXY((sizeX - 2 * StartX - 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 4);
	cout << "(_  _)( )( ) (  ) ( \\( )( ) )   (  _) /  \\(  ,)         ";
	GotoXY((sizeX - 2 * StartX - 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << "  )(   )__(  /__\\  )  (  )  \\    ) _)( () ))  \\         ";
	GotoXY((sizeX - 2 * StartX - 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << " (__) (_)(_)(_)(_)(_)\\_)(_)\\_)  (_)   \\__/(_)\\_)        ";
	GotoXY((sizeX - 2 * StartX - 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);

	GotoXY((sizeX - 2 * StartX - 16) / 2, (sizeY - 2 * StartY - 10) / 2 + 8);
	cout << " ___  __     __   _  _  __  _  _  __    ____  _  _  ___ ";
	GotoXY((sizeX - 2 * StartX - 16) / 2, (sizeY - 2 * StartY - 10) / 2 + 9);
	cout << "(  ,\\(  )   (  ) ( \\/ )(  )( \\( )/ _)  (_  _)( )( )(  _)";
	GotoXY((sizeX - 2 * StartX - 16) / 2, (sizeY - 2 * StartY - 10) / 2 + 10);
	cout << " ) _/ )(__  /__\\  \\  /  )(  )  (( (/\\    )(   )__(  ) _)";
	GotoXY((sizeX - 2 * StartX - 16) / 2, (sizeY - 2 * StartY - 10) / 2 + 11);
	cout << "(_)  (____)(_)(_)(__/  (__)(_)\\_)\\__/   (__) (_)(_)(___)";

	GotoXY((sizeX - 2 * StartX + 12) / 2, (sizeY - 2 * StartY - 5) / 2 + 12);
	cout << "  __   __   __  __  ___                                 ";
	GotoXY((sizeX - 2 * StartX + 12) / 2, (sizeY - 2 * StartY - 5) / 2 + 13);
	cout << " / _) (  ) (  \\/  )(  _)                                ";
	GotoXY((sizeX - 2 * StartX + 12) / 2, (sizeY - 2 * StartY - 5) / 2 + 14);
	cout << "( (/\\ /__\\  )    (  ) _)                                ";
	GotoXY((sizeX - 2 * StartX + 12) / 2, (sizeY - 2 * StartY - 5) / 2 + 15);
	cout << " \\__/(_)(_)(_/\\/\\_)(___)                                ";

	GotoXY(0, 0);
}

void DrawFileSaved()
{
	system("cls");
	GenerateBorder();
	GotoXY((sizeX - 2 * StartX - 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 3);
	cout << " ___  __  __    ___    ___   __  _  _  ___  ___  ";
	GotoXY((sizeX - 2 * StartX - 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 4);
	cout << "(  _)(  )(  )  (  _)  / __) (  )( )( )(  _)(   \\ ";
	GotoXY((sizeX - 2 * StartX - 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << " ) _) )(  )(__  ) _)  \\__ \\ /__\\ \\\\//  ) _) ) ) )";
	GotoXY((sizeX - 2 * StartX - 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << "(_)  (__)(____)(___)  (___/(_)(_)(__) (___)(___/ ";
	GotoXY((sizeX - 2 * StartX - 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);                       

	GotoXY(0, 0);
}

void DrawChooseYes()
{
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << " _     _  _  ___  ___ ";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << "( \\   ( \\/ )(  _)/ __)";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);
	cout << " ) )   \\  /  ) _)\\__ \\";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 8);
	cout << "(_/   (__/  (___)(___/";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 9);

}

void DrawNotChooseYes()
{
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << "       _  _  ___  ___ ";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << "      ( \\/ )(  _)/ __)";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);
	cout << "       \\  /  ) _)\\__ \\";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 8);
	cout << "      (__/  (___)(___/";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 9);
}

void DrawChooseNo()
{
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 11);
	cout << " _     _  _  __ ";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 12);
	cout << "( \\   ( \\( )/  \\ ";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 13);
	cout << " ) )   )  (( () )";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 14);
	cout << "(_/   (_)\\_)\\__/ ";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 15);
}

void DrawNotChooseNo()
{
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 11);
	cout << "       _  _  __ ";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 12);
	cout << "      ( \\( )/  \\ ";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 13);
	cout << "       )  (( () )";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 14);
	cout << "      (_)\\_)\\__/ ";
	GotoXY((sizeX - 2 * StartX + 10) / 2, (sizeY - 2 * StartY - 15) / 2 + 15);
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
	cout << " _     __  _  _  ___  ____  ___  _  _  __  ____  __  __  _  _ ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 12);
	cout << "( \\   (  )( \\( )/ __)(_  _)(  ,)( )( )/ _)(_  _)(  )/  \\( \\( )";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 13);
	cout << " ) )   )(  )  ( \\__ \\  )(   )  \\ )()(( (_   )(   )(( () ))  ( ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 14);
	cout << "(_/   (__)(_)\\_)(___/ (__) (_)\\_)\\__/ \\__) (__) (__)\\__/(_)\\_)";
}

void DrawNotChooseOption()
{
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 11);
	cout << "       __  _  _  ___  ____  ___  _  _  __  ____  __  __  _  _ ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 12);
	cout << "      (  )( \\( )/ __)(_  _)(  ,)( )( )/ _)(_  _)(  )/  \\( \\( )";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 13);
	cout << "       )(  )  ( \\__ \\  )(   )  \\ )()(( (_   )(   )(( () ))  ( ";
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 14);
	cout << "      (__)(_)\\_)(___/ (__) (_)\\_)\\__/ \\__) (__) (__)\\__/(_)\\_)";
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

void DrawLevel1()
{
	system("cls");
	GenerateBorder();
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 3);
	cout << " _  _  __  _  _     __   ___   ___ ";
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 4);
	cout << "( \\/ )/  \\( )( )   (  ) (  ,) (  _)";
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << " \\  /( () ))()(    /__\\  )  \\  ) _)";
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << "(__/  \\__/ \\__/   (_)(_)(_)\\_)(___)";
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);

	GotoXY((sizeX - 2 * StartX + 23) / 2, (sizeY - 2 * StartY - 10) / 2 + 8);
	cout << " __  _  _                          ";
	GotoXY((sizeX - 2 * StartX + 23) / 2, (sizeY - 2 * StartY - 10) / 2 + 9);
	cout << "(  )( \\( )                         ";
	GotoXY((sizeX - 2 * StartX + 23) / 2, (sizeY - 2 * StartY - 10) / 2 + 10);
	cout << " )(  )  (                          ";
	GotoXY((sizeX - 2 * StartX + 23) / 2, (sizeY - 2 * StartY - 10) / 2 + 11);
	cout << "(__)(_)\\_)                         ";

	GotoXY((sizeX - 2 * StartX + 1) / 2, (sizeY - 2 * StartY - 5) / 2 + 12);
	cout << " __    ___  _  _  ___  __      __  ";
	GotoXY((sizeX - 2 * StartX + 1) / 2, (sizeY - 2 * StartY - 5) / 2 + 13);
	cout << "(  )  (  _)( )( )(  _)(  )    (  )";
	GotoXY((sizeX - 2 * StartX + 1) / 2, (sizeY - 2 * StartY - 5) / 2 + 14);
	cout << " )(__  ) _) \\\\//  ) _) )(__    )(  ";
	GotoXY((sizeX - 2 * StartX + 1) / 2, (sizeY - 2 * StartY - 5) / 2 + 15);
	cout << "(____)(___) (__) (___)(____)  (__) ";

	GotoXY(0, 0);
}

void DrawLevel2()
{
	system("cls");
	GenerateBorder();
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 3);
	cout << " _  _  __  _  _     __   ___   ___ ";
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 4);
	cout << "( \\/ )/  \\( )( )   (  ) (  ,) (  _)";
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << " \\  /( () ))()(    /__\\  )  \\  ) _)";
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << "(__/  \\__/ \\__/   (_)(_)(_)\\_)(___)";
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);

	GotoXY((sizeX - 2 * StartX + 23) / 2, (sizeY - 2 * StartY - 10) / 2 + 8);
	cout << " __  _  _                          ";
	GotoXY((sizeX - 2 * StartX + 23) / 2, (sizeY - 2 * StartY - 10) / 2 + 9);
	cout << "(  )( \\( )                         ";
	GotoXY((sizeX - 2 * StartX + 23) / 2, (sizeY - 2 * StartY - 10) / 2 + 10);
	cout << " )(  )  (                          ";
	GotoXY((sizeX - 2 * StartX + 23) / 2, (sizeY - 2 * StartY - 10) / 2 + 11);
	cout << "(__)(_)\\_)                         ";

	GotoXY((sizeX - 2 * StartX + 1) / 2, (sizeY - 2 * StartY - 5) / 2 + 12);
	cout << " __    ___  _  _  ___  __      ___ ";
	GotoXY((sizeX - 2 * StartX + 1) / 2, (sizeY - 2 * StartY - 5) / 2 + 13);
	cout << "(  )  (  _)( )( )(  _)(  )    (__ \\";
	GotoXY((sizeX - 2 * StartX + 1) / 2, (sizeY - 2 * StartY - 5) / 2 + 14);
	cout << " )(__  ) _) \\\\//  ) _) )(__   / __/";
	GotoXY((sizeX - 2 * StartX + 1) / 2, (sizeY - 2 * StartY - 5) / 2 + 15);
	cout << "(____)(___) (__) (___)(____)  \\___)";

	GotoXY(0, 0);
}

void DrawLevel3()
{
	system("cls");
	GenerateBorder();
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 3);
	cout << " _  _  __  _  _     __   ___   ___ ";
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 4);
	cout << "( \\/ )/  \\( )( )   (  ) (  ,) (  _)";
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << " \\  /( () ))()(    /__\\  )  \\  ) _)";
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << "(__/  \\__/ \\__/   (_)(_)(_)\\_)(___)";
	GotoXY((sizeX - 2 * StartX + 3) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);

	GotoXY((sizeX - 2 * StartX + 23) / 2, (sizeY - 2 * StartY - 10) / 2 + 8);
	cout << " __  _  _                          ";
	GotoXY((sizeX - 2 * StartX + 23) / 2, (sizeY - 2 * StartY - 10) / 2 + 9);
	cout << "(  )( \\( )                         ";
	GotoXY((sizeX - 2 * StartX + 23) / 2, (sizeY - 2 * StartY - 10) / 2 + 10);
	cout << " )(  )  (                          ";
	GotoXY((sizeX - 2 * StartX + 23) / 2, (sizeY - 2 * StartY - 10) / 2 + 11);
	cout << "(__)(_)\\_)                         ";

	GotoXY((sizeX - 2 * StartX + 1) / 2, (sizeY - 2 * StartY - 5) / 2 + 12);
	cout << " __    ___  _  _  ___  __      ___ ";
	GotoXY((sizeX - 2 * StartX + 1) / 2, (sizeY - 2 * StartY - 5) / 2 + 13);
	cout << "(  )  (  _)( )( )(  _)(  )    (__ )";
	GotoXY((sizeX - 2 * StartX + 1) / 2, (sizeY - 2 * StartY - 5) / 2 + 14);
	cout << " )(__  ) _) \\\\//  ) _) )(__    (_ \\";
	GotoXY((sizeX - 2 * StartX + 1) / 2, (sizeY - 2 * StartY - 5) / 2 + 15);
	cout << "(____)(___) (__) (___)(____)  (___/";

	GotoXY(0, 0);
}

void DrawLoadFile()
{
	system("cls");
	GenerateBorder();	
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 3);
	cout << " __  _  _  ___  _  _  ____    ____  _  _  ___    ___  __  __    ___ ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 4);
	cout << "(  )( \\( )(  ,\\( )( )(_  _)  (_  _)( )( )(  _)  (  _)(  )(  )  (  _)";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << " )(  )  (  ) _/ )()(   )(      )(   )__(  ) _)   ) _) )(  )(__  ) _)";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << "(__)(_)\\_)(_)   \\__/  (__)    (__) (_)(_)(___)  (_)  (__)(____)(___)";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);
	cout << " _  _   __   __  __  ___    ____  __     __    __   __   ___  _     ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 8);
	cout << "( \\( ) (  ) (  \\/  )(  _)  (_  _)/  \\   (  )  /  \\ (  ) (   \\(_)    ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 9);
	cout << " )  (  /__\\  )    (  ) _)    )( ( () )   )(__( () )/__\\  ) ) )_     ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 10);
	cout << "(_)\\_)(_)(_)(_/\\/\\_)(___)   (__) \\__/   (____)\\__/(_)(_)(___/(_)    ";
}

void DrawErrorFile()
{
	system("cls");
	GenerateBorder();
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2);
	cout << "  __  __  _  _  __    ___     _  _  __  ____     __  ___  ___  _  _    ___  __  __    ___    ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 1);
	cout << " / _)/  \\( )( )(  )  (   \\   ( \\( )/  \\(_  _)   /  \\(  ,\\(  _)( \\( )  (  _)(  )(  )  (  _)   ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 2);
	cout << "( (_( () ))()(  )(__  ) ) )   )  (( () ) )(    ( () )) _/ ) _) )  (    ) _) )(  )(__  ) _) _ ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 3);
	cout << " \\__)\\__/ \\__/ (____)(___/   (_)\\_)\\__/ (__)    \\__/(_)  (___)(_)\\_)  (_)  (__)(____)(___)(_)";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 4);
	cout << " ____  ___   _  _     __   __   __   __  _  _                                                ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << "(_  _)(  ,) ( \\/ )   (  ) / _) (  ) (  )( \\( )                                               ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << "  )(   )  \\  \\  /    /__\\( (/\\ /__\\  )(  )  (                                                ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);
	cout << " (__) (_)\\_)(__/    (_)(_)\\__/(_)(_)(__)(_)\\_)                                               ";



	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 13);
	cout << " __  _  _  ___  _  _  ____    ____  _  _  ___    ___  __  __    ___ ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 14);
	cout << "(  )( \\( )(  ,\\( )( )(_  _)  (_  _)( )( )(  _)  (  _)(  )(  )  (  _)";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 15);
	cout << " )(  )  (  ) _/ )()(   )(      )(   )__(  ) _)   ) _) )(  )(__  ) _)";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 16);
	cout << "(__)(_)\\_)(_)   \\__/  (__)    (__) (_)(_)(___)  (_)  (__)(____)(___)";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 17);
	cout << " _  _   __   __  __  ___    ____  __     __    __   __   ___  _     ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 18);
	cout << "( \\( ) (  ) (  \\/  )(  _)  (_  _)/  \\   (  )  /  \\ (  ) (   \\(_)    ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 19);
	cout << " )  (  /__\\  )    (  ) _)    )( ( () )   )(__( () )/__\\  ) ) )_     ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 20);
	cout << "(_)\\_)(_)(_)(_/\\/\\_)(___)   (__) \\__/   (____)\\__/(_)(_)(___/(_)    ";
}

void DrawSaveFile()
{
	system("cls");
	GenerateBorder();
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 3);
	cout << " __  _  _  ___  _  _  ____    ____  _  _  ___    ___  __  __    ___ ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 4);
	cout << "(  )( \\( )(  ,\\( )( )(_  _)  (_  _)( )( )(  _)  (  _)(  )(  )  (  _)";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << " )(  )  (  ) _/ )()(   )(      )(   )__(  ) _)   ) _) )(  )(__  ) _)";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << "(__)(_)\\_)(_)   \\__/  (__)    (__) (_)(_)(___)  (_)  (__)(____)(___)";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);
	cout << " _  _   __   __  __  ___    ____  __     ___   __  _  _  ___  _     ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 8);
	cout << "( \\( ) (  ) (  \\/  )(  _)  (_  _)/  \\   / __) (  )( )( )(  _)(_)    ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 9);
	cout << " )  (  /__\\  )    (  ) _)    )( ( () )  \\__ \\ /__\\ \\\\//  ) _) _     ";
	GotoXY((sizeX - 2 * StartX - 45) / 2, (sizeY - 2 * StartY - 15) / 2 + 10);
	cout << "(_)\\_)(_)(_)(_/\\/\\_)(___)   (__) \\__/   (___/(_)(_)(__) (___)(_)    ";
}

void DrawInstruction()
{
	system("cls");
	GenerateBorder();
	
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 - 8);
	cout << " _    _  ___  __    __  __  __  __  ___    ____  __      __  _  _  ___      __   __   __  __  ___ ";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 - 7);
	cout << "( \\/\\/ )(  _)(  )  / _)/  \\(  \\/  )(  _)  (_  _)/  \\    /  \\( )( )(  ,)    / _) (  ) (  \\/  )(  _)";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 - 6);
	cout << " \\    /  ) _) )(__( (_( () ))    (  ) _)    )( ( () )  ( () ))()(  )  \\   ( (/\\ /__\\  )    (  ) _)";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 - 5);
	cout << "  \\/\\/  (___)(____)\\__)\\__/(_/\\/\\_)(___)   (__) \\__/    \\__/ \\__/ (_)\\_)   \\__/(_)(_)(_/\\/\\_)(___)";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 - 1);
	cout << " ___  _  _  __    ___ ";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 0);
	cout << "(  ,)( )( )(  )  (  _)";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 1);
	cout << " )  \\ )()(  )(__  ) _)";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 2);
	cout << "(_)\\_)\\__/ (____)(___)";
	GotoXY((sizeX - 2 * StartX - 40) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	cout << "- YOU HAVE TO PASS 3 LEVELS TO COMPLETE THE GAME.";
	GotoXY((sizeX - 2 * StartX - 40) / 2, (sizeY - 2 * StartY - 15) / 2 + 6);
	cout << "- SNAKE RUNS FASTER FOR EACH LEVEL PASSED.";
	GotoXY((sizeX - 2 * StartX - 40) / 2, (sizeY - 2 * StartY - 15) / 2 + 7);
	cout << "- TO PASS THE LEVEL, SNAKE NEED TO EAT 8, 16, 24 FOOD.";
	GotoXY((sizeX - 2 * StartX - 40) / 2, (sizeY - 2 * StartY - 15) / 2 + 8);
	cout << "- THE SNAKE REMAINS THE LENGTH OF 6 WHEN PASSED THE LEVEL.";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 10);
	cout << " _  _  __  _    _    ____  __     ___  __     __   _  _  ___ ";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 11);
	cout << "( )( )/  \\( \\/\\/ )  (_  _)/  \\   (  ,\\(  )   (  ) ( \\/ )(__ )";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 12);
	cout << " )__(( () )\\    /     )( ( () )   ) _/ )(__  /__\\  \\  /  (_/ ";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 13);
	cout << "(_)(_)\\__/  \\/\\/     (__) \\__/   (_)  (____)(_)(_)(__/   (_) ";
	GotoXY((sizeX - 2 * StartX - 40) / 2, (sizeY - 2 * StartY - 15) / 2 + 16);
	cout << "- PRESS THE 'A', 'W', 'S', 'D' KEYS OR 'ARROW_LEFT', 'ARROW_UP', 'ARROW_DOWN', 'ARROW_RIGHT' KEYS";
	GotoXY((sizeX - 2 * StartX - 40) / 2, (sizeY - 2 * StartY - 15) / 2 + 17);
	cout << "  TO MOVE THE SNAKE LEFT, UP, DOWN AND RIGHT.";
	GotoXY((sizeX - 2 * StartX - 40) / 2, (sizeY - 2 * StartY - 15) / 2 + 18);
	cout << "- PRESS THE 'T' TO LOAD THE FILE.";
	GotoXY((sizeX - 2 * StartX - 40) / 2, (sizeY - 2 * StartY - 15) / 2 + 19);
	cout << "- PRESS THE 'T' TO LOAD THE FILE.";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 22);
	cout << " ___  ___   ___  ___  ___     __   _  _  _  _    _ _   ___  _  _    ____  __       ";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 23);
	cout << "(  ,\\(  ,) (  _)/ __)/ __)   (  ) ( \\( )( \\/ )  ( ) ) (  _)( \\/ )  (_  _)/  \\      ";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 24);
	cout << " ) _/ )  \\  ) _)\\__ \\\\__ \\   /__\\  )  (  \\  /    )  \\  ) _) \\  /     )( ( () )     ";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 25);
	cout << "(_)  (_)\\_)(___)(___/(___/  (_)(_)(_)\\_)(__/    (_)\\_)(___)(__/     (__) \\__/      ";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 26);
	cout << " ___   ___  ____  _  _  ___   _  _    ____  _  _  ___    __  __  ___  __  __  _  _ ";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 27);
	cout << "(  ,) (  _)(_  _)( )( )(  ,) ( \\( )  (_  _)( )( )(  _)  (  \\/  )(  _)(  \\/  )( )( )";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 28);
	cout << " )  \\  ) _)  )(   )()(  )  \\  )  (     )(   )__(  ) _)   )    (  ) _) )    (  )()( ";
	GotoXY((sizeX - 2 * StartX - 50) / 2, (sizeY - 2 * StartY - 15) / 2 + 29);
	cout << "(_)\\_)(___) (__)  \\__/ (_)\\_)(_)\\_)   (__) (_)(_)(___)  (_/\\/\\_)(___)(_/\\/\\_) \\__/ ";

	char key = _getch();

	if (key)
	{
		system("cls");
		DrawTitle();
		GenerateBorder();
		return;
	}
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

void Question(int selectedOption)
{
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 5);
	if (selectedOption == YES)
		DrawChooseYes();
	else
		DrawNotChooseYes();
	GotoXY((sizeX - 2 * StartX - 20) / 2, (sizeY - 2 * StartY - 15) / 2 + 11);
	if (selectedOption == NO)
		DrawChooseNo();
	else
		DrawNotChooseNo();
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
				DrawInstruction();
				break;
			case EXIT:
				DrawThankYou();
				return; // Exit the program
			}
		}
	}
}

void YesNoMenu()
{
	DrawQuestion();

	int chooseOption = YES; // Default selected option is PLAY

	while (true) {
		Question(chooseOption);

		char key = _getch(); // Get user input without waiting for Enter key

		if (key == 'w' || key == 'W' || key == ARROW_UP) {
			chooseOption = (chooseOption == YES) ? NO : static_cast<ChooseOption>(chooseOption - 1);
		}
		else if (key == 's' || key == 'S' || key == ARROW_DOWN) {
			chooseOption = (chooseOption == NO) ? YES : static_cast<ChooseOption>(chooseOption + 1);
		}
		else if (key == ENTER_KEY) { // ASCII value of Enter key
			switch (chooseOption) {
			case YES:
				obsPos.clear();
				foodPos.clear();
				gatePos.clear();
				gateGenerated = false;
				RunGame();
				return;
			case NO:
				DrawThankYou();
				Sleep(5000);
				exit(0);
				return;
			}
		}
	}
}

void ShowLevelIn()
{
	if (currentLevel == 0)
		DrawLevel1();
	else if (currentLevel == 1)
		DrawLevel2();
	else if (currentLevel == 2)
		DrawLevel3();
	else
		return;

	Sleep(3000);
}

void SaveGame(unsigned char temp)
{
	system("cls");
	GenerateBorder();
	string name;

	DrawSaveFile();

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
	fout << "Level: " << currentLevel << endl;

	fout.close();
}

void LoadGame(unsigned char& temp, int& SPD)
{
	system("cls");
	GenerateBorder();
	string name;
	
	DrawLoadFile();

	getline(cin, name);
	name = name + ".txt";

	ifstream fin(name);


	while (!fin.is_open())
	{
		DrawErrorFile();

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
		else if (line.find("Level:") != string::npos)
		{
			stringstream ss(line);
			string speedStr;
			ss >> speedStr >> currentLevel;
		}
	}


	fin.close();
}

void RunGame()
{
	system("cls");

	ShowLevelIn();

	system("cls");

	if (currentLevel == 1 || currentLevel == 2)
		KeepLastSixElement();
	else if (currentLevel == 0)
		snakePos.clear();

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
				SaveGame(temp);
				DrawFileSaved();
				Sleep(5000);
				DrawTitle();
				return;
			case T_KEY:
				LoadGame(temp, time_sleep);
				SPD = time_sleep;
				RunGame();
				break;
			default:
				break;

			}
		}

		time_sleep = 100 - SPD * SPEED_FACTOR;
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