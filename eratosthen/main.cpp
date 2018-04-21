#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

vector<int> getEratosthenes(int n){
	vector<int> result;
	bool* a = new bool[n+1]{0};
	for (int i = 2; i <= n; i++)
		if (!a[i])
			for (int j = 2*i; j <= n; j+=i)
				a[j] = true;
	for (int i = 1; i <= n; i++)
		if (!a[i])
			result.push_back(i);
	return result;
}
int main()
{
	int n;
	vector<int> res;

	ifstream fin;
	fin.open("input.txt");
	if (fin.is_open())
	{
		fin >> n;
		fin.close();
	}

	res = getEratosthenes(n);

	fstream fout;
	fout.open("output.txt", ios::out);
	for (int i = 0; i < res.size(); i++)
		fout << res[i] << " ";
	fout.close();

	return 0;
}
