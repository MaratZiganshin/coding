

#include "BigIntegerAlgorithms.hh"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool found = false;
static void Solve(int n, int m,int k, int t, int* a, vector<int> s, int* counter){
    for (int i = 1; i <= n; i++){
        if (std::find(s.begin(), s.end(), i) == s.end()){
            s.push_back(i);
            a[t] = i;
            if (t < m) {
                Solve(n, m, k, t + 1, a, s, counter);
                if (found)
                    return;
            }
            else
            {
                (*counter)++;
                if (*counter == k){
                    found = true;
                    return;
                }

            }
            s.erase(std::find(s.begin(), s.end(), i));
        }
    }
}

static string get(int N,int k, int m)
{
    int* a = new int[m+1];
    vector<int> s;
    int t;
    int counter = 0;
    Solve(N, m, k, 1, a, s, &counter);
    string result = "";
    for (int i = 1; i <= m; i++)
        result += std::to_string(a[i]) + " ";

    return result.substr(0, result.length() -1);
}
int main(int argc, const char * argv[]) {

    int M,N,K;
    fstream fin;
    fstream fout;
    fin.open("input.txt",ios::in);
    fout.open("output.txt",ios::out);
    if(fin.is_open()) {
        string str;
        getline(fin,str);
        N = atoi( str.c_str());
        getline(fin,str);
        K = atoi( str.c_str());
        getline(fin,str);
        M = atoi( str.c_str());
        fout << get(N, K, M)<< endl;
        
        
        fout.close();
        fin.close();
    }
    
    
    
    return 0;
}
