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
    int nowpos = 0;
    int cowleft = N;
    for (int k = 0; k < M; k++) //mising k=0
    {
        if (cowleft < 0)
            break;
        while (nowpos <= b[k])
        {
            if (nowpos < a[k])
            {
                nowpos = max(a[k], nowpos + myd);
            }
            else
            {
                nowpos += myd;
            }
            if (nowpos >= a[k] and nowpos <= b[k])
                cowleft--;
        }
    }
    if (b[M - 1] - nowpos >= myd)
    {
        return '<';
    }
    if (b[M - 1] - nowpos < 0)
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
    sort(a, a + M);
    sort(b, b + M); //less first
    maxd = b[M - 1] / N;
    int l = 0;
    int r = maxd + 2;
    int mid = (r + l) / 2;
    // cout << maxd; //get 1?
    // while (1)
    // {
    //     mid = (r + l) / 2; //missing
    //     cout << mid << endl;
    //     char tmp_ans = check(mid);
    //     cout << tmp_ans << endl;
    //     if (tmp_ans == '=')
    //     {
    //         cout << mid << endl; //得到了2还是死循环，2还是小于
    //         exit(0);
    //     }
    //     else if (tmp_ans == '<') //反了
    //     {
    //         l = mid;
    //     }
    //     else
    //     {
    //         r = mid;
    //     }
    // }
    for (int a = 1; a <= r; a++)
    {
        // cout<<a<<endl;
        if (check(a) == '>')
            cout << a - 1 << endl;
    }
    return 0;
}
