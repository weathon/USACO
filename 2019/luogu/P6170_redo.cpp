#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
#define MYMAX 100005
int repeat[MYMAX];
int N;
int myloop[MYMAX];
int myloop_backup[MYMAX];

long long ans;
inline long long loopdis(int a, int b)
{
    if (b >= a) 
        return b - a;
    else
    {
        return N + b - a;
    }
}

int main(void)
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> myloop[i];
        myloop_backup[i]=myloop[i];
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
            myloop[i]=1;//要标记上吗？对于样例来说一样,测试别的数据不行，还是不是非常明白为什么,后面要还原？
        }
        if (myloop[i] == 0 and count > 0)
        {
            myloop[i] = 1;
            count--; //确保有牛可以放才减一}
        }
    }
    // cout<<i<<endl;
    for(int i=0;i<N;i++)
    {
        myloop[i]=myloop_backup[i];
    }
    int start = i - 1;

    //下面的代码是从我的暴力方法复制过来的，可能不是很简洁
    queue<int> cows;
    for (int i = 0; i < N; i++)
        repeat[i] = -1;
    ans = 0;
    for (int ii = start; ii < N + start; ii++)
    {
        int i = ii % N;
        if (myloop[i] >= 1)
        {
            for (int _ = 0; _ < myloop[i]; _++)
                cows.push(i);
            myloop[i] = 0;
        }
        if (!cows.empty())
        {
            myloop[i] = 1; //牛的重复跑没计算
            repeat[i] = cows.front();
            ans += loopdis(cows.front(), i) * loopdis(cows.front(), i);
            cows.pop();
        }
    }
    int last0index = 0;
    for (int i = start; i < N + start; i++)
    {
        if (myloop[i % N] == 0)
            last0index = i; 
    }
    for (int ii = start; ii <= last0index; ii++)
    {
        int i = ii % N;
        if (myloop[i] >= 1)
        {
            for (int _ = 0; _ < myloop[i]; _++)
                if (repeat[i] != -1)
                    cows.push(repeat[i]);
                else
                {
                    cows.push(i);
                }

            myloop[i] = 0;
        }
        if (!cows.empty())
        {
            myloop[i] = 1;
            ans += loopdis(cows.front(), i) * loopdis(cows.front(), i);
            cows.pop();
        }
    }
    cout << ans << endl;
    return 0;
}
