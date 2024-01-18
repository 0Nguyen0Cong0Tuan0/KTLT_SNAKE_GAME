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

	unsigned char ch;

	while (true)
	{
		ch = InputKey();
		switch (ch)
		{
		case ARROW_UP:
			MoveUp(size.X, size.Y, snakePos, foodPos, obsPos);
			break;
		case ARROW_DOWN:
			MoveDown(size.X, size.Y, snakePos, foodPos, obsPos);
			break;
		case ARROW_LEFT:
			MoveLeft(size.X, size.Y, snakePos, foodPos, obsPos);
			break;
		case ARROW_RIGHT:
			MoveRight(size.X, size.Y, snakePos, foodPos, obsPos);
			break;
		}
	}

	GotoXY(0, size.Y - 3);
	return 0;
}