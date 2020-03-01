/*
ID: wguo6352
TASK: pprime
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
int a, b;

int num_begin[20];
int num_end[20];
long long nsquare[20] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000}; //算打表吗

int main()
{
    freopen("pprime.in", "r", stdin);
    // freopen("pprime.out","w",stdout);
    cin >> a >> b;
    long long tmp;
    int as,bs;
    for (int i = 1; i <= 9; i++) //倒叙存储  眼眶下面痛
    {
        tmp = a % nsquare[i];
        num_begin[i] = tmp / nsquare[i - 1];
    }
    for (int i = 1; i <= 9; i++) //倒叙存储  眼眶下面痛
    {
        tmp = b % nsquare[i];
        num_end[i] = tmp / nsquare[i - 1];
    }
    //折叠取最大值或者最小值
    //用0填充位置？
    return 0;
}