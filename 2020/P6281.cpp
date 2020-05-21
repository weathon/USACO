#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
long long N, M;
long long a[100005];
long long b[100005];
long long ans;
long long maxd;

char check(long long myd) //return '>' '=' and '<'
{
    long long nowpos = a[0]; //不一定从0开始
    long long cowleft = N - 1;
    for (long long k = 0; k < M; k++) //mising k=0
    {
        while (nowpos <= b[k])
        {
            if (nowpos + myd <= a[k])
            {
                nowpos = a[k];
            }
            else
            {
                if (nowpos + myd <= b[k])
                    nowpos += myd;
                else //missing
                    // continue; break?
                    break;
            }
            if (nowpos >= a[k] and nowpos <= b[k])
                cowleft--;
        }
    }
    if (cowleft < 0)
    {
        return '<';
    }
    if (cowleft > 0)
        return '>';
    else
        return '=';
}

int main(void)
{
    // freopen("7.in", "r", stdin);
    // freopen("socdist.out", "w", stdout);
    cin >> N >> M;
    for (long long _ = 0; _ < M; _++)
    {
        cin >> a[_] >> b[_];
    }
    // --36266
    sort(a, a + M);
    sort(b, b + M); //less first
    // cout<<"--"<<a[0]<<endl;
    maxd = b[M - 1] / N;
    long long l = 0;
    long long r = 34359738368;
    long long mid = (r + l) / 2;
    // cout << maxd; //get 1?
    while (1)
    {
        mid = (r + l) / 2; //missing
        // cout << mid << endl;
        char tmp_ans = check(mid);
        // cout << tmp_ans << endl;
        if (tmp_ans == '=')
        {
            cout << mid << endl; //得到了2还是死循环，2还是小于
            exit(0); //忘了取消这个？
        }
        // 不要？当小于？
        if (tmp_ans == '<' or tmp_ans=='=') //反了
        {
            l = mid;
        }
        else
        {
            if (check(mid - 1) != '>')
            {
                // cout<<"aa";
                cout << mid - 1 << endl;
                exit(0);
            }
            r=mid;
        }
    }
    // for (long long a = 1; a <= r; a++)
    // {
    //     // cout<<a<<endl;
    //     // cout<<check(a)<<endl;
    //     if (check(a) == '>')
    //     {
    //         cout << a -1 << endl;
    //         break;
    //     }
    // }
    return 0;
}
