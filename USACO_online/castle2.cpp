/*
ID: wguo6352
TASK: castle
LANG: C++14                 
*/

#include <iostream>
#include <stack>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;

int m, n;
int tmp;
bool myup, mydown, myright, myleft;

int room[60][60][5]; //最后储存可以去的方向，不是桶 上下左右分别用1234表示
int tmppointer;
void dfs(int, int, int, int);
int roomcounter = 1;

int pointerlist[60][60];

int colorgraph[60][60];
int biggeseroom[4000];

int main(void)
{
    freopen("castle.in", "r", stdin);
    // freopen("castle.out", "w", stdout);
    cin >> m >> n;
    for (int j = 0; j < n; j++) //调换了ij没调换mn？
    {
        for (int i = 0; i < m; i++)
        {
            {
                cin >> tmp;
                tmppointer = 0;
                myleft = 1 & tmp;
                myup = 1 & (tmp >> 1);
                myright = 1 & (tmp >> 2);
                mydown = 1 & (tmp >> 3); //这里写了right
                if (false == myleft)
                {
                    room[i][j][tmppointer] = 3;
                    tmppointer++;
                }
                if (false == myright)
                {
                    room[i][j][tmppointer] = 4;
                    tmppointer++;
                }
                if (false == myup)
                {
                    room[i][j][tmppointer] = 1;
                    tmppointer++;
                }
                if (false == mydown)
                {
                    room[i][j][tmppointer] = 2;
                    tmppointer++;
                }
                pointerlist[i][j] = tmppointer;
            }
            // dfs(i, j, roomcounter, 0);
        }
    }
    for (int j = 0; j < n; j++)
        for (int i = 0; i < m; i++)
            dfs(i, j, roomcounter, 0);
    cout << roomcounter -1<< endl;//由于是1开始计算，所以-1
    //找最大的可以用堆
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << colorgraph[i][j] << " ";
    //     cout<<endl;
    // }
    return 0;
}

void dfs(int x, int y, int color, int deepth)
{
    if (colorgraph[x][y] == 0)
    {
        // cout<<x<<" "<<y<<" "<<pointerlist[x][y]<<endl;  有一个0可能是越界 没有越界检测？
        for (int _ = 0; _ < pointerlist[x][y]; _++)
        {
            colorgraph[x][y] = color;
            biggeseroom[color]++;
            if (room[x][y][_] == 1)
                dfs(x, y-1, color, deepth + 1);
            if (room[x][y][_] == 2)
                dfs(x , y+1, color, deepth + 1);
            if (room[x][y][_] == 3)
                dfs(x-1, y, color, deepth + 1);
            if (room[x][y][_] == 4)
                dfs(x+1, y, color, deepth + 1);
        }
        if (deepth == 0)
        {
            roomcounter++;
        }
    }
}
