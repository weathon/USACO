#include <iostream>
#include <fstream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N, M, C;
int cows[100005];

int check(int n)
{
    // if (n <= 10)
    //     return -1;
    // else
    //     return 1;

    int bus=0;
    int cow=1;
    for(int i=1;i<N;i++)
    {
        if(cows[i]-cows[i-1]<=n)
        {
            if(cow<=C)
            {
                cow++;
            }
            else{
                cow=0;
                bus++;
            }
        }
        else{
            cow=0;
            bus++;
        }
    }
    if(bus>M)//车不够 bunengdengyu
    {
        return -1;
    }
    return 1;
}

int main(void)
{
    freopen("convention.in", "r", stdin);
    // freopen("convention.out", "w", stdout);
    cin >> N >> M >> C;
    for (int i = 0; i < N; i++)
    {
        cin >> cows[i];
    }
    sort(cows, cows + N);
    // for(int i=0;i<N;i++)
    // cout<<cows[i]<<" ";
    int l = 0;
    int r = cows[N - 1];
    int mid;
    int lasttime=-1;
    while (1)
    {
        cout << r << " " << l << " " << mid << " " << endl;
        mid = (l + r) / 2.0 + 0.5;
        if(mid==lasttime)
        {
            break;
        }
        if (check(mid) == -1)
        {
            l = mid;
        }
        else if (check(mid) == 1)
        {
            r = mid;
        }
        lasttime=mid;
    }
    cout << mid << endl;
    return 0;
}