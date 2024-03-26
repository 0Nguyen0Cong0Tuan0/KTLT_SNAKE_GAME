#include "map_generator.hpp"

void GenerateBorder()
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

void GenerateRandomFood()
{
	int xFood, yFood;;

	do
	{
		xFood = rand() % (sizeX - 2 * StartX - 2) + (StartX + 1);
		yFood = rand() % (sizeY - 2 * StartY - 2) + (StartY + 1);

	} while (find(obsPos.begin(), obsPos.end(), make_pair(xFood, yFood)) != obsPos.end());

	foodPos.push_back(make_pair(xFood, yFood));

	GotoXY(xFood, yFood);
	cout << "O";
}

void GenerateObstacles()
{
	int xObs, yObs;
	if (currentLevel == 0)
	{
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
	else if (currentLevel == 1)
	{
		for (int i = 0; i < NUM_OBSTACLES_LV_2; i++)
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
	else if (currentLevel == 2)
	{
		for (int i = 0; i < NUM_OBSTACLES_LV_3; i++)
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
}

void GenerateGate()
{
	int xGate, yGate;

	do
	{
		xGate = rand() % (sizeX - 2 * StartX - 10) + (StartX + 1);
		yGate = rand() % (sizeY - 2 * StartY - 10) + (StartY + 1);

	} while (find(obsPos.begin(), obsPos.end(), make_pair(xGate, yGate)) != obsPos.end());

	gatePos.push_back(make_pair(xGate, yGate));

	GotoXY(xGate - 1, yGate);
	cout << "[";
	GotoXY(xGate, yGate);
	cout << "_";
	GotoXY(xGate + 1, yGate);
	cout << "]";
}