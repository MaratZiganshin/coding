#include "ReadWriter.h"
//Node.h подключен в ReadWriter.h, поэтому здесь не надо

using namespace std;

//Можно добавлять любые вспомогательные методы и классы для решения задачи.

//Задание реализовать метод декодирования
void decodeLZ77(Node* arr, int n, string& res)
{
    for (int i = 0; i < n; i++){
        Node node = arr[i];
        if (node.len > 0){
            int start = res.length() - node.offs;
            for (int j = 0; j < node.len; j++)
                res += res[start + j];
        }
        res += node.ch;
    }
}

int main(int argc, const char * argv[])
{
    ReadWriter rw;
    
    int n = rw.readInt();
    Node* arr = new Node[n];

    rw.readCode(arr, n);

    string res = "";
    //декодируем в строку
    decodeLZ77(arr, n, res);
    //записываем ответ в файл
    rw.writeString(res);

    delete[] arr;

    return 0;
}