#include <iostream>
#include <queue>
#include <algorithm>
#include <stack>
#include <unordered_set>
using namespace std;
#define MYMAX 100005
#define OO 1000000000000000000

int N;
int myloop[MYMAX];
int repeat[MYMAX];

long long ans, totalans=OO;

inline int loopdis(int a, int b)
{
    //from a to b
    if (b >= a) //yao =
        return b - a;
    else
    {
        return N + b - a;
    }
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> myloop[i];
    }
    //不需要遍历起点,最多的点(s)
    int maxcows = 0;
    vector<int> maxcowsindex;
    for (int i = 0; i < N; i++)
    {
        if (myloop[i] > maxcows)
            maxcows = myloop[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (myloop[i] == maxcows) //游泳池消毒水味，晚上
        {
            maxcowsindex.push_back(i);
        }
    }
    //启动虚拟环境

    for (int start : maxcowsindex)
    {
        // cows.
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

            // for (int _ = 0; _ < N; _++)
            //     cout << myloop[_] << " ";
            // cout << endl;
        }
        int last0index = 0;
        for (int i = 0; i < N; i++)
        {
            if (myloop[i] == 0)
                last0index = i;
        }
        for (int ii = start; ii < N+start; ii++)//下面这行忘了改
        {
            int i=ii%N;
            if (myloop[i] >= 1)
            {
                for (int _ = 0; _ < myloop[i]; _++)
                    if (repeat[i] != -1)
                        cows.push(repeat[i]); //突然掉水里
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

            // for (int _ = 0; _ < N; _++)
            //     cout << myloop[_] << " ";
            // cout << endl;

        } //自己差一点就想到了,还有这个为什么31不行,手工的时候也有好多次小于33
        if (ans < totalans)//反了,totalans太大
            totalans = ans;

        cout<<ans<<" "<<start<<endl;
    }
    // cout << last0index << endl;
    cout << totalans << endl;
    return 0;
}