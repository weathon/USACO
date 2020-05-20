/*
ID: wguo6352
TASK: barn1
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int m, s, c;
int tong[300];
int cow[300];
int len[600];

bool compare_(int a, int b)
{
    return (a > b);
}

int main(void)
{
    freopen("barn1.in", "r", stdin);
    freopen("barn1.out", "w", stdout);
    cin >> m >> s >> c;
    // int lastindex=0;
    // bool iffirst=true;
    int lenindex = 0;
    for (int i = 0; i < c; i++)
    {
        cin >> cow[i];
        tong[cow[i]] = 1;
        // len+=
        // if (i != 0)
        // {
        //     // len[lenindex]=
        //     len[lenindex] = cow[i] - cow[i - 1];//输入不一定按顺序，之前没注意
        //     // cout<<i<<" "<<lenindex<<endl;
        //     // cout<<len[i-1]<<endl;
        //     // cout<<len[lenindex-1]<<endl;

        //     lenindex++;
        // }
    }
    sort(cow, cow + c);
    for (int i = 1; i < c; i++)
    {
        len[lenindex] = cow[i] - cow[i - 1];
        lenindex++; //没有这个为什么会内存错误？ not here, but next few steps
    }

    // int numofb = 1,
    sort(len, len + lenindex, compare_); //here, tried few times
    int lenofm = cow[c - 1] - cow[0] + 1;
    // cout << numofb << " " << lenofm;
    for (int i = 0; i < lenindex; i++) //就是这里断开太多次了，（4个只能两次）然后下面的关系没有想好
    {
        if (m > 1) //here or in "for"
        {
            lenofm -= len[i] - 1;
            // cout<<len[i]<<" "    ;
            m--;
        }
        else
            break;
    }
    cout << lenofm << endl;
    return 0;
}