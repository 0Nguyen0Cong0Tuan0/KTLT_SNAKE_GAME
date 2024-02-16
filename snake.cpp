#include "snake.hpp"

void InitSnake(vector<pair<int,int>>& snakePos, vector<pair<int,int>> obsPos)
{
	int snakeX, snakeY;
	do
	{
		snakeX = (sizeX - 2 * StartX - 1) / 2;
		snakeY = (sizeY - 2 * StartY - 1) / 2;
	} while (find(obsPos.begin(), obsPos.end(), make_pair(snakeX, snakeY)) != obsPos.end());
	
	snakePos.push_back(make_pair(snakeX, snakeY));
}

void DrawSnake(vector<pair<int, int>> snakePos)
{
	for (int i = snakePos.size() - 1, j = 0; i >= 0 && j < snakePos.size(); i--, j++)
	{
		GotoXY(snakePos[j  ].first, snakePos[j].second);
		TextColor(BLACK, GREEN);
		cout << MSSV[i];
		TextColor(BLACK, WHITE);
	}
}

void CheckEnoughFood()
{
	if (FOOD_COUNT == MAX_SIZE_FOOD)
	{
		GotoXY(0, sizeY - 2);
		cout << "Congratulation! You pass the round" << endl;
	}
	else
		FOOD_COUNT += 1;
}

void EatFood(vector<pair<int, int>>& snakePos, vector<pair<int, int>> foodPos)
{
	// Just eat
	snakePos.insert(snakePos.begin(), make_pair(foodPos[0].first, foodPos[0].second));
	CheckEnoughFood();

}

void IncreaseSpeed()
{
	SPD += 1;
}

int ReturnSpeed()
{
	return SPD;
}

bool HitBody(vector<pair<int, int>>& snakePos)
{
	// Start from the second segment of the snake's body (index 1) since we don't need to compare the head with itself
	for (int i = 3; i < snakePos.size(); i++)
	{
		// Check if the head position matches any other segment of the snake's body
		if (snakePos[0] == snakePos[i])
		{
			return true; // Collision detected
		}
	}
	return false; // No collision detected
}

void ProcessDead(vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos)
{
	GotoXY(0, sizeY - 2);
	cout << "Dead!!! Please enter any key to exit" << endl;
	cout << "Do you want to continue the game? (y: yes | n: no): ";
	unsigned char player_choose = 'm';
	cin >> player_choose;

	while (player_choose != 'Y' && player_choose != 'y' && player_choose != 'N' && player_choose != 'n')
	{
		cout << "Invalid answer. Please try again!" << endl;
		cout << "Do you want to continue the game? (y: yes | n: no): ";
		cin >> player_choose;
	}

	if (player_choose == 'y' || player_choose == 'Y')
	{
		obsPos.clear();
		foodPos.clear();
		snakePos.clear();
		RunGameAgain(obsPos, foodPos, snakePos, sizeX, sizeY);
	}
	else
	{
		cout << "THANK FOR PLAYING THE GAME\n";
		Sleep(10000);
		exit(0);
	}
}

void MoveRight(vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos)
{
	// HIT THE OBSTACLE
	for (int i = 0; i < obsPos.size(); i++)
	{
		if (snakePos[snakePos.size() - 1].first == obsPos[i].first - 1 && snakePos[snakePos.size() - 1].second == obsPos[i].second)
		{
			ProcessDead(snakePos, foodPos, obsPos);
		}
	}

	// HIT THE BOADER
	if (snakePos[snakePos.size() - 1].first == sizeX - StartX)
	{
		ProcessDead(snakePos, foodPos, obsPos);
	}
	else
	{
		if (HitBody(snakePos))
		{
			ProcessDead(snakePos, foodPos, obsPos);
		}
		else
		{
			if (snakePos[0] == foodPos[0])
			{
				EatFood(snakePos, foodPos);
				foodPos.pop_back();
				GenerateRandomFood(foodPos, obsPos);
			}

			// Move the snake only if there's no collision
			GotoXY(snakePos[0].first, snakePos[0].second);
			TextColor(BLACK, BLACK);
			cout << " ";
			TextColor(BLACK, WHITE);

			for (int i = 0; i < snakePos.size() - 1; i++)
			{
				snakePos[i].first = snakePos[i + 1].first;
				snakePos[i].second = snakePos[i + 1].second;
			}

			snakePos[snakePos.size() - 1].first++;

			DrawSnake(snakePos);
		}
	}
}

