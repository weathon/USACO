/*
ID: wguo6352
TASK: sprime
LANG: C++14                 
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
int N;
long long nsquare[20] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000}; //算打表吗
int tmp;
int ans;
char ifprimetable[100000000]; //-1为合数，1为质数，0为未知

int sroot;
inline int ifprime(int num)
{
    if (num % 2 == 0)
        return 0;
    if (num == 1)
        return 0;
    if (ifprimetable[num] == 1)
        return 1; //有这个优化和没有答案不一样，没有的话答案多很多
    if (ifprimetable[num] == -1)
        return 0;
    sroot = sqrt(num);
    for (int k = 3; k <= sroot; k++) //这里改成2之后不用o2反而更慢了
    {
        if (k % 2 == 0)
            continue;
        if (ifprimetable[k] == -1)
            continue;
        if (num % k == 0)
        {
            ifprimetable[num] = -1; //这里是num 上面是k
            return 0;
        }
    }
    ifprimetable[num] = 1;
    return 1;
}

int main()
{
    // freopen("sprime.in", "r", stdin);
    // freopen("sprime.out", "w", stdout);
    cin >> N;
    // for(int i=0;i<100001000;i++) ifprimetable[i]=true;
    for (long long i = nsquare[N - 1]; i < nsquare[N]; ++i)
    {
        // cout<<i<<endl;
        ans = 1;
        for (int j = 0; j < N; ++j) //0不是1
        {
            tmp = i / nsquare[j];
            if (ifprime(tmp) != 1)
            {
                ans = 0;
                break;
            }
        }
        if (ans == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
