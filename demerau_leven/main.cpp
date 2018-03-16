
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

int min (int a, int b, int c){
    return std::min(std::min(a,b), c);
}
int Wagner_Fischer_for_Damerau_Levenshtein(string s, string t)
{
    int d[s.length()+1][t.length()+1];
    for (int i = 0; i <= s.length(); i++)
        d[i][0] = i;
    for (int i = 0; i <= t.length(); i++)
        d[0][i] = i;
    for (int i = 1; i <= s.length(); i++)
        for (int j = 1; j <= t.length(); j++)
        {
            int price = 0;
            if (s[i-1] == t[j-1])
                price = 0;
            else price = 1;
            d[i][j] = min(d[i-1][j] + 1, d[i][j-1] +1, d[i-1][j-1] + price);
            if (i > 1 && j > 1 && s[i-1] == t[j-2] && s[i-2] == t[j-1])
                d[i][j] = std::min(d[i][j] , d[i-2][j-2] + price);

        }
    return d[s.length()][t.length()];
}
int main(int argc, const char * argv[]) {
    
    
    int n;
    fstream fin;
    fstream fout;
    fin.open("input.txt",ios::in);
    fout.open("output.txt",ios::out);
    if(fin.is_open()) {
        string N;
        getline(fin,N);
        n = atoi( N.c_str());
        for (int i = 0; i < n; i++) {
            string s;
            string t;
            getline(fin,s);
            getline(fin,t);
            fout << Wagner_Fischer_for_Damerau_Levenshtein(s, t) << (i == n-1 ? "" : " ");
        }
        fout.close();
        fin.close();
    }
    
    return 0;
}

