#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
int N, M;
int a[100005];
int b[100005];
int ans;
int maxd;

char check(int myd) //return '>' '=' and '<'
{
    int nowpos = a[0]; //不一定从0开始
    int cowleft = N - 1;
    for (int k = 0; k < M; k++) //mising k=0
    {
        while (nowpos <= b[k])
        {
            if (nowpos + myd < a[k])
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
    freopen("socdist.in", "r", stdin);
    // freopen("socdist.out", "w", stdout);
    cin >> N >> M;
    for (int _ = 0; _ < M; _++)
    {
        cin >> a[_] >> b[_];
    }
    // --36266
    sort(a, a + M);
    sort(b, b + M); //less first
    // cout<<"--"<<a[0]<<endl;
    maxd = b[M - 1] / N;
    int l = 0;
    int r = maxd + 2;
    int mid = (r + l) / 2;
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
            exit(0);
        }
        else if (tmp_ans == '<') //反了
        {
            l = mid;
        }
        else
        {
            if (check(mid - 1) != '>')
            {
                cout << mid - 1 << endl;
                exit(0);
            }
            r=mid;
        }
    }
    // for (int a = 1; a <= r; a++)
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
