#include "ReadWriter.h"
//vector, string, iostream included in "ReadWriter.h"

using namespace std;

//Можно добавлять любые вспомогательные методы и классы для решения задачи.

void way(int i, int j, int* stones, vector<int>& res, int** A){
    if (A[i][j] == 0)
        return;
    if (A[i][j] != A[i-1][j])
    {
        way(i-1,j-stones[i-1], stones,res,A);
        res.push_back(stones[i-1]);
    }
    else
        way(i-1, j, stones, res, A);
}
//Задача реализовать этот метод
//param N - количество камней
//param M - ограничения на вес
//param stones - массив размера N, с весами камней
//param res - вектор результатов (вес камней, которые надо взять)
void solve(int N, int W, int* stones, vector<int>& res)
{
    int** A = new int*[N+1];
    for (int i = 0; i <= N; i++)
        A[i] = new int[W+1];
    for (int i = 0; i <= N; i++)
        A[i][0] = 0;
    for (int i = 1; i <= W; i++)
        A[0][i] = 0;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= W; j++)
            if (j - stones[i-1] >= 0)
                A[i][j] = std::max(A[i-1][j], A[i-1][j-stones[i-1]]+stones[i-1]);
            else
                A[i][j] = A[i-1][j];
    way(N, W, stones, res, A);
}


int main(int argc, const char * argv[])
{
    ReadWriter rw;
    int N = rw.readInt(); //камни
    int W = rw.readInt(); //ограничения на вес
    int* arr = new int[N]; //имеющиеся камни
    rw.readArr(arr, N);

    //основной структурой выбран вектор, так как заранее неизвестно какое количество камней будет взято
    vector<int> res;
    //решаем задачу
    solve(N, W, arr, res);
    int sum = 0;
    for (int i = 0; i < res.size(); i++)
        sum += res.at(i);

    //записываем ответ в файл
    rw.writeInt(sum); //итоговый вес
    rw.writeInt(res.size()); //количество взятых камней
    rw.writeVector(res); //сами камни

    delete[] arr;
    return 0;
}