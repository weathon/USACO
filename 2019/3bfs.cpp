#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int N;
pair<int, int> moops[1000006];
vector<int> canreact[1000006];
pair<int, int> vectorlen[1000006];
unordered_set<int> gone;

int main(void)
{
    freopen("moop.in", "r", stdin);
    freopen("moop.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> moops[i].first >> moops[i].second;
    }

    for (int i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if ((moops[i].first <= moops[j].first and moops[i].second <= moops[j].second) or
                (moops[i].first >= moops[j].first and moops[i].second >= moops[j].second)) //loule dengyu
            {
                canreact[i].push_back(j);
                canreact[j].push_back(i);
                // vectorlen[i].second++;
                // vectorlen[j].second++;
            }
        }
    }

    queue <int> myque;
    for(int i=0;i<N;i++)
    {
        
    }
    return 0;
}
