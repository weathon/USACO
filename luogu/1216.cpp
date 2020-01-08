#include <iostream>
using namespace std;

struct Mynode
{
    long long num;
    long long L = 0, R = 0;
};

Mynode mytower[1000000];//1000不够，是1000层！
long long myfree = 0;

int main()
{
    long long r;
    cin >> r;
    for (long long i = 0; i < r; i++)
    {
        for (long long j = 0; j <= i; j++)
        {
            cin >> mytower[myfree].num;
            mytower[myfree].L = myfree + i + 1;
            mytower[myfree].R = myfree + i + 2;
            myfree++;
        }
    }
    long long total=myfree-1;//最后多加了1
    //最下面一行补充0
    for (long long i = 0; i < r + 1; i++)
    {
        mytower[myfree].num=0;
        myfree++;
    }

    //从下往上算
    for(long long i=total;i>=0;i--)
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