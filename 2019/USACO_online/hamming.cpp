/*
ID: wguo6352
TASK: hamming
LANG: C++14                 
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

int n, b, d;
int twoton[20] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};

int hammingd(int, int);
vector<int> ans;
int main()
{
    freopen("hamming.in", "r", stdin);
    freopen("hamming.out", "w", stdout);
    cin >> n >> b >> d;
    // cout<<hammingd(n,d)<<endl;
    ans.push_back(0);
    int count = 0; //init
    bool ifans;
    for (int testnum = 1; true; testnum++) //0默认是答案了
    {
        // cout<<count<<endl;
        if (count >= n - 1) //忘了-1,一直死循环？
            break;
        ifans = true;
        for (auto num : ans)
        {
            if (hammingd(num, testnum) < d)
            {
                ifans = false;
                break;
            }
        }
        if (ifans)
        {
            count++;
            ans.push_back(testnum);
        }
    }
    int i = 0;
    // int j;
    for (auto num : ans)
    {
        if (i % 10 != 9) //%9不可行，行数多的hua，这就是有一次下面黏在一起
        {
            if(i==n-1) break;
            cout << num << " ";
        }
        else
   {         if(i==n-1) break;//漏了下面的情况，差点忘了括号
            cout << num << endl;}
        i++;
    }
    cout << ans[n - 1] << endl;
}

int tmp;
int tmpnum;
int mynum;

int hammingd(int aa, int bb) //待核查
{
    mynum = 0;
    tmpnum = aa ^ bb;
    //i=0单独判断
    if (tmpnum % 2 == 1)
        mynum = 1;
    //最后结果总是多一是因为这里没有除以二，其实不用特殊处理
    tmpnum /= 2;
    for (int i = 1; i < b; i++)
    {
        if (tmpnum % 2 == 1)
        {
            mynum++;
        }
        tmpnum = tmpnum / 2;
    }
    return mynum; //要减一？ 无论如何都是4 测试出问题了
    //7和25输出也是4？
    // return 0;
}