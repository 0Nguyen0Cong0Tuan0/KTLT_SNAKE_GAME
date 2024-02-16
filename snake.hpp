#pragma once
#include "header.hpp"
#include "map_generator.hpp"
#include "console_generator.hpp"
#include "feature.hpp"

static int SPD = 0;
static int FOOD_COUNT = 0;

void InitSnake();

void DrawSnake();

void CheckEnoughFood();

void EatFood();

void IncreaseSpeed();

int ReturnSpeed();

bool HitBody();

void ProcessDead();

void MoveRight();

void MoveLeft();

void MoveUp();

void MoveDown();

unsigned char InputKey();