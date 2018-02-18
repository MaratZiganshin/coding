#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
	string t;
	string p;
	vector<int> res;

	ifstream fin;
	fin.open("input.txt");
	if (fin.is_open())
	{
		getline(fin, t);
		getline(fin, p);
		fin.close();
	}

	res = getSubstrings(t, p);

	fstream fout;
	fout.open("output.txt", ios::out);
	fout << res.size() << "\n";
	for (std::vector<int>::const_iterator i = res.begin(); i != res.end(); ++i)
		fout << *i << "\n";
	fout.close();

	return 0;
}