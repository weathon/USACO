#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

long long N, M;
long long a[100006];
long long b[100006];
long long farest;

int main(void)
{
    freopen("socdist.in", "r", stdin);
    freopen("socdist.out", "w", stdout);
    scanf("%d%d", &N, &M);
    for (long long i = 0; i < M; i++)
    {
        scanf("%lld%lld", &a[i], &b[i]);
        if (b[i] > farest)
            farest = b[i];
    }
    cout<<(farest+1)/N<<endl;
    return 0;
}
