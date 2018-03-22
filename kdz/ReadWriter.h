#include <string>
#include <iostream>
#include <fstream>
#include <vector>

class ReadWriter
{
private:

    std::fstream fin;
    std::fstream fout;

public:

    ~ReadWriter()
    {
        fin.close();
        fout.close();
    }

    ReadWriter(std::string inName, std::string outName)
    {
        fin.open(inName, std::ios::in | std::ios::binary);
        fout.open(outName, std::ios::out | std::ios::binary);
    }

    void writeByte(char& s){
        if (!fout.is_open())
            throw std::ios_base::failure("file not open");

        fout << s;
    }

    bool readByte(char& s)
    {
        if (!fin.is_open())
            throw std::ios_base::failure("file not open");

        return fin.get(s);
    }
    //read 1 line
    void readString(std::string& s)
    {
        if (!fin.is_open())
            throw std::ios_base::failure("file not open");

        std::getline(fin, s);
    }

    //Write string
    void writeString(std::string& s)
    {
        if (!fout.is_open())
            throw std::ios_base::failure("file not open");

        fout << s;
    }

    //Write encoded string, format: 
    //n
    //offs len ch offs len ch ...
    //Example: 
    //3
    //0 0 a 0 0 b 1 1 c
    /*void writeCode(std::vector<Node>& v)
    {
        if (!fout.is_open())
            throw std::ios_base::failure("file not open");

        fout << v.size() << "\n";
        for (int i = 0; i < v.size(); i++)
            fout << v[i].offs << " " << v[i].len << " " << v[i].ch << " ";
    }*/
};