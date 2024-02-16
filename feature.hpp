#pragma once
#include "snake.hpp"

void SaveGame(unsigned char temp, int SPD);

void LoadGame(unsigned char& temp, int& SPD);

void RunGameAgain();