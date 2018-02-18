#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

string getBorders(string input)
{
    string result="";
    if(input.length()<=1)
        return result;
    int j =input.length()-1;
    for(int i=1; i<input.length()-1,j>0;i++)
    {
        string border=input.substr(0,i);
        if(border==input.substr(j, input.length()-j))
            result+=border+"\n";
        j--;
    }
    return result;
}

int main()
{
	string input;
	string res;

	ifstream fin;
	fin.open("input.txt");
	if (fin.is_open())
	{
		getline(fin, input);
		fin.close();
	}

	res = getBorders(input);

	fstream fout;
	fout.open("output.txt", ios::out);
	fout << res;
	fout.close();

	return 0;
}