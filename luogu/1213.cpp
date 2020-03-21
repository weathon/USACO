#include <iostream>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <fstream>
#include <vector>
using namespace std;

struct status
{
    int clocks[10];
    int deepth = 0;
    vector<int> path;
    bool ok()
    {
        bool thisans = true;
        for (int i = 0; i < 9; i++) //不要总多1
        {
            if (clocks[i] != 12)
            {
                thisans = false;
                break;
            }
        }
        return thisans;
    };
    void print()
    {
        // for(int i=0;i<9;i++)
        // {
        //     cout<<clocks[i]<<" ";//不是打印数字，而是反法
        // }
        for (auto ii : path)
            cout << ii + 1 << " ";
    }
};

queue<status> myq;

bool tong[10][10] = {
                     {1, 1, 0, 1, 1, 0, 0, 0, 0},
                     {1, 1, 1, 0, 0, 0, 0, 0, 0},
                     {0, 1, 1, 0, 1, 1, 0, 0, 0},
                     {1, 0, 0, 1, 0, 0, 1, 0, 0},
                     {0, 1, 0, 1, 1, 1, 0, 1, 0},
                     {0, 0, 1, 0, 0, 1, 0, 0, 1},
                     {0, 0, 0, 1, 1, 0, 1, 1, 0},
                     {0, 0, 0, 0, 0, 0, 1, 1, 1},
                     {0, 0, 0, 0, 1, 1, 0, 1, 1}}; //这里01不准确？没有，使用deep记录的

status inclocks;
int main()
{
    // freopen("1213.in","r",stdin);
    for (int i = 0; i < 9; i++)
        cin >> inclocks.clocks[i];
    myq.push(inclocks);
    status tmp;
    while (!myq.empty())
    // 看了题解回来看题目才发现可以使用多次，记得看样例
    // 如果有多种方案，输出那种使其连接起来的数字最小的方案。(举例来说 5\ 2\ 4\ 6 < 9\ 3\ 1\ 15 2 4 6<9 3 1 1 )。
    // for(int ways=0;ways<9;ways++) way应该放在结构体里面 不静下心来调试不了
    {
        tmp = myq.front();//这个是重复利用的
        myq.pop();
        if (tmp.ok())
        {
            tmp.print();
            return 0;
        }
        if (tmp.deepth < 27)
        {
            //两种情况？选货不选，咋看着有点像背包了呢
            tmp.deepth++; //忘了
            myq.push(tmp);//不选择的情况
            for (int i = 0; i < 9; i++)
            {
                if (tong[tmp.deepth/3][i] == 1)
                {
                    tmp.clocks[i] += 3;
                    tmp.clocks[i] = tmp.clocks[i] % 12;
                    if (tmp.clocks[i] == 0)
                        tmp.clocks[i] = 12;
                }
            }
            tmp.path.push_back(tmp.deepth);
            myq.push(tmp);
        }
    }

    return 0;
}