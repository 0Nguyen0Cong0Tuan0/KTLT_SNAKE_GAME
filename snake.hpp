#pragma once
#include "header.hpp"

static int SPD = 0;

void InitSnake(int sizeX, int sizeY, vector<pair<int,int>>& snakePos, vector<pair<int, int>> obsPos);

void DrawSnake(vector<pair<int, int>> snakePos);

void EatFood(vector<pair<int, int>>& snakePos, vector<pair<int, int>> foodPos);

void IncreaseSpeed();

int ReturnSpeed();

bool HitBody(int sizeX, int sizeY, vector<pair<int, int>>& snakePos);

void ProcessDead(int sizeY);

void MoveRight(int sizeX, int sizeY, vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

void MoveLeft(int sizeX, int sizeY, vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

void MoveUp(int sizeX, int sizeY, vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

void MoveDown(int sizeX, int sizeY, vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

unsigned char InputKey();