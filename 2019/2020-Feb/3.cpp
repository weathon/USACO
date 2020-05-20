#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
//unusable
int N, K, A1, A2, B1, B2;

int numlist[200];
int tmplista[200]; //不直接删除，而是标记？
//有机会过
int tmplistb[200]; //不直接删除，而是标记？
int a;
int b;
int main()
{
    // freopen("swap.in", "r", stdin);
    // freopen("swap.out", "w", stdout);
    cin >> N >> K >> A1 >> A2 >> B1 >> B2;
    int SA1, SA2, SB1, SB2;
    if (A1 < B2 and A2 > B1)
    {
        SB1 = B1;
        SB2 = A1 - 1;
        SA2 = B2 + 1;
        SA2 = A2;
        A2 = B2;
        B1 = A1;
    }
    else if (A2 > B1 and A1 < B1)
    {
        SA1 = A1;
        SA2 = B1 - 1;
        SB1 = A2 + 1;
        SB2 = B2;
        A1 = B1;
        B2 = A2;
    }
    if (K % 2 == 1) //单数
    {
        int SBd = (SB2 - SB1 + 1) / 2;
        int SAd = (SA2 - SA1 + 1) / 2;
        for (a = 1; a <= SAd; a++)
        {
            swap(numlist[SA2 - a + 1], numlist[a + SA1 - 1]);
        }

        for (b = 1; b <= SBd; b++) //格式化快捷键不好用 喝太多水
        {
            swap(numlist[SB2 - b + 1], numlist[b + SB1 - 1]);
        }
    }
    int Bd = (B2 - B1 + 1) / 2;
    int Ad = (A2 - A1 + 1) / 2;
    for (int i = 1; i <= N; i++) //从一开始，有点不习惯win全键盘
    {
        numlist[i] = i;
    }
    for (int j = 0; j < K; j++)
    {
        // cout<<B1;
        for (a = 1; a <= Ad; a++)
        {
            swap(numlist[A2 - a + 1], numlist[a + A1 - 1]);
        }

        for (b = 1; b <= Bd; b++) //格式化快捷键不好用 喝太多水
        {
            swap(numlist[B2 - b + 1], numlist[b + B1 - 1]);
        }

    } //分开都没问题，合到一起就不行了？ 局部？
    for (int i = 1; i <= N; i++)
    {
        // cout << numlist[i] << endl; //恩典 喝太多水要上厕所 咖啡，大便
        printf("%d\n", numlist[i]);
    }
    return 0;
}