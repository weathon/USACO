/*
ID: wguo6352
TASK: milk3
LANG: C++14                 
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdio>
using namespace std;
int av, bv, cv;
char tong[20000];
// int ans[20000];
int anstong[50];
// int anspointer = 0;
int vlist[3];

void solve(int a, int b, int c)
{
    int list[3] = {a, b, c};
    if (a == 0)
    {
        // ans[anspointer] = c;
        // anspointer++;
        anstong[c]=1;
    }
    if (tong[a * 900 + b * 30 + c] == 'T') //有重复
    {
        return;
    }
    tong[a * 900 + b * 30 + c] = 'T';
    for (int from = 0; from < 3; from++)
    {
        for (int to = 0; to < 3; to++)
        {
            if (from == to)
                continue;
            //if from's l < to's left, 倒完
            if (list[from] <= vlist[to] - list[to])
            {
                list[to] += list[from];
                list[from] = 0;
                solve(list[0],list[1],list[2]);
                list[0] = a;
                list[1] = b;
                list[2] = c;
            }
            //else if from > to， 太多有剩余
            else if (list[from] > vlist[to] - list[to])
            {
                list[from] -= vlist[to] - list[to];
                list[to] =vlist[to];
                solve(list[0],list[1],list[2]);
                list[0] = a;
                list[1] = b;
                list[2] = c;
            }
        }
    }
}

int main(void)
{
    // freopen("milk3.in", "r", stdin);
    // freopen("milk3.out", "w", stdout);
    cin >> av >> bv >> cv;
    vlist[0] = av;
    vlist[1] = bv;
    vlist[2] = cv;
    solve(0, 0, cv);
    for (int i = 0; i < 50; i++)
        if(anstong[i]==1) cout<<i<<" ";
    cout << endl;
    return 0;
}