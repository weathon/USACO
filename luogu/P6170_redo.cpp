#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int N;
int myloop[100006];

int main(void)
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> myloop[i];
    }

    //从头扫到结尾，有牛就收，没牛就放下一只，然后看什么时候放完 (原来这只是第一步，不是最后一步)
    //参考http://www.usaco.org/current/data/sol_cbarn_gold_feb16.html
    int i;
    int count = 0; //桶，记录剩余的牛数量
    int loop = 1;
    for (int _ = 0; _ <= 2 * N - 1; _++)
    {
        // cout << count << " ";
        i = _ % N;
        if (loop == 2 and count == 0)
        {
            //第二圈并且牛放完了
            break;
        }
        if (i == 0 and _ != 0)
        {
            loop = 2; //第二轮标记
        }
        if (myloop[i] > 1)
        {
            count += myloop[i] - 1;
            // myloop[i]=1;//要标记上吗？对于样例来说一样
        }
        if (myloop[i] == 0 and count > 0)
        {
            // myloop[i] = 1;
            count--; //确保有牛可以放才减一}
        }
    }
    
    cout << i << endl;
    return 0;
}
