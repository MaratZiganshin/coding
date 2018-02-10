
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
using namespace std;

class Huffman
{
    class Leaf
    {
    public:
        Leaf(int chance): l(nullptr), r(nullptr){
            this->chance = chance;
        }
        void setCode(string code){
            this->code = code;
        }
        string getCode(){
            return code;
        }
        int getChance(){
            return chance;
        }
        void setLeft(Leaf* l)
        {
            this->l = l;
        }
        void setRight(Leaf* r)
        {
            this->r = r;
        }
        ~Leaf(){
            if (l)
                delete(l);
            if (r)
                delete(r);
        }
        string code;
        int chance;
        Leaf* l;
        Leaf* r;
    };
public:

    void build()
    {
        while(chances.size() > 1) {
            int chance = chances[chances.size() - 1]->getChance() + chances[chances.size() - 2]->getChance();
            Leaf *newLeaf = new Leaf(chance);
            newLeaf->setLeft(chances[chances.size() - 2]);
            newLeaf->setRight(chances[chances.size() - 1]);
            chances.pop_back();
            findAndSet(newLeaf);
        }
        rootLeaf = chances[0];
        generateCodes(chances[0]);
    }

    void findAndSet(Leaf* leaf){
        int index = chances.size() - 2;
        while (index >= 0 && leaf->getChance() > chances[index]->getChance()) {
            chances[index + 1] = chances[index];
            index--;
        }
        chances[index + 1] = leaf;
    }
    void generateCodes(Leaf* leaf){
        if (leaf->l){
            leaf->l->code = leaf->code + "1";
            generateCodes(leaf->l);
        }
        if (leaf->r){
            leaf->r->code = leaf->code + "0";
            generateCodes(leaf->r);
        }
    }
    void addChance (int chance)
    {
        Leaf* leaf = new Leaf(chance);
        chances.push_back(leaf);
        startChances.push_back(leaf);
    }

    string get (int i)
    {
        return startChances[i]->code;
    }
    ~Huffman(){
        if (rootLeaf)
            delete(rootLeaf);
    }
private:
    Leaf* rootLeaf;
    vector<Leaf*> chances;
    vector<Leaf*> startChances;
};


int main() {

    int n;
    Huffman * huff = new Huffman();
    fstream fin;
        fin.open("input.txt",ios::in);
        if(fin.is_open()) {
            fin >> n;
            for (int i = 0; i < n; i++) {
                int x;
                fin >> x;
               huff->addChance (x);
            }
    
            fin.close();
       
        huff->build();
        fstream fout;
        fout.open("output.txt",ios::out);
            for (int i = 0; i < n; i++){
                fout << huff->get(i) << (i==n-1?"":" ");
                }
        fout.close();
        delete huff;
            
        }
  
        return 0;

}