void MoveLeft(vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos)
{
	// HIT THE OBSTACLE
	for (int i = 0; i < obsPos.size(); i++)
	{
		if (snakePos[snakePos.size() - 1].first == obsPos[i].first + 1 && snakePos[snakePos.size() - 1].second == obsPos[i].second)
		{
			ProcessDead(snakePos, foodPos, obsPos);
		}
	}

	// HIT THE BOADER
	if (snakePos[snakePos.size() - 1].first == StartX)
	{
		ProcessDead(snakePos, foodPos, obsPos);
	}
	else
	{
		if (HitBody(snakePos))
		{
			ProcessDead(snakePos, foodPos, obsPos);
		}
		else
		{
			if (snakePos[0] == foodPos[0])
			{
				EatFood(snakePos, foodPos);
				foodPos.pop_back();
				GenerateRandomFood(foodPos, obsPos);
			}

			GotoXY(snakePos[0].first, snakePos[0].second);
			TextColor(BLACK, BLACK);
			cout << " ";
			TextColor(BLACK, WHITE);

			for (int i = 0; i < snakePos.size() - 1; i++)
			{
				snakePos[i].first = snakePos[i + 1].first;
				snakePos[i].second = snakePos[i + 1].second;
			}
			snakePos[snakePos.size() - 1].first--;

			DrawSnake(snakePos);
		}
	}
}

void MoveUp(vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos)
{
	for (int i = 0; i < obsPos.size(); i++)
	{
		if (snakePos[snakePos.size() - 1].first == obsPos[i].first && snakePos[snakePos.size() - 1].second == obsPos[i].second + 1)
		{
			ProcessDead(snakePos, foodPos, obsPos);
		}
	}

	if (snakePos[snakePos.size() - 1].second == StartY)
	{
		ProcessDead(snakePos, foodPos, obsPos);
	}
	else
	{
		if (HitBody(snakePos))
		{
			ProcessDead(snakePos, foodPos, obsPos);
		}
		else
		{
			if (snakePos[0] == foodPos[0])
			{
				EatFood(snakePos, foodPos);
				foodPos.pop_back();
				GenerateRandomFood(foodPos, obsPos);
			}

			GotoXY(snakePos[0].first, snakePos[0].second);
			TextColor(BLACK, BLACK);
			cout << " ";
			TextColor(BLACK, WHITE);

			for (int i = 0; i < snakePos.size() - 1; i++)
			{
				snakePos[i].first = snakePos[i + 1].first;
				snakePos[i].second = snakePos[i + 1].second;
			}
			snakePos[snakePos.size() - 1].second--;

			DrawSnake(snakePos);
		}
	}
}

void MoveDown(vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos)
{
	for (int i = 0; i < obsPos.size(); i++)
	{
		if (snakePos[snakePos.size() - 1].first == obsPos[i].first && snakePos[snakePos.size() - 1].second == obsPos[i].second - 1)
		{
			ProcessDead(snakePos, foodPos, obsPos);
		}
	}

	if (snakePos[snakePos.size() - 1].second == sizeY - StartY)
	{
		ProcessDead(snakePos, foodPos, obsPos);
	}
	else
	{
		if (HitBody(snakePos))
		{
			ProcessDead(snakePos, foodPos, obsPos);
		}
		else
		{
			if (snakePos[0] == foodPos[0])
			{
				EatFood(snakePos, foodPos);
				foodPos.pop_back();
				GenerateRandomFood(foodPos, obsPos);
			}

			GotoXY(snakePos[0].first, snakePos[0].second);
			TextColor(BLACK, BLACK);
			cout << " ";
			TextColor(BLACK, WHITE);

			for (int i = 0; i < snakePos.size() - 1; i++)
			{
				snakePos[i].first = snakePos[i + 1].first;
				snakePos[i].second = snakePos[i + 1].second;
			}
			snakePos[snakePos.size() - 1].second++;

			DrawSnake(snakePos);
		}
	}
}

unsigned char InputKey()
{
	unsigned char ch = _getch();

	if (ch == 0x00)
	{
		ch = _getch();

		switch (ch)
		{
		case ARROW_UP:
			return ch;
		case ARROW_LEFT:
			return ch;
		case ARROW_RIGHT:
			return ch;
		case ARROW_DOWN:
			return ch;
		default:
			return ARROW_NONE;
		}
	}
	else
	{
		switch (ch)
		{
		case 'W': case 'w':
			return ARROW_UP;
		case 'A': case 'a':
			return ARROW_LEFT;
		case 'D': case 'd':
			return ARROW_RIGHT;
		case 'S': case 's':
			return ARROW_DOWN;
		case 'L': case 'l':
			return L_KEY;
		case 'T': case 't':
			return T_KEY;
		}
	}

	if (ch == ENTER_KEY || ch == SPACE_KEY)
		return ENTER_KEY;

	if (ch == ESC_KEY)
		return ch;

	return ch;
}