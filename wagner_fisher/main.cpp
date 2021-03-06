
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

int min(int a, int b, int c){
    return std::min(a, std::min(b,c));
}
int Wagner_Fischer(string s, string t)
{
    int d[s.length()+1][t.length() + 1];

    for (int i = 0; i <= s.length(); i++)
        d[i][0] = i;
    for (int i = 0; i <= t.length(); i++)
        d[0][i] = i;
    for (int i = 1; i <= s.length(); i++)
        for (int j = 1; j <= t.length(); j++)
            if (s[i-1] == t[j-1])
                d[i][j] = d[i-1][j-1];
            else d[i][j] = min(d[i-1][j] + 1, d[i][j-1] + 1, d[i-1][j-1] + 1);
    return d[s.length()][ t.length()];
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
            fout << Wagner_Fischer(s, t) << (i == n-1 ? "" : " ");
        }
        fout.close();
        fin.close();
    }

    return 0;
}
