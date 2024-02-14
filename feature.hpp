#pragma once
#include "snake.hpp"

void SaveGame(vector<pair<int, int>> obsPos, vector<pair<int, int>> foodPos, vector<pair<int, int>> snakePos, unsigned char temp, int SPD);

void LoadGame(vector<pair<int, int>>& obsPos, vector<pair<int, int>>& foodPos, vector<pair<int, int>>& snakePos, unsigned char& temp, int& SPD);

void RunGameAgain(vector<pair<int, int>>& obsPos, vector<pair<int, int>>& foodPos, vector<pair<int, int>>& snakePos, int sizeX, int sizeY);