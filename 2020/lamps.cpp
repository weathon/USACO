/*
ID: wguo6352
TASK: lamps
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector<int> ON;
vector<int> OFF;

struct lamps
{
    bool status[101];
};

vector<lamps> ans;

void dfs(int, int, lamps);

int N;
int C;

int cmp(lamps L1, lamps L2)
{
    for (int i = 0; i < N; i++)
    {
        if (L1.status[i] < L2.status[i])
        {
            return true;
        }
        if (L1.status[i] > L2.status[i])
        {
            return false;
        }
    }
    return -1;
}
//only AC 3, through USACO data, some of them are the same
int main(void)
{
    // freopen("lamps.in", "r", stdin);
    // freopen("lamps.out","w",stdout);
    // 重要的一點，按兩次等於沒按，和順序無關，想起來DP，加上音樂
    cin >> N >> C;
    int tmp;
    while (1)
    {
        cin >> tmp;
        if (tmp == -1)
        {
            break;
        }
        ON.push_back(tmp);
    }

    while (1)
    {
        cin >> tmp;
        if (tmp == -1)
        {
            break;
        }
        OFF.push_back(tmp);
    }

    lamps defult;
    for (int i = 0; i <= N; i++) //*********
    {
        defult.status[i] = 1;
    }
    int myc = 0;
    dfs(0, 0, defult);
    if (ans.size() == 0)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    sort(ans.begin(), ans.end(), cmp);
    lamps last;
    last = ans[0];
    for (int pp = 0; pp < N; pp++)
    {
        printf("%d", ans[0].status[pp]);
    }
    cout<<endl;
    for (auto ___ : ans)
    {
        if (cmp(last, ___) == -1)
        {
            continue;
        }
        last = ___;
        for (int pp = 0; pp < N; pp++)
        {
            printf("%d", ___.status[pp]);
        }
        cout << endl;
    }
    return 0;
}
bool check(lamps);
lamps button(int, lamps);

void dfs(int current_c, int button_id, lamps cache)
{
    if (button_id == 4)
    // return;
    {
        if (check(cache))
        {
            ans.push_back(cache);
            return;
        }
        return;
    }
    if (current_c == C) //-1
    {
        if (check(cache))
        {
            ans.push_back(cache);
            return;
        }
        return;
    }
    dfs(current_c, button_id + 1, cache);     //寫到這裏才發現也要檢測button_id
    cache = button(button_id, cache);         //Do or not do, meikaolvdao
    dfs(current_c + 1, button_id + 1, cache); //寫到這裏才發現也要檢測button_id
}

bool check(lamps L)
{
    for (auto i : ON)
    {
        if (L.status[i - 1] != 1)
        {
            return false;
        }
    }

    for (auto i : OFF)
    {
        if (L.status[i - 1] != 0)
        {
            return false;
        }
    }
    return true;
}

lamps button(int button_id, lamps L)
{
    if (button_id == 0)
    {
        for (int i = 0; i < N; i++)
        {
            L.status[i] = !L.status[i];
        }
    }
    else if (button_id == 1)
    {
        for (int i = 0; i < N; i += 2) //Odd number, but here it start from 0
        {
            L.status[i] = !L.status[i];
        }
    }
    else if (button_id == 2)
    {
        for (int i = 1; i < N; i += 2) //Odd number, but here it start from 0
        {
            L.status[i] = !L.status[i];
        }
    }
    else if (button_id == 3)
    {
        for (int i = 0; i < N; i += 3) //Odd number, but here it start from 0
        {
            L.status[i] = !L.status[i];
        }
    }
    return L;
}