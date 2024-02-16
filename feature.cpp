#include "feature.hpp"
#include "map_generator.hpp"

void SaveGame(unsigned char temp, int SPD)
{
	system("cls");
	string name;

	cout << "Input the file name to save: ";
	getline(cin, name);
	name = name + ".txt";

	ofstream fout(name);

	fout << "Obstacles:\n";
	for (const auto& pos : obsPos)
		fout << pos.first << " " << pos.second << endl;

	fout << "Food:\n";
	fout << foodPos[0].first << " " << foodPos[0].second << endl;

	fout << "Snake:\n";
	for (const auto& pos : snakePos)
		fout << pos.first << " " << pos.second << endl;

	fout << "Direction: " << temp << endl;
	fout << "Speed: " << SPD << endl;

	fout.close();
}

void LoadGame(unsigned char& temp, int& SPD)
{
	system("cls");
	string name;

	cout << "Input the file name to load: ";
	getline(cin, name);
	name = name + ".txt";

	ifstream fin(name);


	while (!fin.is_open())
	{
		cout << "Error: Could not open file " << name << " .Try again!" << endl;

		cout << "Input the file name to load: ";
		getline(cin, name);
		name = name + ".txt";

		fin.open(name);
	}

	string line;
	while (getline(fin, line))
	{
		if (line == "Obstacles:")
		{
			obsPos.clear();
			while (getline(fin, line) && line != "Food:")
			{
				stringstream ss(line);
				int x, y;
				ss >> x >> y;
				obsPos.push_back(make_pair(x, y));
			}
		}
		else if (line == "Food:")
		{
			foodPos.clear();
			while (getline(fin, line) && line != "Snake:")
			{
				stringstream ss(line);
				int x, y;
				ss >> x >> y;
				foodPos.push_back(make_pair(x, y));
			}
		}
		else if (line == "Snake:")
		{
			snakePos.clear();
			while (getline(fin, line) && line != "Temp:")
			{
				stringstream ss(line);
				int x, y;
				ss >> x >> y;
				snakePos.push_back(make_pair(x, y));
			}
		}
		else if (line.find("Temp:") != string::npos)
		{
			stringstream ss(line);
			string tempStr;
			ss >> tempStr >> temp;
		}
		else if (line.find("Speed:") != string::npos)
		{
			stringstream ss(line);
			string speedStr;
			ss >> speedStr >> SPD;
		}
	}

	fin.close();
}

void RunGameAgain()
{
	system("cls");

	GenerateBorder();
	GenerateObstacles();
	GenerateRandomFood();

	InitSnake();
	DrawSnake();
}