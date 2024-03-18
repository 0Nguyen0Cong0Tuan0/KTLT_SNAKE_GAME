#include "snake.hpp"



void InitSnake()
{
	int snakeX, snakeY;
	do
	{
		snakeX = (sizeX - 2 * StartX - 1) / 2;
		snakeY = (sizeY - 2 * StartY - 1) / 2;
	} while (find(obsPos.begin(), obsPos.end(), make_pair(snakeX, snakeY)) != obsPos.end());
	
	snakePos.push_back(make_pair(snakeX, snakeY));
}

void DrawSnake()
{
	for (int i = snakePos.size() - 1, j = 0; i >= 0 && j < snakePos.size(); i--, j++)
	{
		GotoXY(snakePos[j  ].first, snakePos[j].second);
		TextColor(BLACK, GREEN);
		cout << MSSV[i];
		TextColor(BLACK, WHITE);
	}
}

bool IsPass()
{
	return (FOOD_COUNT == LEVEL_1_LENGTH && currentLevel == 0 || FOOD_COUNT == LEVEL_2_LENGTH && currentLevel == 1 || FOOD_COUNT == LEVEL_3_LENGTH && currentLevel == 2);
}

void CheckEnoughFood()
{
	if (FOOD_COUNT == LEVEL_1_LENGTH && currentLevel == 0)
	{
		GotoXY(0, sizeY - 2);
		currentLevel = 1;
		cout << "Congratulation! You pass the level 1" << endl;
	}
	else if (FOOD_COUNT == LEVEL_2_LENGTH && currentLevel == 1)
	{
		GotoXY(0, sizeY - 2);
		currentLevel = 2;
		cout << "Congratulation! You pass the level 2" << endl;
	}
	else if (FOOD_COUNT == LEVEL_3_LENGTH && currentLevel == 2)
	{
		GotoXY(0, sizeY - 2);
		currentLevel = 3;
		cout << "Congratulation! You pass the level 3" << endl;
	}
	else
		FOOD_COUNT += 1;
}

void EatFood()
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

bool HitBody()
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

void ProcessDead()
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
		FOOD_COUNT = 0;
		SPD = 0;
		RunGameAgain();
	}
	else
	{
		cout << "THANK FOR PLAYING THE GAME\n";
		Sleep(10000);
		exit(0);
	}
}

void MoveRight()
{
	// HIT THE OBSTACLE
	for (int i = 0; i < obsPos.size(); i++)
	{
		if (snakePos[snakePos.size() - 1].first == obsPos[i].first - 1 && snakePos[snakePos.size() - 1].second == obsPos[i].second)
		{
			ProcessDead();
		}
	}

	// HIT THE BOADER
	if (snakePos[snakePos.size() - 1].first == sizeX - StartX)
	{
		ProcessDead();
	}
	else
	{
		if (HitBody())
		{
			ProcessDead();
		}
		else
		{
			if (snakePos[0] == foodPos[0])
			{
				EatFood();
				foodPos.pop_back();
				GenerateRandomFood();
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

			DrawSnake();
		}
	}
}

void MoveLeft()
{
	// HIT THE OBSTACLE
	for (int i = 0; i < obsPos.size(); i++)
	{
		if (snakePos[snakePos.size() - 1].first == obsPos[i].first + 1 && snakePos[snakePos.size() - 1].second == obsPos[i].second)
		{
			ProcessDead();
		}
	}

	// HIT THE BOADER
	if (snakePos[snakePos.size() - 1].first == StartX)
	{
		ProcessDead();
	}
	else
	{
		if (HitBody())
		{
			ProcessDead();
		}
		else
		{
			if (snakePos[0] == foodPos[0])
			{
				EatFood();
				foodPos.pop_back();
				GenerateRandomFood();
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

			DrawSnake();
		}
	}
}

void MoveUp()
{
	for (int i = 0; i < obsPos.size(); i++)
	{
		if (snakePos[snakePos.size() - 1].first == obsPos[i].first && snakePos[snakePos.size() - 1].second == obsPos[i].second + 1)
		{
			ProcessDead();
		}
	}

	if (snakePos[snakePos.size() - 1].second == StartY)
	{
		ProcessDead();
	}
	else
	{
		if (HitBody())
		{
			ProcessDead();
		}
		else
		{
			if (snakePos[0] == foodPos[0])
			{
				EatFood();
				foodPos.pop_back();
				GenerateRandomFood();
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

			DrawSnake();
		}
	}
}

void MoveDown() {
	for (int i = 0; i < obsPos.size(); i++) {
		if (snakePos[snakePos.size() - 1].first == obsPos[i].first && snakePos[snakePos.size() - 1].second == obsPos[i].second - 1) {
			ProcessDead();
		}
	}

	if (snakePos[snakePos.size() - 1].second == sizeY - StartY) {
		ProcessDead();
	}
	else {
		if (HitBody()) {
			ProcessDead();
		}
		else {
			if (!foodPos.empty() && snakePos[0] == foodPos[0]) {
				EatFood();
				foodPos.pop_back();
			}

			if (IsPass()) {
				if (!gateGenerated) {
					GenerateGate();
					gateGenerated = true;
				}
			}
			else if (!IsPass() && foodPos.empty()) {
				GenerateRandomFood();
			}

			GotoXY(snakePos[0].first, snakePos[0].second);
			TextColor(BLACK, BLACK);
			cout << " ";
			TextColor(BLACK, WHITE);

			for (int i = 0; i < snakePos.size() - 1; i++) {
				snakePos[i].first = snakePos[i + 1].first;
				snakePos[i].second = snakePos[i + 1].second;
			}
			snakePos[snakePos.size() - 1].second++;

			DrawSnake();
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