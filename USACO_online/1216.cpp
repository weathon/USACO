/*
ID: wguo6352
TASK: numtri
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
using namespace std;

struct Mynode
{
    int num;
    int L = 0, R = 0;
};

Mynode mytower[600000];//1000不够，是1000层！
int myfree = 0;

int max(int a,int b)
{
    if(a>b) return a;
    return b;
}

int main()
{
    freopen("numtri.in","r",stdin);
    freopen("numtri.out","w",stdout);
    int r;
    cin >> r;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> mytower[myfree].num;
            mytower[myfree].L = myfree + i + 1;
            mytower[myfree].R = myfree + i + 2;
            myfree++;
        }
    }
    int total=myfree-1;//最后多加了1
    //最下面一行补充0
    for (int i = 0; i < r + 1; i++)
    {
        mytower[myfree].num=0;
        myfree++;
    }

    //从下往上算
    for(int i=total;i>=0;i--)
    {
        mytower[i].num+=max(//漏了+=
            mytower[mytower[i].L].num,
            mytower[mytower[i].R].num
            );
            // cout<<mytower[i].num<<" ";
    }
    cout<<mytower[0].num<<endl;//结果多了1？total弄错了
    return 0;
}