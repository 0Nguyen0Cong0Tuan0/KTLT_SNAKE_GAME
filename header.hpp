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


#define MAX_SIZE_SNAKE 16
#define MAX_SIZE_FOOD 6

#define MAX_SPEED 3

#define MSSV "22127052_22127089_22127365_22127436"

#define SPEED_FACTOR 5

//POINT snake[MAX_SIZE_SNAKE];
//POINT food[MAX_SIZE_FOOD];

//int DIR_LOCK, DIR, WIN_HEIGHT;
//int FOOD_INDX, SIZE_SNAKE = 6;

//bool ALIVE;