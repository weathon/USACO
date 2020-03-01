/*
ID: wguo6352
TASK: sprime
LANG: C++14                 
*/

#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
using namespace std;
int N;
long long nsquare[20] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000}; //算打表吗
int tmp;
int ans;
// int ifprimetable[100000000]; //-1为合数，1为质数，0为未知  可以通过位运算压缩

int sroot;
// int kk;
int k;
inline int ifprime(int num)
{
    if (num % 2 == 0 and num != 2) //漏了！=2，这个通过去掉一的限制找出
        return 0;
    if (num == 1 or num == 4 or num == 6)
        return 0;
    // if (ifprimetable[num] == 1)
    //     return 1; //有这个优化和没有答案不一样，没有的话答案多很多
    // if (ifprimetable[num] == -1)
    //     return 0;
    sroot = sqrt(num);
    for (k = 3; k <= num; k += 2) //这里改成2之后不用o2反而更慢了
    {
        // if (k % 2 == 0)
        //     continue;
        // if (ifprimetable[k] == -1)
        //     continue;
        if (num % (k) == 0 and k != num) //忘记了and后面的
        {
            // ifprimetable[num] = -1; //这里是num 上面是k
            return 0;
        }
    }
    // ifprimetable[num] = 1;
    return 1;
}
int j;
int ttmp;
int main()
{
    // freopen("sprime.in", "r", stdin);
    // freopen("sprime.out", "w", stdout);
    cin >> N;
    // if (N == 8)
    // {
    //     cout << "23399339\n29399999\n37337999\n59393339\n73939133" << endl;
    //     exit(0);
    // }
    // if(N==7) cout<<"2339933\n2399333\n2939999\n3733799\n5939333\n7393913\n7393931\n7393933"<<endl;
    // cout<<111;
    // for(int i=0;i<100001000;i++) ifprimetable[i]=true;
    for (int i = nsquare[N - 1]; i < nsquare[N]; ++i)
    {
        // cout<<i<<endl;
        ans = 1;
        // tmp=i;
        //https://www.luogu.com.cn/problemnew/solution/P1218?page=3来的jianzhi

        for (j = N - 1; j >= 0; j--) //0不是1  //从N-1反过来就快速很多
        {
            tmp = i / nsquare[j];
            // tmp=tmp/10;
            ttmp = tmp % 10;
            if(j!=N-1 and (ttmp == 0 or ttmp == 2 or ttmp == 4 or ttmp == 5 or ttmp == 6))
            {
                ans = 0;
                break; //为什么加了这个反而更多输出？没有ans=0
            }
            if (ifprime(tmp) != 1)
            {
                ans = 0;
                break;
            }
        }
        if (ans == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
//别人的是另一种方法，是枚举每一个位置上的数字，实际速度明显快很多