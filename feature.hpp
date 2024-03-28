#pragma once
#include "snake.hpp"

void DrawTitle();

void DrawQuestion();

void DrawThankYou();

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

void DrawErrorFile();

void DrawLevel1();

void DrawLevel2();

void DrawLevel3();

void DrawLoadFile();

void DrawSaveFile();

void DrawInstruction();

void DrawFileSaved();

void Menu(int selectedOption);

void Question(int selectedOption);

void DisplayMenu();

void YesNoMenu();

void ShowLevelIn();

void SaveGame(unsigned char temp);

void LoadGame(unsigned char& temp, int& SPD);

void RunGame();