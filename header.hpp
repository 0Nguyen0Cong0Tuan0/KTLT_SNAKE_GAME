#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <vector>
#include <windows.h>

using namespace std;

#define ARROW_UP 0x48
#define ARROW_LEFT 0x4B
#define ARROW_RIGHT 0x4D
#define ARROW_DOWN 0x50
#define ARROW_NONE 0x00
#define ESC_KEY 0x1B
#define L_KEY 0x4C
#define T_KEY 0x54
#define ENTER_KEY 0x0D
#define SPACE_KEY 0x20

#define LEVEL_1_LENGTH 8
#define LEVEL_2_LENGTH 16
#define LEVEL_3_LENGTH 24

#define MAX_SPEED 3

#define MSSV "22127052_22127089_22127365_22127436"

extern int sizeX;
extern int sizeY;
extern int currentLevel;
extern int SPEED_FACTOR;
extern int SPD;

extern vector<pair<int, int>> obsPos;
extern vector<pair<int, int>> foodPos;
extern vector<pair<int, int>> snakePos;
extern vector<pair<int, int>> tempSnakePos;
extern vector<pair<int, int>> gatePos;

enum MenuOption
{
	PLAY,
	OPTIONS,
	EXIT
};

enum ChooseOption
{
	YES,
	NO
};

//POINT snake[MAX_SIZE_SNAKE];
//POINT food[MAX_SIZE_FOOD];

//int DIR_LOCK, DIR, WIN_HEIGHT;
//int FOOD_INDX, SIZE_SNAKE = 6;

//bool ALIVE;

#endif // HEADER_HPP