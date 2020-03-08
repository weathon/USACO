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

int n, m;
struct
{
    bool myleft = true, up = true, down = true, myright = true;
} room[60][60];

int graph[60][60];
// pair <int,int> mynode[60][60];//fist
// int mynode[60][60]; //纪律需要，大小用全局变量
bool up, down, myleft, myright;
// int roomsize[4000]; //为什么不行？
int roomcount = 1, roomsize;
// int wall[60][60];

void dump(int x, int y, int color, int dpth)
{
    // cout<<dpth<<endl;
    if (graph[x][y] == 0)
    {
        graph[x][y] = color;
    // cout<<color<<endl;
        // cout << x << " " << y << endl;
        // cout << room[x][y].myright << endl;//和前面读取的不一样 xy反了

        if (room[x][y].up)
        {
            dump(x - 1, y, color, dpth + 1);
            // dump(x,y,color,dpth+1);
        }
        if (room[x][y].down)
        {
            // cout << room[x][y].myright << endl;
            dump(x + 1, y, color, dpth + 1);//这里xy也要反？
            // dump(x,y,color,dpth+1);
        }
        if (room[x][y].myleft)
        {
            dump(x, y - 1, color, dpth + 1);
            // dump(x,y,color,dpth+1);
        }
        if (room[x][y].myright)
        {
            dump(x, y + 1, color, dpth + 1); //这错了？上下反了
            // dump(x,y,color,dpth+1);
        }
    }
    else
    {
        return;
    }
    if (dpth == 0)
        roomcount++;
    // roomcount++;
}

int main(void)
{
    // memset(graph, 1, sizeof(graph));
    freopen("castle.in", "r", stdin);
    // freopen("castle.out", "w", stdout);
    cin >> n >> m;
    int index = 0;
    int tmp;
    for (int i = 1; i <= n; i++) //标记代表有墙，不要弄错了
    {
        for (int j = 1; j <= m; j++) //从1开始，边缘//忘了维度问题了，id是0维
        {
            cin >> tmp;
            myleft = 1 & tmp;
            up = 1 & (tmp >> 1);
            myright = 1 & (tmp >> 2);
            down = 1 & (tmp >> 3); //这里写了right
            //https://bbs.csdn.net/topics/360204445
            room[i][j].myleft = !myleft; //jj,j方向反了？是的，但是要改循环而不是这里
            room[i][j].myright = !myright;
            room[i][j].up = !up;
            room[i][j].down = !down;
            // index++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // cout<<i<<j;
            //遍历倒水的地方
            dump(i, j, roomcount, 0);
        }
    }
    cout << roomcount << endl;
    return 0;
} //很轻松地说遍历