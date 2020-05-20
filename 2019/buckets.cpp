#include <iostream>
#include <fstream>
using namespace std;

char graph[12][12];
int f[12][12];
int ans;
int lakex, lakey;
int bx, by;
// void bfs(int x, int y, int dis)
// {
//     if (graph[x][y] == 'B')
//     {
//         if (dis < ans)
//             ans = dis;
//         return;
//     }

// }
int rx, ry;
int main()
{
    // freopen("buckets.in", "r", stdin);
    // freopen("buckets.out", "w", stdout);
    for (int i = 1; i <= 10; i++)
        for (int j = 1; j <= 10; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 'L')
            {
                lakex = i;
                lakey = j;
            }
            else if (graph[i][j] == 'B')
            {
                bx = i;
                by = j;
            }
            else if (graph[i][j] == 'R')
            {
                rx = i;
                ry = j;
            }
        }
    if ((rx == bx and bx == lakex and ((by<ry and ry<lakey) or (by>ry and ry>lakey))) or (ry == by and by == lakey and ((bx<rx and rx<lakex) or (bx>rx and rx>lakex))))
        cout << abs(bx - lakex) + abs(by - lakey) + 1 << endl;

    else
        cout << abs(bx - lakex) + abs(by - lakey) - 1 << endl;
    // // cout<<1<<endl;
    // // bfs(lakex,lakey,0);
    // int xway, yway;
    // if (bx > lakex)
    //     xway = 1;
    // else if (bx < lakex)
    //     xway = -1;
    // if (by > lakey)
    //     yway = 1;
    // else if (by < lakey)
    //     yway = -1;
    // // cout<<xway<<" "<<yway;
    // for (int i = 0; i <= 10; i++)
    //     for (int j = 0; j <= 10; j++)
    //         f[i][j] = 10000000;

    // for (int i = lakex; i != bx; i += xway)
    //     for (int j = lakey; j != by; j += yway)
    //         f[i][j] = 0;

    // for (int i = lakex;; i += xway)
    // {
    //     for (int j = lakey;; j += yway)
    //     {
    //         f[lakex][lakey]=0;
    //         if(graph[i][j]=='L') continue;
    //         if (graph[i][j] == 'B')
    //         {
    //             ans = min(f[i - xway][j], f[i][j - yway]) + 1;
    //             cout << ans-1 << endl;
    //             exit(0);
    //         }
    //         if (graph[i][j] == 'R')
    //         {
    //             f[i][j] = 10000000;
    //         }
    //         else
    //             f[i][j] = min(f[i - xway][j], f[i][j - yway]) + 1;//+/-
    //     }
    // }

    return 0;
}