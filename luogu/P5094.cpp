#include <iostream>
#include <algorithm>
using namespace std;

int N;
struct mycow
{
    int v, x;
};

bool cmp(mycow a, mycow b)
{
    return (a.v < b.v);
}
mycow cows[60000];
// long long sum[60000];

long long totalsum=0;

int main()
{
    //突然想到排序后直接是本身*之前的线段和，前缀或者线段树都可以
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> cows[i].v >> cows[i].x;
    }
    //输入的就是排好序的，差点忘了排序
    // sort(cows,cows+N,cmp);
    //小的排在了前面
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<i;j++)
        {
            totalsum+=(max(cows[i].v,cows[j].v))*abs(cows[i].x-cows[j].x);
        }
    }
    cout<<totalsum<<endl;
    return 0;
}