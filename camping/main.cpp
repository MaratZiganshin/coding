#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void next(int* a, int& last){
    int k = last - 1;
    while (k != 0 && a[k-1] <= a[k])
        k--;
    a[k]++;
    int sum = 0;
    for (int r = k+1; r <= last; r++)
        sum+=a[r];
    int index = k+1;
    for (int r = 1; r <= sum-1; r++)
        a[k + r] = 1;
    last = k + sum - 1;
}

void build(fstream& out,int N)
{
    int* a = new int[N];
    for (int i = 0; i < N; i++)
        a[i] = 1;
    int last = N - 1;
    while (last != 0) {
        for (int i = 0; i < last; i++)
            out << a[i] << " ";
        out << a[last];
        out << endl;
        next(a, last);
    }
    for (int i = 0; i < last; i++)
        out << a[i] << " ";
    out << a[last];
    out << endl;
}

int main(int argc, const char* argv[])
{
    int N;
    fstream in;
    fstream out;
    in.open("input.txt", ios::in);
    out.open("output.txt", ios::out);
    string str;
    getline(in, str);
    N = stoi(str.c_str());
    if (in.is_open())
        build(out, N);
    in.close();
    out.close();
    return 0;
}