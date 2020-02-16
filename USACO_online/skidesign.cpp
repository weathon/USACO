/*
ID: wguo6352
TASK: skidesign
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int N;
int numlist[1500];

int main(void)
{
    freopen("skidesign.in", "r", stdin);
    // freopen("skidesign.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> numlist[i];
    }
    sort(numlist, numlist + N);
    int cost = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = i; j < N; j++)
    //     {
    //         cout << numlist[j] << " " << numlist[i] << endl;
    //         if (abs(numlist[j] - numlist[i]) > 17)
    //         {
    //             cost += (numlist[j] - numlist[i] - 17) * (numlist[j] - numlist[i] - 17);
    //             numlist[j] = numlist[i] + 17;
    //             break;
    //         }
    //         // else
    //         // {
    //         //     break;
    //         // }
    //         // https://www.luogu.com.cn/problemnew/solution/P3650
    //     }
    // }
    for (int i = 0; i < N; i++)
    {
        
    }
    cout << cost << endl;
    return 0;
}