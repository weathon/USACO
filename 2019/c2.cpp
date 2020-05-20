#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>
using namespace std;

int N, M;
int f[100006];
int s[100006];

unordered_set<int> maipianleft;
int taken[100006];
int needed[100006];


int main(void)
{
    freopen("cereal.in", "r", stdin);
    freopen("cereal.out", "w", stdout);
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        // cin >> f[i] >> s[i];
        scanf("%d%d", &f[i], &s[i]);
    }
    int j;
    int ans;

    ans = 0;
    maipianleft.clear();
    for (int _ = 1; _ <= M; _++)
    {
        maipianleft.insert(_);
    }
    for (j =  1; j <= N; j++)
    {
        if (maipianleft.count(f[j]))
        {
            maipianleft.erase(f[j]);
            taken[j]=f[j];
            ans++;
        }
        else
        {
            if (maipianleft.count(s[j]))
            {
                maipianleft.erase(s[j]);
                taken[j]=s[j];
                ans++;
            }
        }
    }

    return 0;
}

//#3 is ok
