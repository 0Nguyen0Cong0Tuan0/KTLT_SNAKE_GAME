#include "console_generator.hpp"
#include "map_generator.hpp"
#include "snake.hpp"
using namespace std;

int main()
{
	srand(static_cast<unsigned>(time(0)));

	RunSetConsole();


	// GAMEPLAY
	COORD size = GetConsoleWindowSize();

	vector<pair<int, int>> obsPos;
	vector<pair<int, int>> foodPos;
	vector<pair<int, int>> snakePos;

	GenerateBorder(size.X, size.Y);
	GenerateObstacles(size.X, size.Y, obsPos);
	GenerateRandomFood(size.X, size.Y, foodPos, obsPos);

	InitSnake(size.X, size.Y, snakePos, obsPos);
	DrawSnake(snakePos);

	GotoXY(0, size.Y - 3);
	return 0;
}