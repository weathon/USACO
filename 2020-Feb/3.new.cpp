#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int N, K, A1, A2, B1, B2;
int numlist[200];
int tmplista[200]; //不直接删除，而是标记？
//有机会过
int tmplistb[200]; //不直接删除，而是标记？
int a;
int b;
int tmp;

bool ifsame(int a[200], int b[200])
{
    for (int i = 1; i <= N; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    // K = 10000000000;

    freopen("swap.in", "r", stdin);
    freopen("swap.out", "w", stdout);
    cin >> N >> K >> A1 >> A2 >> B1 >> B2;
    int Bd = (B2 - B1 + 1) / 2;
    int Ad = (A2 - A1 + 1) / 2;
    int ref[200];
    for (int i = 1; i <= N; i++) //从一开始，有点不习惯win全键盘
    {
        numlist[i] = i;
        ref[i] = i;
    }
    int loopcount = -1;
    for (int j = 0; j < K; j++) //通过本地测试循环次数测试数来的，和k有关？还是就是100？输出错了，是j不是k
    {
        if (ifsame(numlist, ref) and j!=0)
        {
            loopcount = j;//不加这一行也没事，0？RE是在读取之后
            break;
        }
        // cout<<B1;
        for (a = 1; a <= Ad; a++)
        {
            tmp = numlist[A2 - a + 1];
            numlist[A2 - a + 1] = numlist[a + A1 - 1];
            numlist[a + A1 - 1] = tmp;
        }

        for (b = 1; b <= Bd; b++) //格式化快捷键不好用 喝太多水
        {
            // myswap(numlist[B2 - b + 1], numlist[b + B1 - 1]);
            tmp = numlist[B2 - b + 1];
            numlist[B2 - b + 1] = numlist[b + B1 - 1];
            numlist[b + B1 - 1] = tmp;
        }

    } //分开都没问题，合到一起就不行了？ 局部？
    if (loopcount != -1)
    {
        //不用从ref来，因为已经一样了
        int l=K%loopcount;//会出错，RE为什么？
        for (int j = 0; j < l; j++) //通过本地测试循环次数测试数来的，和k有关？还是就是100？输出错了，是j不是k
        {
            // cout<<B1;
            for (a = 1; a <= Ad; a++)
            {
                tmp = numlist[A2 - a + 1];
                numlist[A2 - a + 1] = numlist[a + A1 - 1];
                numlist[a + A1 - 1] = tmp;
            }

            for (b = 1; b <= Bd; b++) //格式化快捷键不好用 喝太多水
            {
                // myswap(numlist[B2 - b + 1], numlist[b + B1 - 1]);
                tmp = numlist[B2 - b + 1];
                numlist[B2 - b + 1] = numlist[b + B1 - 1];
                numlist[b + B1 - 1] = tmp;
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        // cout << numlist[i] << endl; //恩典 喝太多水要上厕所 咖啡，大便
        printf("%d\n", numlist[i]);
    }
    return 0;
}