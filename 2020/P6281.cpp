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
    for (int k = 0; k < M; k++) //mising k=0
    {
        //还有一个while，一个区间可能有多个
        if (nowpos + myd <= b[k])
        {
            nowpos += myd;
        }
        else
        {
            if (k != M - 1)
            {
                // nowpos = a[1 + k];//不能直接放，还要检测这一个点可不可以，Ethan Liu
            }
            else
                return '>'; //忘了else
        }
    }
    if (nowpos + myd > b[M - 1])
    {
        return '=';
    }
    else
    {
        return '<';
    }
}

int main(void)
{
    freopen("socdist.in", "r", stdin);
    // freopen("socdist.out","w",stdout);
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
    cout << maxd;
    while (1)
    {
        mid = (r + l) / 2; //missing
        // cout<<mid<<endl;
        char tmp_ans = check(mid);
        cout << tmp_ans;
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
            r = mid;
        }
    }
    return 0;
}
