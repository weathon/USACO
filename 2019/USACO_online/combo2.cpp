/*
ID: wguo6352
TASK: combo
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int N;
int psd1[4];
int psd2[4];
int tong1[7][7][7];
int tong2[7][7][7];
// int t[30000000];
int t[400][3];
int pointer = 0;

bool ifin(int n)
{
    for (int i = 0; i < 400; i++)
        if (n == t[i])
            return true;
    return false;
}

int main(void)
{
    freopen("combo.in", "r", stdin);
    // freopen("combo.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < 3; i++)
        cin >> psd1[i];
    for (int i = 0; i < 3; i++)
        cin >> psd2[i];
    for (int i = psd1[0] - 2; i <= psd1[0] + 2; i++)
    {
        int ii = i;
        if (ii < 0)
            ii = N + ii;
        for (int j = psd1[1] - 2; j <= psd1[1] + 2; j++)
        {
            int jj = j;
            if (jj < 0)
                jj = N + jj;
            for (int k = psd1[2] - 2; k <= psd1[2] + 2; k++)
            {
                int kk = k;
                if (kk < 0)
                    kk = N + kk;
                
                
                pointer++;
            }
        }
    }
    return 0;
}