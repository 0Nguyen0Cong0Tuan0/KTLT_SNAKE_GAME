#include "snake.hpp"
#include "map_generator.hpp"
#include "console_generator.hpp"

void InitSnake(int sizeX, int sizeY, vector<pair<int,int>>& snakePos, vector<pair<int,int>> obsPos)
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
	for (int i = 0; i < snakePos.size(); i++)
	{
		GotoXY(snakePos[i].first, snakePos[i].second);
		TextColor(BLACK, GREEN);
		cout << MSSV[0];
		TextColor(BLACK, WHITE);
	}
}

void EatFood(vector<pair<int, int>> snakePos, vector<pair<int, int>> foodPos)
{
	// Just eat
	snakePos[snakePos.size()] = foodPos[0];
	SPD += 1;
}

void ProcessDead(int sizeY)
{
	GotoXY(0, sizeY - 2);
	cout << "Dead!!! Please enter any key to exit";
}

void MoveRight(int sizeX, int sizeY, vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos)
{
	if (snakePos[0].first == sizeX - StartX - 1 && snakePos[0].second == sizeY - 2 * StartY - 1)
	{
		ProcessDead(sizeY);
	}
	else
	{
		if (snakePos[0] == foodPos[0])
		{
			EatFood(snakePos, foodPos);
			foodPos.pop_back();
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
		snakePos[snakePos.size() - 1].first++;

		DrawSnake(snakePos);
	}
}

void MoveLeft(int sizeX, int sizeY, vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos)
{
	if (snakePos[0].first == StartX + 1 && snakePos[0].second == sizeY - 2 * StartY - 1)
	{
		ProcessDead(sizeY);
	}
	else
	{
		if (snakePos[0] == foodPos[0])
		{
			EatFood(snakePos, foodPos);
			foodPos.pop_back();
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

void MoveUp(int sizeX, int sizeY, vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos)
{
	if (snakePos[0].first == sizeX - 2 * StartX - 1 && snakePos[0].second == StartY + 1)
	{
		ProcessDead(sizeY);
	}
	else
	{
		if (snakePos[0] == foodPos[0])
		{
			EatFood(snakePos, foodPos);
			foodPos.pop_back();
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

void MoveDown(int sizeX, int sizeY, vector<pair<int, int>>& snakePos, vector<pair<int, int>>& foodPos, vector<pair<int, int>> obsPos)
{
	if (snakePos[0].first == sizeX - 2 * StartX - 1 && snakePos[0].second == sizeY - StartY - 1)
	{
		ProcessDead(sizeY);
	}
	else
	{
		if (snakePos[0] == foodPos[0])
		{
			EatFood(snakePos, foodPos);
			foodPos.pop_back();
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