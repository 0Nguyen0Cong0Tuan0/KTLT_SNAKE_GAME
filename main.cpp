#include "console_generator.hpp"
#include "map_generator.hpp"
#include "snake.hpp"
#include "feature.hpp"
#include "header.hpp"

using namespace std;

int sizeX;
int sizeY;

int SPEED_FACTOR;
int SPD;

vector<pair<int, int>> obsPos;
vector<pair<int, int>> foodPos;
vector<pair<int, int>> snakePos;
vector<pair<int, int>> tempSnakePos;
vector<pair<int, int>> gatePos;

int currentLevel;

int main()
{
	srand(static_cast<unsigned>(time(0)));

	RunSetConsole();

	// GAMEPLAY
	COORD size = GetConsoleWindowSize();
    sizeX = size.X;
    sizeY = size.Y;
	currentLevel = 0;
	SPD = 0;
	SPEED_FACTOR = 3;
    
    DisplayMenu();

    GotoXY(0, size.Y - 3);
	return 0;
}