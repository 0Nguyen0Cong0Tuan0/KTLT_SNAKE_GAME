#pragma once
#include "snake.hpp"

void DrawTitle();

void DrawQuestion();

void DrawChooseYes();

void DrawNotChooseYes();

void DrawChooseNo();

void DrawNotChooseNo();

void DrawChoosePlay();

void DrawNotChoosePlay();

void DrawChooseOption();

void DrawNotChooseOption();

void DrawChooseExit();

void DrawNotChooseExit();

void Menu(int selectedOption);

void Question(int selectedOption);

void DisplayMenu();

void YesNoMenu();

void SaveGame(unsigned char temp, int SPD);

void LoadGame(unsigned char& temp, int& SPD);

void RunGameAgain();

void RunGame();