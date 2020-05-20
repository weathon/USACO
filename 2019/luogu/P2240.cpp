#include <iostream>
#include <algorithm>
#include<cstdio>
using namespace std;

struct coin
{
    int m, v;
    double cp;
};

bool cmp(coin a, coin b)
{
    return (a.cp > b.cp);
}
coin mylist[200];

int main()
{
    int N, T;
    cin >> N >> T;
    for (int i = 0; i < N; i++)
    {
        cin >> mylist[i].m >> mylist[i].v;
        mylist[i].cp = double(mylist[i].v) / double(mylist[i].m);
    }
    // cout<<mylist[0].cp<<endl;
    sort(mylist, mylist + N, cmp);
    // cout<<mylist[0].cp<<endl;
    double ans = 0;//忘了
    for (int i = 0; i < N; i++)
    {
        if (mylist[i].m <= T)
        {
            T -= mylist[i].m;
            ans += mylist[i].v;
        }
        else
        {
            ans += mylist[i].v * (float(T) / mylist[i].m);//要加float
            break;
        }
    }
    // cout << ans << endl;
    printf("%.2f\n",ans);
    return 0;
}