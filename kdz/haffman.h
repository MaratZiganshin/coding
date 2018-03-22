#include <vector>
#include <fstream>
#include <algorithm>

class Haffman {
    class Leaf
    {
    public:
        Leaf(int chance): l(nullptr), r(nullptr){
            this->chance = chance;
        }
        void setCode(std::string code){
            this->code = code;
        }
        std::string getCode(){
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
        std::string code;
        char symbol;
        int chance;
        Leaf* l;
        Leaf* r;
    };
public:

    Haffman() {

    }

    void encode(const std::string& infile, const std::string& outfile){
        chancesArray = std::vector<std::pair<unsigned char, int>>(256);
        for (int i = 0; i < 256; i++) {
            chancesArray[i].first = (unsigned char) i;
            chancesArray[i].second = 0;
        }
        in.open(infile, std::ios::binary | std::ios::in);
        out.open(outfile, std::ios::binary | std::ios::out);
        char character;
        int size = 0;

        while (in.get(character)){
            unsigned char ch = (unsigned char)character;
            chancesArray[ch].second++;
            size++;
        }
        out << size << '#';
        std::sort(chancesArray.begin(), chancesArray.end(),
                  [](const std::pair<unsigned char, int>& p1,const std::pair<unsigned char, int>& p2){
                      return p1.second > p2.second;
                  });
        for (int i = 0; i < 256; i++)
            if (chancesArray[i].second != 0)
                addChance(chancesArray[i].first, chancesArray[i].second);
            else
                break;
        build();
        int i = 0;
        for (i = 0; i < 256; i++)
            if (chancesArray[i].second != 0)
                codes[chancesArray[i].first] = get(i);
            else
                break;
        out << i << "#";
        for (int j = 0; j < i; j++)
            out << chancesArray[j].first << "#" << chancesArray[j].second << "#";
        in.clear();
        in.seekg(0, in.beg);
        char ch;
        unsigned char buffer = 0;
        int spaceLeft = CHAR_BIT; //bits in char
        while (in.get(ch))
        {
            unsigned char uch = (unsigned char) ch;
            int codePos = 0;
            while (codePos < codes[uch].length())
            {
                buffer <<= 1;
                if ((codes[uch])[codePos] == '1')
                    buffer |= 1;
                ++codePos;
                --spaceLeft;
                if (spaceLeft == 0)
                {
                    out << buffer;
                    buffer &= 0;
                    spaceLeft = CHAR_BIT;
                }
            }
        }
        if (spaceLeft > 0)
        {
            buffer <<= spaceLeft;
            out << buffer;
        }
        in.close();
        out.close();
    }

    void decode(const std::string& infile, const std::string& outfile){
        chancesArray = std::vector<std::pair<unsigned char, int>>(0);
        in.open(infile, std::ios::binary | std::ios::in);
        out.open(outfile, std::ios::binary | std::ios::out);
        char ch;
        int size = 0;
        in >> size;
        in >> ch;
        int count = 0;
        in >> count;
        in >>ch;
        for (int i = 0; i < count; i++)
        {
            char temp;
            int chance = 0;
            in.get(ch);
            in >>temp;
            in >> chance;

            chancesArray.push_back(std::make_pair<unsigned char, int>(std::move(ch), std::move(chance)));
            in >> temp;
        }
        for (int i = 0; i < count; i++)
            addChance(chancesArray[i].first, chancesArray[i].second);
        build();
        Leaf* node = rootLeaf;
        int bitCount;
        //in.get(ch);  //extract terminating symbol
        while (size > 0)
        {
            in.get(ch);
            bitCount = 7;
            unsigned char uch = (unsigned char) ch;
            while (size > 0 && bitCount >= 0)
            {
                if ((uch & (1 << bitCount)) == (1 << bitCount))
                {
                    node = node->l;
                }
                else
                {
                    node = node->r;
                }
                --bitCount;

                if (!node->l)
                {
                    out << node->symbol;
                    node = rootLeaf;
                    size--;
                }
            }
        }
        in.close();
        out.close();
    }

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
    void addChance (char ch, int chance)
    {
        Leaf* leaf = new Leaf(chance);
        leaf->symbol = ch;
        chances.push_back(leaf);
        startChances.push_back(leaf);
    }

    std::string get (int i)
    {
        return startChances[i]->code;
    }
    ~Haffman(){
        /*if (rootLeaf)
            delete(rootLeaf);*/


    }
private:
    std::ifstream in;
    std::ofstream out;
    std::string codes[256];
    Leaf* rootLeaf;
    std::vector<std::pair<unsigned char, int>> chancesArray;
    std::vector<Leaf*> chances;
    std::vector<Leaf*> startChances;
};
