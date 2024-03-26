#pragma once
#include "header.hpp"
#include "map_generator.hpp"
#include "console_generator.hpp"
#include "feature.hpp"

static int FOOD_COUNT = 0;
static bool gateGenerated = false;

void InitSnake();

void DrawSnake();

void EraseSnake();

bool IsPass();

void CheckEnoughFood();

void whatLevel();

void KeepLastSixElement();

void DelayAnimation();

void RenderSnake();

bool IsGoInGate();

void GoInGate();

void EatFood();

void IncreaseSpeed();

bool HitBody();

void ProcessDead();

void MoveRight();

void MoveLeft();

void MoveUp();

void MoveDown();

unsigned char InputKey();