#include "ReadWriter.h"
//vector, string, iostream, algorithm included in "ReadWriter.h"

using namespace std;

//Можно добавлять любые вспомогательные методы и классы для решения задачи.
struct item{
    int w;
    int v;
    double ud;
    item(){}
    item(int _w, int _v, double _ud)
    {
        w = _w;
        v = _v;
        ud = _ud;
    }
};

bool comparePairs(const item i1, const item i2)
{
    if (i1.ud == i2.ud)
        return i1.w > i2.w;
    return i1.ud > i2.ud;
}
//Задача реализовать этот метод (жадный алгоритм)
//param N - количество предметов
//param W - ограничения на вес рюкзака
//param items - массив размера N, с предметами - first = вес, second = стоимость
//param res - вектор результатов (предметы, которые надо взять)
void solve(int N, int W, pair<int, int>* items, vector<pair<int, int>>& res)
{
    item all[N];
    for (int i = 0; i < N; i++)
        all[i] = item(items[i].first, items[i].second, (double)items[i].second/(double)items[i].first);
	std::sort(all, all + N, comparePairs);
    int sum = 0;
    for (int i = 0; i < N;i++){
        sum += all[i].w;
        if (sum > W)
        {
            sum -= all[i].w;
            continue;
        }
        res.push_back(pair<int,int>(all[i].w, all[i].v));
    }
}

int main(int argc, const char * argv[])
{
    ReadWriter rw;
    int N = rw.readInt(); //количество предметов
    int W = rw.readInt(); //ограничения на вес рюкзака

    //структура массив pair выбрана, так как известно количество элементов, и у объекта всего 2 характеристики
    //first = вес(weight), second = стоимость (cost)
    //Можно переложить данные в любую другую удобную струтуру
    //Внимание(!) данные не упорядочены, но можно это сделать если вам требуется
    pair<int, int>* arr = new pair<int, int>[N];
    rw.readArr(arr, N);

    //структура вектор pair выбрана, так как неизвестно количество элементов, и у объекта всего 2 характеристики
    //результат, также first = вес(weight), second = стоимость (cost)
    vector<pair<int, int>> res;
    solve(N, W, arr, res);

    int sumCost = 0, sumWeight = 0;
    for (int i = 0; i < res.size(); i++)
    {
        sumWeight += res[i].first;
        sumCost += res[i].second;
    }
    //записываем ответ в файл
    rw.writeInt(sumCost);
    rw.writeInt(sumWeight);
    rw.writeInt(res.size());
    rw.writeVector(res);

    delete[] arr;
    return 0;
}