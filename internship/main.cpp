#include <iostream>

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void build(long N, long k, long*& array, long& count)
{
    k--;
    long index = k;
    count = 0;
    while (index != 0)
    {
        index /= N - count;
        count++;
    }
    array = new long[count];
    long temp = count;
    while(k != 0)
    {
        count--;
        array[count] = k%(N + count - temp + 1) + 1;
        k /= N + count - temp + 1;
    }
    count = temp;
}

void input(fstream& in, long& N, long& k){
    string str;
    getline(in, str);
    N = stol(str.c_str());
    getline(in, str);
    k = stol(str.c_str());
}

void output(fstream& out, long* array, long count, long M){
    if (count != 0)
    {
        for (int i = 0; i < M - count; i++)
            out << "1 ";
        for (int i = 0; i < count - 1; i++)
            out << array[i] << " ";
        out << array[count - 1];
    }
    else
    {
        for (long i = 0; i < M - 1; ++i)
            out << "1 ";
        out << "1";
    }
}

int main(int argc, const char* argv[])
{
    long N, k;
    long* array;
    long count;
    fstream in;
    fstream out;
    in.open("input.txt", ios::in);
    out.open("output.txt", ios::out);
    if (in.is_open())
    {
        input(in, N, k);
        build(N, k, array, count);
        output(out, array, count, N);
    }
    in.close();
    out.close();
    delete[] array;
    return 0;
}