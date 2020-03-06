/*
ID: wguo6352
TASK: sort3
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int numlist[2000];
int numlist2[2000];
int tong[2000];

// bool a(int i,int j){ return i>j;}

int main()
{
    // freopen("sort3.in", "r", stdin);
    // freopen("sort3.out", "w", stdout);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> numlist[i];
    for (int i = 0; i < N; i++)
        numlist2[i] = numlist[i];

    sort(numlist, numlist + N);
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (numlist2[i] != numlist[i])
        {
            tong[i]=numlist2[i]-numlist[i];
            //https://www.luogu.com.cn/problemnew/solution/P1459
        }
    }
    cout << (count + 2) / 2 << endl;
    return 0;
}