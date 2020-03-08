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
int roomsizerecord[60][60];
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
    int maxroomsizeafterpushawall = 0; //吃了有电解液瓜子
    int tmpmax;
    int ansx, ansy, ansd;
    { //这个顺序
        for (int j = n; j >= 0; j--)
        {
            for (int i = 0; i < m; i++)
            {
                // cout<<i<<j<<endl;
                int tong[4] = {1, 1, 1, 1};
                for (int _ = 0; room[i][j][_] != 0; _++)
                {
                    tong[room[i][j][_]] = 0;
                }
                for (int _ = 0; _ < 4; _++)
                {
                    if (tong[_])
                    {

                        if (_ == 3 and i != 0) //这个反了?
                        {
                            if (colorgraph[i][j] == colorgraph[i - 1][j])
                                continue;

                            tmpmax = roomsizerecord[i][j] + roomsizerecord[i - 1][j];
                            if (tmpmax > maxroomsizeafterpushawall)
                            {

                                maxroomsizeafterpushawall = tmpmax;
                                ansx = i;
                                ansy = j;
                                ansd = _;
                            }
                            else if (tmpmax = maxroomsizeafterpushawall)
                            {
                                if (i < ansx)
                                {
                                    ansx = i;
                                    ansy = j;
                                    ansd = _;
                                }
                                else if (i == ansx and j > ansy)
                                {
                                    ansx = i;
                                    ansy = j;
                                    ansd = _; //qq用我的手机下东西，电池用到最后一pa
                                }
                                else if (j == ansy)
                                {
                                    if (_ < ansd)
                                    {
                                        ansx = i;
                                        ansy = j;
                                        ansd = _;
                                    }
                                }
                            }
                        }
                        else if (_ == 4 and i != m - 1)
                        {
                            if (colorgraph[i][j] == colorgraph[i + 1][j])
                                continue;

                            tmpmax = roomsizerecord[i][j] + roomsizerecord[i + 1][j];

                            if (tmpmax > maxroomsizeafterpushawall)
                            {

                                maxroomsizeafterpushawall = tmpmax;
                                ansx = i;
                                ansy = j;
                                ansd = _;
                            }
                            else if (tmpmax = maxroomsizeafterpushawall)
                            {
                                if (i < ansx)
                                {
                                    ansx = i;
                                    ansy = j;
                                    ansd = _;
                                }
                                else if (i == ansx and j > ansy)
                                {
                                    ansx = i;
                                    ansy = j;
                                    ansd = _; //qq用我的手机下东西，电池用到最后一pa
                                }
                                else if (j == ansy)
                                {
                                    if (_ < ansd)
                                    {
                                        ansx = i;
                                        ansy = j;
                                        ansd = _;
                                    }
                                }
                            }
                        }
                        if (_ == 1 and j != 0) //上面有墙，要检测边界，每一个都要，直接从1开始？没考虑横向的问题
                        {
                            if (colorgraph[i][j] == colorgraph[i][j - 1])
                                continue;
                            tmpmax = roomsizerecord[i][j] + roomsizerecord[i][j - 1]; //相加的同时还要保证不是同一间房
                            if (tmpmax > maxroomsizeafterpushawall)
                            {

                                maxroomsizeafterpushawall = tmpmax;
                                ansx = i;
                                ansy = j;
                                ansd = _;
                            }
                            else if (tmpmax = maxroomsizeafterpushawall)
                            {
                                if (i < ansx)
                                {
                                    ansx = i;
                                    ansy = j;
                                    ansd = _;
                                }
                                else if (i == ansx and j > ansy)
                                {
                                    ansx = i;
                                    ansy = j;
                                    ansd = _; //qq用我的手机下东西，电池用到最后一pa
                                }
                                else if (j == ansy)
                                {
                                    if (_ < ansd)
                                    {
                                        ansx = i;
                                        ansy = j;
                                        ansd = _;
                                    }
                                }
                            }
                        }
                        else if (_ == 2 and j != n - 1)
                        {
                            if (colorgraph[i][j] == colorgraph[i][j + 1])
                                continue;

                            tmpmax = roomsizerecord[i][j] + roomsizerecord[i][j + 1];
                            if (tmpmax > maxroomsizeafterpushawall)
                            {

                                maxroomsizeafterpushawall = tmpmax;
                                ansx = i;
                                ansy = j;
                                ansd = _;
                            }
                            else if (tmpmax = maxroomsizeafterpushawall)
                            {
                                if (i < ansx)
                                {
                                    ansx = i;
                                    ansy = j;
                                    ansd = _;
                                }
                                else if (i == ansx and j > ansy)
                                {
                                    ansx = i;
                                    ansy = j;
                                    ansd = _; //qq用我的手机下东西，电池用到最后一pa
                                }
                                else if (j == ansy)
                                {
                                    if (_ < ansd)
                                    {
                                        ansx = i;
                                        ansy = j;
                                        ansd = _;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << maxroomsizeafterpushawall << endl;   //大小统计每一个都差1（？？）
    cout << ansy + 1 << " " << ansx + 1 << endl; //答案是对的，但有很多个解（显而易见）改变方向加等于就好了
    return 0;
}

void dfs(int x, int y, int color, int deepth)
{
    if (colorgraph[x][y] == 0)
    {
        colorgraph[x][y] = color;
        biggeseroom[color]++; //这个应该放外面 通过看到有一个0发现的  其实没有跨越墙壁，目前答案是正确的，手工验证出错
        // cout<<x<<" "<<y<<" "<<pointerlist[x][y]<<endl;  有一个0可能是越界 没有越界检测？
        for (int _ = 0; room[x][y][_] != 0; _++)
        {
            if (room[x][y][_] == 1)
                dfs(x, y - 1, color, deepth + 1);
            if (room[x][y][_] == 2)
                dfs(x, y + 1, color, deepth + 1);
            if (room[x][y][_] == 3)
                dfs(x - 1, y, color, deepth + 1);
            if (room[x][y][_] == 4)
                dfs(x + 1, y, color, deepth + 1);
        }
        if (deepth == 0)
        {
            roomcounter++;
        }
    }
}
