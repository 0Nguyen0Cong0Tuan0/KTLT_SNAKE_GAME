#pragma once
#include "header.hpp"
#include "map_generator.hpp"
#include "console_generator.hpp"
#include "feature.hpp"

static int SPD = 0;
static int FOOD_COUNT = 0;

void InitSnake(vector<pair<int,int>>& snakePos, vector<pair<int, int>> obsPos);

void DrawSnake(vector<pair<int, int>> snakePos);

void CheckEnoughFood();

void EatFood(vector<pair<int, int>>& snakePos, vector<pair<int, int>> foodPos);

void IncreaseSpeed();

int ReturnSpeed();

bool HitBody(vector<pair<int, int>>& snakePos);

void ProcessDead(vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

void MoveRight(vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

void MoveLeft(vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

void MoveUp(vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

void MoveDown(vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos);

unsigned char InputKey();