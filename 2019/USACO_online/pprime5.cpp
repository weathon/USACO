/*
ID: wguo6352
TASK: pprime
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int sroot;
char tmp = '=';
int a, b;
char ac[10], bc[10];
int alen, blen;
int current[10];
int num;
int ll;
int k;

inline int ifprime(int num)
{
    if (num % 2 == 0 and num != 2) //漏了！=2，这个通过去掉一的限制找出
        return 0;
    if (num == 1 or num == 4 or num == 6)
        return 0;
    sroot = sqrt(num);
    for (k = 3; k <= sroot; k += 2) //这里改成2之后不用o2反而更慢了
    {
        if (num % (k) == 0 and k != num) //忘记了and后面的
        {
            return 0;
        }
    }
    return 1;
}

long long ten_to_ith_power[20] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000};

void dfs(int digs, int digs_needed) //目前的位数，需要的总位数
{
    if ((digs_needed + 1) / 2 == digs)
    {
        //判断处理
        num = 0;
        if (digs_needed % 2 == 0)
        {
            for (ll = 0; ll < digs; ll++)
            {
                num = num * 10 + current[ll];
            }
        }
        else
        {
            for (ll = 0; ll < digs - 1; ll++)
            {
                num = num * 10 + current[ll];
            }
        }
        // if (digs_needed % 2 == 1)
        //     num = num * 10 + current[digs + 1];
        for (ll = digs-1; ll >= 0; ll--)
        {
            num = num * 10 + current[ll];
        }
        // cout<<num<<endl;
        if (num == 0)
            return;
        if (num < a or num > b)
            return;
        if (ifprime(num) == 1)
        {
            cout << num << endl;
            // return;
        }
        return;
    }
    for (int k = 0; k <= 9; k++)
    {
        current[digs] = k;
        dfs(digs + 1, digs_needed);
    }
}

int onelist[4] = {2, 3, 5, 7};

void solve(int digs, int begin, int end) //位数和开始数值以及结束数值
{
    if (digs == 1)
    {
        for (int __ = 0; __ < 4; __++)
        {
            if (onelist[__] >= a and onelist[__] <= b)
                cout << onelist[__] << endl;
        }
        return;
    }
    dfs(0, digs);
}

int main()
{
    // freopen("i.in","r",stdin);
    a = 0;
    while (tmp = getchar())
    {
        // ;
        if (tmp == ' ' or tmp == '\n' or tmp=='\r' or tmp=='\0')//可能没有以\n结束
            break;
        a = a * 10 + (tmp - '0');
        ac[alen] = tmp;
        alen++;
    }
    b = 0;
    while (cin>>tmp)//保存有延时，cin可以 getchar不行
    {
        // cout<<tmp<<endl;
        if (tmp == '\n' or tmp == '\r' or tmp==' ' or tmp=='\0')// \0加在了上面一行
            break;
        b = b * 10 + (tmp - '0');
        bc[blen] = tmp;
        blen++;
    }
    // cout<<a<<endl<<b;
    for (int _ = alen; _ <= blen; _++)
        solve(_, ten_to_ith_power[_ - 1], ten_to_ith_power[_] - 1);
    return 0;
}
