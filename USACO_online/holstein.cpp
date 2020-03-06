/*
ID: wguo6352
TASK: holstein
LANG: C++14                 
*/

#include <iostream>
#include <queue> //队列
using namespace std;

int v;
int vlist[30];
int g;
int glist[30][30];

queue<sta> q;

//这种题目最好广度优先？
//顺便联系一下，好久没有用过了
//jianzhi和广度优先的关系?
//背包问题? 迭代加深？
// bfs很难表示？

int main(void)
{
    cin >> v;
    for (int i = 0; i < v; i++)
    {
        cin >> vlist[i];
    }
    cin >> g;
    for (int i = 0; i < g; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cin >> glist[i][j];
        }
    }

    sta tmp;
    tmp.tong[0] = 1;
    tmp.deepth++;
    q.push(tmp);
    tmp.tong[0] = -1;
    tmp.deepth++;
    q.push(tmp);

    //突然想到bfs是队列dfs是stack
    // for(int i=0;i<v;i++)
    while (!q.empty())
    {
        // for (int i = 0; i < q.size(); i++)
        // {
            // tmp[i]//先做出结果？
        // }
        //不需要用数组保存结果
        tmp=q.front();
        tmp.tong[]
    }
    return 0;
}