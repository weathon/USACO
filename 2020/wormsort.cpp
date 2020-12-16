#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct hole
{
    int l, r, w;
};

struct conn
{
    vector<int> w;
    vector<int> target;
};
int N, M;
int cows[100005];
int sorted_cows[100005];
// int wormhole[100005][3];
// hole holes[100005];
int colored[100005];
conn space[100005];
int tong[100005];

int check(int);
int color = 1;
int maxw = 0;
void clean_color()
{
    for (int i = 0; i <= N; i++)
        colored[i] = 0;
    color = 1;
}
void colorize(int i, int w)
{
    if (colored[i] != 0)
        return;
    colored[i] = color;
    // cout<<space[i].target.size()<<endl;
    for (int ii = 0; ii < space[i].target.size(); ii++)
    {
        // printf("ii:%d",ii);
        if (space[i].w[ii] >= w)
            colorize(space[i].target[ii], w);
    }
}
int main()
{
    freopen("wormsort.in", "r", stdin);
    freopen("wormsort.out", "w", stdout);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> cows[i];
        // sorted_cows[i] = cows[i];
    }
    // sort(sorted_cows, sorted_cows + N);
    int l, r, w;
    for (int i = 0; i < N; i++)
    {
        if (cows[i] - 1 != i)
        {
            break;
        }
        if (i == N - 1)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    for (int i = 0; i < M; i++)
    {
        // cin >> wormhole[i][0] >> wormhole[i][1] >> wormhole[i][2];
        cin >> l >> r >> w;
        if (w > maxw)
            maxw = w;
        l--;
        r--;
        space[l].target.push_back(r);
        space[r].target.push_back(l);
        space[l].w.push_back(w);
        space[r].w.push_back(w);
    }
    // for (int i = 0; i <= maxw; i++) //bu ying gai shi N? bu ran jiu ting zhu le qiong ju de shi w
    // {
    //     if (check(i) == false)
    //     {
    //         cout << i - 1 << endl;
    //         break;
    //     }
    //     clean_color();
    // }

    int bl = 0;
    int br = maxw;
    int lastmid = -1;
    while (1)
    {
        int mid = (bl + br) / 2.0 + 0.5;
        if (mid == lastmid)
        {
            cout << mid-1 << endl;
            return 0;
        }
        // printf("%d %d %d",bl,br,mid);
        if (check(mid) == false)
        {
            // if(check(mid-1))
            // {
            //     cout<<mid<<endl;
            //     return 0;
            // }
            br = mid; //bu shi r er shi br
        }
        else
        {
            bl = mid;
        }

        clean_color();

        lastmid = mid;
    }
    return 0;
}

int check(int w)
{

    //读取每一个虫洞，如果左右都没有就创建新的index，这就是bingchaji啊
    //洪水算法，again?
    for (int i = 0; i < N; i++)
    {
        colorize(i, w);
        color++;
    }

    // cout << "---------------\n"
    //      << w << endl;
    // for (int i = 0; i < N; i++)
    // {
    //     cout << colored[i] << " ";
    // }
    // cout << endl;

    for (int i = 0; i < N; i++)
    {
        // if (colored[i] != colored[cows[i]])
        if (colored[i] != colored[cows[i] - 1]) //buyong sort? yidingshi 1.2.3.
        {
            return false;
        }
    }

    return true;
}

// xian wan cheng qiong ju ran hou er fen tiao zheng cuo wu bian liang he bian jie  hysm
// xiao ping mu shang xie dai ma ye cha bu duo a ?  daimazhiliangcha