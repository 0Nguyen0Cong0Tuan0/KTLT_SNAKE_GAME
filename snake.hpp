#pragma once
#include "header.hpp"

void InitSnake(int sizeX, int sizeY, vector<pair<int,int>>& snakePos, vector<pair<int, int>> obsPos);

void DrawSnake(vector<pair<int, int>> snakePos);

void EatFood(vector<pair<int, int>>& snakePos, vector<pair<int, int>> foodPos);

void ProcessDead(int sizeY);

void MoveRight(int sizeX, int sizeY, vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

void MoveLeft(int sizeX, int sizeY, vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

void MoveUp(int sizeX, int sizeY, vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

void MoveDown(int sizeX, int sizeY, vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

unsigned char InputKey();