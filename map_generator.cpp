#include "map_generator.hpp"

void GenerateBorder(int sizeX, int sizeY)
{
	
	for (int i = StartX; i < sizeX - StartX; i++)
	{
		GotoXY(i, StartY);
		cout << "#";
	}

	for (int i = StartX; i < sizeX - StartX; i++)
	{
		GotoXY(i, sizeY - StartY);
		cout << "#";
	}

	for (int i = StartY; i < sizeY - StartY + 1 ;i++)
	{
		GotoXY(StartX, i);
		cout << "#";
	}

	for (int i = StartY; i < sizeY - StartY + 1; i++)
	{
		GotoXY(sizeX - StartX, i);
		cout << "#";
	}

	GotoXY(0, sizeY - 1);
}

void GenerateRandomFood(int sizeX, int sizeY, vector<pair<int, int>>& foodPos, const vector<pair<int, int>> obsPos)
{
	int xFood, yFood;
	int countX = 0;
	int countY = 0;

	do
	{
		xFood = rand() % (sizeX - 2 * StartX - 1) + (StartX + 1) + countX;
		yFood = rand() % (sizeY - 2 * StartY - 1) + (StartY + 1) + countY;
		countX += 2;
		countY += 1;
	} while (find(obsPos.begin(), obsPos.end(), make_pair(xFood, yFood)) != obsPos.end());

	foodPos.push_back(make_pair(xFood, yFood));

	GotoXY(xFood, yFood);
	cout << "O";
}

void GenerateObstacles(int sizeX, int sizeY, vector<pair<int, int>>& obsPos)
{
	int xObs, yObs;
	for (int i = 0; i < NUM_OBSTACLES_LV_1; i++)
	{
		do
		{
			xObs = rand() % (sizeX - 2 * StartX - 1) + (StartX + 1);
			yObs = rand() % (sizeY - 2 * StartY - 1) + (StartY + 1);

		} while (find(obsPos.begin(), obsPos.end(), make_pair(xObs, yObs)) != obsPos.end());

		obsPos.push_back(make_pair(xObs, yObs));

		GotoXY(xObs, yObs);
		cout << "|";
	}
}