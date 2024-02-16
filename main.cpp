#include "console_generator.hpp"
#include "map_generator.hpp"
#include "snake.hpp"
#include "feature.hpp"
#include "header.hpp"

using namespace std;

int sizeX;
int sizeY;

vector<pair<int, int>> obsPos;
vector<pair<int, int>> foodPos;
vector<pair<int, int>> snakePos;

int main()
{
	srand(static_cast<unsigned>(time(0)));

	RunSetConsole();

	// GAMEPLAY
	COORD size = GetConsoleWindowSize();
    sizeX = size.X;
    sizeY = size.Y;
	
    GenerateBorder();
    GenerateObstacles();
    GenerateRandomFood();

    InitSnake();
    DrawSnake();

    unsigned char ch = ARROW_RIGHT;
    unsigned char temp = ARROW_RIGHT;
    int time_sleep = 0;

    while (ch)
    {
        if (_kbhit()) // Check if a key has been pressed
        {
            ch = InputKey();

            switch (ch)
            {
            case L_KEY:
                SaveGame(temp, ReturnSpeed());
                cout << "THANK FOR PLAYING THE GAME\n";
                Sleep(10000);
                return 0;
            case T_KEY:
                LoadGame(temp, time_sleep);
                SPD = time_sleep;
                RunGameAgain();
                break;
            default:
                break;

            }
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
            MoveUp();
            break;
        case ARROW_DOWN:
            MoveDown();
            break;
        case ARROW_LEFT:
            MoveLeft();
            break;
        case ARROW_RIGHT:
            MoveRight();
            break;
        default:
            break;
        }
    }

    GotoXY(0, size.Y - 3);
	return 0;
}