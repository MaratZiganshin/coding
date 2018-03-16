#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

string assembleLCS(const string& x, const string& y, int** l, int i, int j){
    if (l[i][j]==0)
        return "";
    else if (x[i-1]==y[j-1])
        return assembleLCS(x,y,l,i-1,j-1) + x[i-1];
    else
    {
        if (l[i-1][j] < l[i][j-1])
            return assembleLCS(x,y,l, i,j-1);
        else
            return assembleLCS(x,y,l,i-1, j);
    }

}

string getLCS(const string& x, const string& y){
    int** l;
    l = new int*[x.length()+1];
    for (int i = 0; i <= x.length(); i++)
        l[i] = new int[y.length() + 1];
    for (int i = 0; i <= x.length(); i++){
        for (int j = 0; j <= y.length(); j++){
            if (i==0 || j==0)
                l[i][j] = 0;
            else if (x[i-1] == y[j-1])
                l[i][j]= l[i-1][j-1]+1;
            else
                l[i][j] = std::max(l[i-1][j],l[i][j-1]);
        }
    }
    return assembleLCS(x,y,l,x.length(),y.length());
}

int main()
{
	string x;
	string y;
	string res;

	ifstream fin;
	fin.open("input.txt");
	if (fin.is_open())
	{
		getline(fin, x);
		getline(fin, y);
		fin.close();
	}

	res = getLCS(x, y);

	fstream fout;
	fout.open("output.txt", ios::out);
	fout << res;
	fout.close();

	return 0;
}