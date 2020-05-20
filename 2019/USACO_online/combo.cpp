/*
ID: wguo6352
TASK: combo
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
// #include <math>
using namespace std;

int N;
int a1, a2, a3;
int b1, b2, b3;
int tong[10000000];

int main(void)
{
    freopen("combo.in", "r", stdin);
    freopen("combo.out", "w", stdout);//修改了为什么还是RE
    cin >> N;
    N--;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    a1--;
    a2--;
    a3--;
    b1--;
    b2--;
    b3--;
    for (int i = a1 - 2; i <= a1 + 2; i++)
    {
        int ii = i;
        while (ii < 0)//原本是if 改成while之后不想改了  还是要while
            ii = N + ii + 1;//有可能不到2,问题出在循环上，循环上也要?  只改了一个，怪不得一直改不行
        while (ii > N)//>=?
            ii = ii - N - 1;
        for (int j = a2 - 2; j <= a2 + 2; j++)
        {
            int jj = j;
            while (jj < 0)
                jj = N + jj + 1;
            while (jj >N)
                jj = jj - N - 1;
            for (int k = a3 - 2; k <= a3 + 2; k++)
            {
                int kk = k;
                while (kk < 0)
                    kk = N + kk + 1;
                while (kk > N)
                    kk = kk - N - 1;
                tong[ii * 10000 + jj * 100 + kk] = 1;
            }
        }
    }

    for (int i = b1 - 2; i <= b1 + 2; i++)
    {
        int ii = i;
        while (ii < 0)
            ii = N + ii + 1;
        while (ii > N)
            ii = ii - N - 1;
        for (int j = b2 - 2; j <= b2 + 2; j++)
        {
            int jj = j;
            while (jj < 0)
                jj = N + jj + 1;
            while (jj > N)
                jj = jj - N - 1;
            for (int k = b3 - 2; k <= b3 + 2; k++)
            {
                int kk = k;
                while (kk < 0)
                    kk = N + kk + 1;
                while (kk > N)
                    kk = kk - N - 1;
                tong[ii * 10000 + jj * 100 + kk] = 1;
            }
        }
    }
int mycount=0;
for(int i=0;i<10000000;i++)
    mycount+=tong[i];
cout<<mycount<<endl;
    return 0;
}