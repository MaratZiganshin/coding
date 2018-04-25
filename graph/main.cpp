#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <stdlib.h>
#include <algorithm>

using namespace std;

void reconstructPath(int* camefrom, int current, vector<int>& path);

void getAStar(int n, int start, int goal, vector<vector<int>> matrix, vector<int> heuris, vector<int>& path){
	set<int> closedSet;
    set<int> openSet;

    for (int i = 0; i < n ; i++)
        openSet.insert(i);
	int* camefrom = new int[n];
	for (int i = 0; i < n; i++)
		camefrom[i] = -1;
	int* gScore = new int[n];
	for (int i = 0; i < n; i++)
		gScore[i] = INT32_MAX;
	gScore[start] = 0;

	int* fScore = new int[n];
	for (int i = 0; i < n; i++)
		fScore[i] = INT32_MAX;
	fScore[start] = heuris[start];

	while (openSet.size() != 0)
	{
		int min = fScore[*openSet.begin()];
		int current = *openSet.begin();
		for (int i : openSet)
		{
			if (fScore[i] < min)
			{
				min = fScore[i];
				current = i;
			}
		}
		if (current == goal) {
            return reconstructPath(camefrom, current, path);
        }
		openSet.erase(current);
		closedSet.emplace(current);

		vector<int> neighbors;
		for (int i = 0; i < n; i++)
			if (matrix[current][i] > 0)
				neighbors.push_back(i);
		for (int neighbor : neighbors)
		{
			if (closedSet.count(neighbor) == 1)
				continue;
			if (openSet.count(neighbor) == 0)
				openSet.insert(neighbor);
			int tentative = gScore[current] + matrix[current][neighbor];
			if (tentative >= gScore[neighbor])
				continue;
			camefrom[neighbor] = current;
			gScore[neighbor] = tentative;
			fScore[neighbor] = gScore[neighbor] + heuris[neighbor];
		}
	}
}



void reconstructPath(int* camefrom, int current, vector<int>& path)
{
    path.push_back(current);
    while(camefrom[current] != -1)
    {
        current = camefrom[current];
        path.push_back(current);
    }
    for(int i = 0 ; i < path.size() / 2; i++)
    {
        int temp = path[path.size() - i - 1];
        path[path.size() - i - 1] = path[i];
        path[i] = temp;
    }
}


int main()
{
	int n;
	int start;
	int goal;
	vector<vector<int>> matrix;
	vector<int> heuris;
	vector<int> path = vector<int>();

	ifstream fin;
	fin.open("input.txt");
	if (fin.is_open())
	{
		fin >> n;
		fin >> start;
		fin >> goal;
		matrix = vector<vector<int>>(n);
		heuris = vector<int>(n);
		for (int i = 0; i < n; i++)
		{
			matrix[i] = vector<int>(n);
			for (int j = 0; j < n; j++)
				fin >> matrix[i][j];
		}
		for (int i = 0; i < n; i++)
			fin >> heuris[i];
			
		fin.close();
	}

	getAStar(n, start, goal, matrix, heuris, path);

	fstream fout;
	fout.open("output.txt", ios::out);
	for (int i = 0; i < path.size(); i++)
		fout << path[i] << " ";
	fout.close();

	return 0;
}
