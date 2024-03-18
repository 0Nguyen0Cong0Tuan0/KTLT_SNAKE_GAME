#pragma once
#include "snake.hpp"

void DrawTitle();

void DrawChoosePlay();

void DrawNotChoosePlay();

void DrawChooseOption();

void DrawNotChooseOption();

void DrawChooseExit();

void DrawNotChooseExit();

void Menu(int selectedOption);

void DisplayMenu();

void SaveGame(unsigned char temp, int SPD);

void LoadGame(unsigned char& temp, int& SPD);

void RunGameAgain();

void RunGame();