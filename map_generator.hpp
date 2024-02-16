#pragma once
#include "header.hpp"
#include "console_generator.hpp"

// Start drawing at (20,5) (top-left corner)
// End drawing at (sizeX - 20, sizeY - 5) (bottom-right corner)
#define StartX 20
#define StartY 5

#define NUM_OBSTACLES_LV_1 int(10)
#define NUM_OBSTACLES_LV_2 int(22)
#define NUM_OBSTACLES_LV_3 int(30)

void GenerateBorder();

void GenerateRandomFood(vector<pair<int,int>>& foodPos, vector<pair<int, int>> obsPos);

void GenerateObstacles(vector<pair<int, int>>& obsPos);