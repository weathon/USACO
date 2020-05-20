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
int myloopo[MYMAX];
int repeat[MYMAX];

long long ans, totalans = OO;

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
        cin >> myloopo[i];
    }
    //不需要遍历起点,最多的点(s)
    int maxcows = 0;
    vector<int> maxcowsindex;
    for (int i = 0; i < N; i++)
    {
        if (myloopo[i] > maxcows) //忘了o
            maxcows = myloopo[i];
    }
    // 后面都是0的原因：没有还原myloop
    // cout<<"--------"<<maxcows<<endl;  输出0，怪不得结果错，调试那么久还是不确定，太多错误了
    for (int i = 0; i < N; i++)
    {
        if (myloopo[i] == maxcows) //游泳池消毒水味，晚上
        {
            maxcowsindex.push_back(i);
        }
    }
    //启动虚拟环境

    // for (int start : maxcowsindex)
    for(int start=0;start<N;start++)//改成全部就可以过了，官方题解说的最大的呢
    {
        //求前缀和>=0证明此处有多余的牛
        queue<int> cows;
        for (int i = 0; i < N; i++)
            myloop[i] = myloopo[i];
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
                last0index = i; //这里摸Jiuhaol
        }
        for (int ii = start; ii <= last0index; ii++) //后面还是很多时重复的1但是还在弄
        {
            int i = ii % N;
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

        }                   //自己差一点就想到了,还有这个为什么31不行,手工的时候也有好多次小于33
        if (ans < totalans) //反了,totalans太大
            totalans = ans;

        cout<<ans<<" "<<start<<endl;//很明显有一个0没有消除
        // cout << last0index << endl;//输出这个瞬间ok？
    }
    cout << totalans << endl;
    return 0;
}