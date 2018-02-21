#include "ReadWriter.h"
//в ReadWriter.h все подключено (Node.h, string, vector, iostream..)
using namespace std;

/*pair<int, int> getMaxBorder(const string &input, const string &substring)
{
    vector<int> res;
    int sslen = substring.length();
    string S = substring+input+substring;
    int n = S.length();
    int br[n];
    br[0] = 0;
    for (int i = 1; i < n; i++)
    {
        if (S[i] == S[br[i-1]])
            br[i] = br[i - 1] + 1;
        else
        {
            int j = br[i - 1];
            while (S[j] != S[i] && j > 0)
                j = br[j - 1];
            if (j > 0)
                br[i] = j + 1;
            else {
                if (S[0]== S[i])
                    br[i] = 1;
                else
                    br[i] = 0;
            }
        }
    }
    int max = 0;
    int index = 0;
    if (input.length() == 5)
        cout << "";
    for (int i = substring.length(); i < 2 * substring.length()+ input.length()-1; i++){
        if (br[i] > max && i - br[i] <= substring.length() + input.length()) {
            max = br[i];
            index = i - substring.length() - max +1;
        }
    }
    cout << "";
    return pair<int, int>(index, max);
}*/
int min (int a, int b){
    if ( a < b)
        return  a;
    return b;
}

std::pair<int, int> substring(const std::string& history_buff, const std::string& prev_buff)
{
    int position = 0, length = 0, size1 = history_buff.length(), size2 = prev_buff.length();
    for(int q = 0; q < history_buff.length(); q++)
    {
        int length_temp = 0;
        while(length_temp < min(size2, size1 - q))
            if (history_buff[q + length_temp] == prev_buff[length_temp])
                length_temp++;
            else
                break;
        if(length_temp == size1 - q)
            for (int i = 0; length_temp < size2; )
                if (prev_buff[i] == prev_buff[length_temp])
                {
                    i++;
                    length_temp++;
                }
                else
                    break;
        if(length_temp > length)
        {
            length = length_temp;
            position = size1 - q;
        }
    }
    return pair<int, int>(position, length);
}
// s — исходная строка
// res - вектор троек (offs, len, ch)
// histBufMax, prevBufMax - Макс длины буферов истории и предпросмотра
// функция возвращает список блоков
void encodeLZ77(string& s, vector<Node>& res, int histBufMax, int prevBufMax)
{
    res.push_back(Node(0,0,s[0]));
    int prevBufStart = 1;
    int prevBufEnd = prevBufMax;
    while (prevBufStart < s.length())
    {
        pair<int, int > p = substring(s.substr((prevBufStart < histBufMax)?0:prevBufStart-histBufMax, (prevBufStart < histBufMax)?prevBufStart:histBufMax), s.substr(prevBufStart, (prevBufEnd < s.length())?(prevBufEnd - prevBufStart + 1):s.length() -prevBufStart + 1));
        res.push_back(Node((p.second == 0) ? 0 : p.first, p.second, s[prevBufStart + p.second]));
        prevBufStart += p.second + 1;
        prevBufEnd += p.second + 1;

    }
}

int main(int argc, const char* argv[])
{
    //Здесь предлагается задать размер окна в байтах (отдельно буфера предыстории и предпросмотра)
    //В сумме должны образовывать столько, сколько надо в задании
    //history buffer 3 kb
    int histBufMax = 1024*3; 
    //preview buffer 1 kb
    int prevBufMax = 1024; 

    ReadWriter rw;
    string s = "";
    rw.readString(s);

    //Основной структурой выбран вектор, так как заранее неизвестно какое количество элементов будет записано
    vector<Node> v;

    encodeLZ77(s, v, histBufMax, prevBufMax);

    rw.writeCode(v);
    return 0;
}