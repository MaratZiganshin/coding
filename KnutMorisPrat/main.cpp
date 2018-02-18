#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

vector<int> getSubstrings(const string &input, const string &substring) {
    vector<int> borders(substring.size() + 1, -1);
    vector<int> result;

    if (substring.size() == 0) {
        result.push_back(0);
        return result;
    }

    for (int i = 1; i <= substring.size(); i++) {
        int p = borders[i - 1];
        while (p != -1 && substring[p] != substring[i - 1])
            p = borders[p];
        borders[i] = p + 1;
    }

    int i = 0;
    int k = 0;
    while (i < input.size()) {
        while (k != -1 && (k == substring.size() || substring[k] != input[i]))
            k = borders[k];
        k++;
        i++;
        if (k == substring.size())
            result.push_back(i - substring.size());
    }

    return result;
}


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