
#include "BigIntegerAlgorithms.hh"

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

static string get_day(int N,int k)
{
    vector<int> shuffle;
    for (int i = 1; i <= N; i++)
        shuffle.push_back(i);
    string result = "";
    for (int c = 0; c < k-1; c++)
    {
        int i = N;
        while (i > 1 && shuffle[i-1] < shuffle[i-2])
            i--;
        int j = N;
        while (shuffle[j-1] < shuffle[i-2])
            j--;
        std::swap(shuffle[i-2], shuffle[j-1]);
        for (int j = 0; j < (N- i + 1) / 2  ; j++)
            std::swap(shuffle[i+j-1], shuffle[N-j-1]);
    }
    for (int i = 0; i <N; ++i)
        result += to_string(shuffle[i]) + " ";
    return result.substr(0,result.length() -1);
}
int main(int argc, const char * argv[]) {

    int N,K;
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
         fout << get_day(N,K)<< endl;
       
        fout.close();
        fin.close();
    }
    
    return 0;
}
