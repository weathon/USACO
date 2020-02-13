/*
ID: wguo6352
TASK: milk2
LANG: C++14                 
*/

char ifused[1000005];
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void)
{
    for (int i = 0; i < 1000005; i++)
    {
        ifused[i] = 'n';
    }
    freopen("milk2.in", "r", stdin);
    freopen("milk2.out", "w", stdout);
    int n;
    cin >> n;
    int begin, end;

    for (int i = 0; i < n; i++)
    {
        cin >> begin >> end;
        for (int j = begin; j < end; j++)
        {
            ifused[j] = 'y';
        }
    }
    int maxfree = 0, maxnotfree = 0;
    int thisfree = 0, thisnofree = 0;
    int lastone;
    for (int i = 1000001; i > 0; i--)
    {
        if (ifused[i] == 'y')
        {
            lastone = i;
            break;
        }
    }
    int firstone;
    for (int i = 0; i <1000001; i++)
    {
        if (ifused[i] == 'y')
        {
            firstone = i;
            break;
        }
    }
    for (int i = firstone; i <= lastone; i++)
    {
        if (ifused[i] == 'n')
        {
            if (thisnofree > maxnotfree)
                maxnotfree = thisnofree;
            thisnofree = 0;
            thisfree++;
        }
        else if (ifused[i] == 'y')
        {
            if (thisfree > maxfree)
                maxfree = thisfree;
            thisfree = 0;
            thisnofree++;
        }
    }

    // 看了数据才知道，问题有没有处理开头和最后的没有存
    if (thisfree > maxfree)
        maxfree = thisfree;
    if (thisnofree > maxnotfree)
        maxnotfree = thisnofree;
    cout << maxnotfree << " " << maxfree<<endl;

    return 0;
}