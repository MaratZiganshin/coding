#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <stdlib.h>
#include <algorithm>

using namespace std;

vector<int> lis(int* arr, int len)
{
    vector<int> result;
    result.push_back(arr[0]);
    int d[len];
    d[0] = 0;

    for (int i = 1; i < len; i++)
        if (arr[i] > arr[i-1])
            d[i] = 1;
        else if (arr[i] == arr[i-1])
            d[i] = d[i-1];
        else
            d[i] = -1;

    for (int i = 1; i < len; ++i)
        if (d[i] == d[i-1])
        {
            result.pop_back();
            result.push_back(arr[i]);
        }
        else
            result.push_back(arr[i]);


    return result;
}

int main()
{
	int len;
	int* arr = nullptr;
	vector<int> res;

	ifstream fin;
	fin.open("input.txt");
	if (fin.is_open())
	{
		fin >> len;
		arr = new int[len];
		for (int i = 0; i < len; i++)
			fin >> arr[i];
		fin.close();
	}

	res = lis(arr, len);

	fstream fout;
	fout.open("output.txt", ios::out);
	for (int i = 0; i < res.size(); i++)
		fout << res[i] << " ";
	fout.close();

	return 0;
}