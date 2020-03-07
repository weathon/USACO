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
#include <stdio>
#include <string.h>
using namespace std;

int n, m;
int room[60][60];

int graph[60][60];
// pair <int,int> mynode[60][60];//fist
int mynode[60][60]; //纪律需要，大小用全局变量
bool up, down, myleft, myright;
int roomsize[4000];

void dump(int x, int y, int color,int dpth)
{
    if (mynode[x][y] == 0)
    {
        for(int i=0;i<60;i++)
        {
            if(mynode())
        }
    }
    if(dpth==0) roomcount++;
}

int roomcount, roomsize;

int main(void)
{
    memset(graph,1,sizeof(graph));
    freopen("castle.in", "r", stdin);
    // freopen("castle.out", "w", stdout);
    cin >> n >> m;
    int index=0;
    for (int i = 1; i <= n; i++)//标记代表有墙，不要弄错了
    {
        for (int j = 1; j <= m; j++) //从1开始，边缘//忘了维度问题了，id是0维
        {
            cin >> room[i][j];
            myleft = 1 & room[i][j];
            up = 1 & (room[i][j] >> 1);
            myright = 1 & (room[i][j] >> 2);
            myright = 1 & (room[i][j] >> 3);
            //https://bbs.csdn.net/topics/360204445
            if (myleft)
            {
                graph[index - 1][index] = 0;
                graph[index][index - 1] = 0;
            }
            if (up)
            {
                graph[index][index - m] = 0;//和上次贪吃蛇一样的额问题
                graph[index-m][index] = 0;
            }
            if (down)
            {
                graph[index][index+m] = 0;
                graph[index+m][index] = 0;
            }
            if (myright)
            {
                graph[index+1][index] = 0;
                graph[j][index + 1] = 0;
            }
            index++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            //遍历倒水的地方
            dump(i,j,roomcount,0)
        }
    }

    return 0;
}