
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <cmath>
using namespace std;

class ShannonFano
{
public:

    ShannonFano():chances(){}

    void build()
    {
        for (int i = 0; i < chances.size(); i++)
            codes.push_back("");
        fano(0,chances.size()-1,0);
    }

    void fano(int b,int e, int k){
        if (e <= b)
            return;
        k++;
        //codes.push_back("");
        int m = med(b,e);
        for (int i = b; i <=e; ++i)
            codes[i] += (i > m)?'1':'0';
        fano(b, m, k);
        fano(m+1, e, k);
    }

    int med(int b, int e){
        int Sb = 0;
        for (int i = b; i <= e-1; ++i)
            Sb+=chances[i];
        int Se = chances[e];
        int m = e;
        int d;
        do{
            d = Sb-Se;
            m--;
            Sb-=chances[m];
            Se+=chances[m];
        }while (abs(Sb-Se) <= d);
        return m;
    }

    void addChance (int chance)
    {
        chances.push_back(chance);
    }

    string get (int i)
    {
        return codes[i];
    }

private:

    vector<int> chances;
    vector<string> codes;
};


int main() {

    int n;
    ShannonFano * shf = new ShannonFano();
    fstream fin;
        fin.open("input.txt",ios::in);
        if(fin.is_open()) {
            fin >> n;
            for (int i = 0; i < n; i++) {
                int x;
                fin >> x;
               shf->addChance (x);
            }

            fin.close();
       
        shf->build();
        fstream fout;
        fout.open("output.txt",ios::out);
            for (int i = 0; i < n; i++){
                fout << shf->get(i) << (i==n-1?"":" ");
                }
        fout.close();
        delete shf;
            
        }
  
        return 0;

}

