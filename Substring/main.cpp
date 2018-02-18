#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

vector<int> getSubstrings(const string &input, const string &substring)
{
    vector<int> res ;
    int sslen = substring.length();
    string S = substring+"*"+input;
    int n = S.length();
    int br[n];
    br[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (S[i] == S[br[i-1]])
            br[i] = br[i - 1] + 1;
        else
        {
            int j = br[i - 1];
            while (S[j] != S[i] && j > 0)
                j = br[j - 1];
            if (j > 0)
                br[i] = j + 1;
            else {
                if (S[0]== S[i])
                    br[i] = 1;
                else
                    br[i] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++){
        if (br[i] == sslen)
            res.push_back(i - 2*sslen);
    }
    return res;
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