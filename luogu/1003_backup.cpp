#include <iostream>
using namespace std;
//实际上是1002不是1003
long long checkerboard[32][32]; //long long不够大？
int f[31][31];
// int if_1[32][32];
// long long count;

int main()
{
    int Bx, By, Mx, My;
    for (int i = 0; i < 30; i++)
        for (int j = 0; j < 30; j++)
        {
            checkerboard[i][j] = 0;
            f[i][j] = 1;
        }

    cin >> Bx >> By >> Mx >> My;
    checkerboard[Bx + 1][By] = 1;
    checkerboard[Bx][By + 1] = 0;

    f[Mx][My] = 0;
    if (Mx >= 2 and My >= 1)
        f[Mx - 2][My - 1] = 0;
    if (Mx >= 1 and My >= 2)
        f[Mx - 1][My - 2] = 0;
    if (Mx >= 1)
        f[Mx - 1][My + 2] = 0;
    if (Mx >= 2)
        f[Mx - 2][My + 1] = 0;
    f[Mx + 1][My + 2] = 0;
    f[Mx + 2][My + 1] = 0;
    if (My >= 2)
        f[Mx + 1][My - 2] = 0;
    if (My >= 1)
        f[Mx + 2][My - 1] = 0; // 通过扩大数组弄好了右下溢出，没考虑左上
    // for (int i = 0; i < 30; i++)
    // {
    //     for (int j = 0; j < 30; j++)
    //     {
    //         cout << checkerboard[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = Bx; i >= 0; i--)
    {
        for (int j = By; j >= 0; j--)
        {
            if (f[i][j] != 0)
            {
                long long right, down;//这里忘了
                right = down = 0;
                if (f[i + 1][j] != 0)
                    right = checkerboard[i + 1][j];
                if (f[i][j + 1] != 0)
                    down = checkerboard[i][j + 1];
                checkerboard[i][j] = down + right; //这里还漏了+1,那么应该结果会是0而不是溢出啊
                // cout << i << " " << j << " " << checkerboard[i][j] << endl;
                // for (int i = 0; i <= Bx; i++)
                // {
                //     for (int j = 0; j <= By; j++)
                //     {
                //         cout << checkerboard[i][j] << " ";
                //     }
                //     cout << endl;
                // }
            }
        }
    }
    cout << checkerboard[0][0] << endl; //由于是无符号，用0当作-1,但是-1不够？  总是爆数据类型，但是其实答案并没有too big to 爆
    return 0;
}