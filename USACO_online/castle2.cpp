/*
ID: wguo6352
TASK: castle
LANG: C++11                 
*/

#include <iostream>
// #include <stack>
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
int cc;
// bool test=false;
int room[60][60][5]; //最后储存可以去的方向，不是桶 上下左右分别用1234表示
int tmppointer;
void dfs(int, int, int, int);
int roomcounter = 1;
int roomsizerecord[60][60];
int pointerlist[60][60];

int colorgraph[60][60];
int biggeseroom[4000];

int main(void)
{
    // if(!test)
    // {
        freopen("castle.in", "r", stdin);
        // freopen("castle.out", "w", stdout);
    // }
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
    cout << roomcounter - 1 << endl; //由于是1开始计算，所以-1
                                     //找最大的可以用堆
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //         cout << colorgraph[j][i] << " ";
    //     cout << endl;
    // }
    int mymax = 0;
    for (int i = 1; i <= roomcounter; i++)
    {
        if (biggeseroom[i] > mymax)
            mymax = biggeseroom[i];
    }
    cout << mymax << endl;

    //将序号填充为大小，打通时直接加两边, 不用dfs解决
    for (int j = 0; j < n; j++)
        for (int i = 0; i < m; i++)
        {
            roomsizerecord[i][j] = biggeseroom[colorgraph[i][j]];
        }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //         cout << roomsizerecord[j][i] << " ";
    //     cout << endl;
    // }  没问题

    int maxroomsizeafterpushawall = 0; //吃了有电解液瓜子
    int tmpmax;
    int ansx, ansy, ansd;
    {
        {
            for (int i = m - 1; i >= 0; i--)
                for (int j = 0; j < n; j++)

                {
                    // cout<<i<<" "<<j<<endl;
                    int tong[5] = {1, 1, 1, 1,1};
                    for (int _ = 0; room[i][j][_] != 0; _++)
                    {
                        tong[room[i][j][_]-1] = 0;//还是这里错了，后面改成从0开始这里没有了，忘了全部改，usaco的爆栈错误
                    }
                    for (int _ = 4; _ >= 0; _--) //这里顺序要反过来
                    {                            //重大问题，忘记了这个是哪里开始的  其实只要枚举上和右
                        // _++;  同时两个地方
                        if (tong[_])
                        {
                            if (_ == 2 and i != 0) //这个反了? 写成i了?
                            {
                                if (colorgraph[i][j] == colorgraph[i - 1][j])
                                    continue;

                                tmpmax = roomsizerecord[i][j] + roomsizerecord[i - 1][j];
                                if (tmpmax >= maxroomsizeafterpushawall)
                                {

                                    maxroomsizeafterpushawall = tmpmax;
                                    ansx = i;
                                    ansy = j;
                                    ansd = _;
                                }
                            }
                            if (_ == 3 and i != m - 1)
                            {
                                // cout<<i<<" "<<j<<endl;

                                if (colorgraph[i][j] == colorgraph[i + 1][j])
                                    continue;

                                tmpmax = roomsizerecord[i][j] + roomsizerecord[i + 1][j];

                                if (tmpmax >= maxroomsizeafterpushawall)
                                {
                                    maxroomsizeafterpushawall = tmpmax;
                                    ansx = i;
                                    ansy = j;
                                    ansd = _;
                                }
                            }
                            if (_ == 0 and j != 0) //上面有墙，要检测边界，每一个都要，直接从1开始？没考虑横向的问题
                            {
                                if (colorgraph[i][j] == colorgraph[i][j - 1])
                                    continue;
                                tmpmax = roomsizerecord[i][j] + roomsizerecord[i][j - 1]; //相加的同时还要保证不是同一间房
                                if (tmpmax >= maxroomsizeafterpushawall)
                                {
                                    maxroomsizeafterpushawall = tmpmax;
                                    ansx = i;
                                    ansy = j;
                                    ansd = _;
                                }
                            }
                            else if (_ == 1 and j != n - 1)
                            {
                                if (colorgraph[i][j] == colorgraph[i][j + 1])
                                    continue;

                                tmpmax = roomsizerecord[i][j] + roomsizerecord[i][j + 1];
                                if (tmpmax >= maxroomsizeafterpushawall)
                                {
                                    maxroomsizeafterpushawall = tmpmax;
                                    ansx = i;
                                    ansy = j;
                                    ansd = _;
                                }
                            }
                        }
                        // _--;
                    }
                }
        }
    }
    cout << maxroomsizeafterpushawall << endl; //大小统计每一个都差1（？？）
    char ansdd;
    if (ansd == 0)
        ansdd = 'N';
    if (ansd == 1)
        ansdd = 'S'; //看了答案
    if (ansd == 2)
        ansdd = 'W';
    if (ansd == 3)
        ansdd = 'E';
    cout << ansy + 1 << " " << ansx + 1 << " " << ansdd << endl; //答案是对的，但有很多个解（显而易见）改变方向加等于就好了
    // cout<<cc<<endl;
    return 0;
}
void dfs(int x, int y, int color, int deepth)
{
    // dfs(x,y,color,deepth+1);
    cc++;
    if (colorgraph[x][y] == 0)
    {
        colorgraph[x][y] = color;
        biggeseroom[color]++; //这个应该放外面 通过看到有一个0发现的  其实没有跨越墙壁，目前答案是正确的，手工验证出错
        // cout<<x<<" "<<y<<" "<<pointerlist[x][y]<<endl;  有一个0可能是越界 没有越界检测？
        for (int _ = 0; room[x][y][_] != 0; _++)
        {
            if (room[x][y][_] == 1 and colorgraph[x][y - 1] == 0)
                dfs(x, y - 1, color, deepth + 1);
            if (room[x][y][_] == 2 and colorgraph[x][y + 1] == 0)
                dfs(x, y + 1, color, deepth + 1);
            if (room[x][y][_] == 3 and colorgraph[x - 1][y] == 0)
                dfs(x - 1, y, color, deepth + 1);
            if (room[x][y][_] == 4 and colorgraph[x + 1][y] == 0)
                dfs(x + 1, y, color, deepth + 1);
        }
        if (deepth == 0)
        {
            roomcounter++;
        }
    }
}
