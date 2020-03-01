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
char ifprimetable[10000000]; //-1为合数，1为质数，0为未知  可以通过位运算压缩

int sroot;
// int kk;
int k;
inline int ifprime(int num)
{
    if (num % 2 == 0 and num != 2) //漏了！=2，这个通过去掉一的限制找出
        return 0;
    if (num == 1 or num == 4 or num == 6)
        return 0;
    if (ifprimetable[num] == 1)
        return 1; //有这个优化和没有答案不一样，没有的话答案多很多
    if (ifprimetable[num] == -1)
        return 0;
    sroot = sqrt(num);
    for (k = 3; k <= sroot; k += 2) //这里改成2之后不用o2反而更慢了
    {
        // if (k % 2 == 0)
        //     continue;
        if (ifprimetable[k] == -1)
            continue;
        if (num % (k) == 0 and k != num) //忘记了and后面的
        {
            ifprimetable[num] = -1; //这里是num 上面是k
            return 0;
        }
    }
    ifprimetable[num] = 1;
    return 1;
}
inline int ifprimen8(int num)
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
    for (k = 3; k <= sroot; k += 2) //这里改成2之后不用o2反而更慢了
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
    freopen("sprime.in", "r", stdin);
    freopen("sprime.out", "w", stdout);
    cin >> N;
    for (int i = nsquare[N - 1]; i < nsquare[N];)
    {
        ans = 1;
        for (j = N - 1; j >= 0; j--) //0不是1  //从N-1反过来就快速很多
        {
            tmp = i / nsquare[j];
            if (j == 0)
            {
                if (ifprimen8(tmp) != 1)
                {
                    ans = 0;
                    i += (nsquare[j] - i % nsquare[j]); //开了o2没有结果输出
                    // i+=10000;
                    //这里证明其实以这一大块开头的都是不行的
                    break;
                }
            }
            else
            {
                if (ifprime(tmp) != 1)
                {
                    ans = 0;
                    i += (nsquare[j] - i % nsquare[j]); //开了o2没有结果输出
                    break;
                }
            }
        }
        if (ans == 1)
        {
            printf("%d\n", i);
            ++i;
        }
    }
    return 0;
}
//别人的是另一种方法，是枚举每一个位置上的数字，实际速度明显快很多