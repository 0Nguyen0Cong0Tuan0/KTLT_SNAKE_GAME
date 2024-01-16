#pragma once
#include "header.hpp"

#define BLACK 0
#define AQUA 3
#define RED 4
#define WHITE 7
#define GRAY 8
#define GREEN 10
#define PINK 13
#define YELLOW 14

void MoveConsoleWindowTo(int x, int y);

void CustomizeConsole();

void SetConsoleSizeToFullScreen();

void FixConsoleWindow();

COORD GetConsoleWindowSize();

void HideScrollbar();

void RunSetConsole();

void GotoXY(int x, int y);

void TextColor(int backgroundColor, int textColor);
