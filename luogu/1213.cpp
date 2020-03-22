#include <iostream>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int tong[10][10] = {
    {1, 1, 0, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 1, 1, 0, 0, 0},
    {1, 0, 0, 1, 0, 0, 1, 0, 0},
    {0, 1, 0, 1, 1, 1, 0, 1, 0},
    {0, 0, 1, 0, 0, 1, 0, 0, 1},
    {0, 0, 0, 1, 1, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 1, 1, 1},
    {0, 0, 0, 0, 1, 1, 0, 1, 1}}; //这里01不准确？没有，使用deep记录的

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

// queue<status> myq;

// status tmp;

void dfs(status tmp)
{

    // tmp = oo; // 改掉这个后就卡住了
    // myq.pop();
    if (tmp.ok())
    {
        tmp.print();
        return;
    }
    if (tmp.deepth < )
    {
        //两种情况？选货不选，咋看着有点像背包了呢
        tmp.deepth++; //忘了
        dfs(tmp);     //不选择的情况
        for (int i = 0; i < 9; i++)
        {
            if (tong[tmp.deepth%9][i] == 1)
            {
                tmp.clocks[i] += 3;
                tmp.clocks[i] = tmp.clocks[i] % 12;
                if (tmp.clocks[i] == 0)
                    tmp.clocks[i] = 12;//会不会是这里没处理好？
            }
        }
        tmp.path.push_back(tmp.deepth);
        dfs(tmp);
    }
}

status inclocks;
int main()
{
    // freopen("1213.in","r",stdin);
    for (int i = 0; i < 9; i++)
        cin >> inclocks.clocks[i];
    // myq.push(inclocks);
    dfs(inclocks);
    return 0;
}