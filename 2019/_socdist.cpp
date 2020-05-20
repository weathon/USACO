#include <iostream>
#include <fstream>
#include <cstdio>
#include <unordered_set>
#include <queue>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define OO 100000;

long long N, M;
long long a[100006];
long long b[100006];
long long mymax;
long long farest = 0;

long long CD;
long long numberofcow;

vector<pair<long long, long long>> hasgrass; //不能用unorder set
//https://www.geeksforgeeks.org/sets-of-pairs-in-c/
//http://www.cplusplus.com/reference/utility/pair/

bool hasgrasscount(long long v)
{
    long long l = 0;
    // long long r = mymax;//or size?
    long long r = hasgrass.size();
    pair<long long, long long> __;
    while (1)
    {
        if (r - l <= 4)
        {
            for (long long k = l; k <= r; k++)
            {
                if (v >= hasgrass[k].first and v <= hasgrass[k].second)
                {
                    return true;
                }
            }
            return false;
        }
        __ = hasgrass[(l + r) / 2];
        if (v >= __.first and v <= __.second)
        {
            return true;
        }
        if (v > __.second)
        {
            l = (l + r) / 2 + 1;
        }
        else if (v < __.first)
        {
            r = (l + r) / 2 - 1;
        }
    }
    return false;
}

struct node
{
    long long thismin, thismax;
    long long l, r;
};

long long check(long long D)
{
    CD = OO;
    numberofcow = N;
    for (long long i = 0; i <= farest + 1;) //这个太费时间
    // while(1)
    {
        if (numberofcow == 0 and i < farest + 1)
        {
            return -1; //距离太小
        }
        if (i >= farest + 1 and numberofcow > 0)
        {
            return 1; //距离太大
        }
        // cout<<hasgrasscount(i)<<endl;
        // cout<<1<<endl;
        if (hasgrasscount(i) and CD >= D)
        {
            numberofcow--;
            CD = D; //1 or 0
            i += D; //直接跳过，反而chaoshi更多？反胃
        }
        else
        {
            CD++; //else}
            i++;
        }
    }
    return -1;//这里1jiubuchaol 
}

//不用树，因为是有序的，所以可以直接二分判断

node mytree[1000006];

int main(void)
{
    freopen("socdist.in", "r", stdin);
    freopen("socdist.out", "w", stdout); //忘了关这个，调好及
    scanf("%d%d", &N, &M);
    for (long long i = 0; i < M; i++)
    {
        scanf("%lld%lld", &a[i], &b[i]);
        if (b[i] > farest)
            farest = b[i];

        hasgrass.push_back(pair<long long, long long>(a[i], b[i]));
    }
    sort(hasgrass.begin(), hasgrass.end()); //排序后正确性没问题了
    long long mymin = 1;
    mymax = farest / N + 1;
    long long i;
    // cout<<mymax<<endl;
    long long ll = 1;//让上面超时的原因？
    long long rr = mymax;
    long long D = (ll + rr) / 2 + 1; //mid
    // for (long long D = 1; D <= mymax + 1; D++)
    long long tmp;
    while (1)
    {
        D = (ll + rr) / 2 + 1; //mid
        if (rr - ll <= 3)
        {
            for (long long kk = ll; kk <= rr; kk++)
            {
                if (check(kk) == 1)
                {
                    cout << kk -1  << endl;
                    exit(0); //没用？？编译没过，上一次的a.out
                    return 0;
                }
            }
        }
        tmp = check(D); //优化
        if (tmp == 1)
        {
            rr = D;
        }
        else if (tmp == -1)
        {
            ll = D;
        }
    }
    return 0;
}