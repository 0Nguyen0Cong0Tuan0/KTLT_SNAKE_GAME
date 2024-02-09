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

	unsigned char ch = ARROW_RIGHT;
	unsigned char temp = ARROW_RIGHT;
    int time_sleep = 0;

    while (ch)
    {
        if (_kbhit()) // Check if a key has been pressed
        {
            ch = InputKey();
        }

        time_sleep = 100 - ReturnSpeed() * SPEED_FACTOR;
        Sleep(time_sleep);

        if ((ch == ARROW_UP && temp != ARROW_DOWN) ||
            (ch == ARROW_DOWN && temp != ARROW_UP) ||
            (ch == ARROW_LEFT && temp != ARROW_RIGHT) ||
            (ch == ARROW_RIGHT && temp != ARROW_LEFT))
        {
            temp = ch;
        }

        switch (temp) // Use temp instead of ch to maintain current direction
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
        default:
            break;
        } 
    }

	GotoXY(0, size.Y - 3);
	return 0;
}