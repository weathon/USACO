/*
ID: wguo6352
TASK: ariprog
LANG: C++14                 
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdio>
using namespace std;

int N;
int maxpq;
long long bisquares[5000000];
short tong[225000];
int pointer = 0;

int main(void)
{
    // freopen("ariprog.in", "r", stdin);
    // freopen("ariprog.out", "w", stdout);
    //看了别人用人用sort做
    //上升序列？
    // cin >> N;
    // cin >> maxpq;
    scanf("%d%d", &N, &maxpq);
    int q; //常优
    int tmp;
    for (int p = 0; p <= maxpq; p++)
    {
        for (q = 0; q <= maxpq; q++)
        {
            tmp = p * p + q * q;
            if (tong[tmp] != 1)
            {
                bisquares[pointer] = p * p + q * q;
                tong[tmp] = 1;
                pointer++;
            }
        }
    }
    // int maxnum=bisquares[maxpq*maxpq*2];
    long long current;
    int count;
    int ifans = 0;
    int a; //移到外面来之后多过了一个点
    int b;
    int maxppqq = maxpq * maxpq + 1; //常熟
    int maxppqq2 = maxppqq * 2;      //常熟
    int j;
    int maxdiffer = 0;
    int nb_1;
    // for (j = 0; j < pointer; j++) cout<<bisquares[j]<<" ";
    // cout<<endl;  还是要打印调试，前面添加的时候就有重复添加
    sort(bisquares,bisquares+pointer-1);
    //for(int i=1;i<pointer;i++)
    //{
    //    if(bisquares[i]-bisquares[i-1]>maxdiffer) maxdiffer=bisquares[i]-bisquares[i-1];
    //}
    for (b = 1; b < (maxppqq * 2) / (N - 2); b++) //优化maxppqq为maxdiffer?不行，可以跨越的  这里可以N-2,智商刚才和下面的一起修改了，瞬间快了好多，最后的结束没有了
    {
        nb_1 = b * (N - 1); //这个放在外面最后一个点过了
        // cout<<endl;
        for (j = 0; j < pointer; j++) //直接用整除取余数可以吗  一倍就够了，很快了  直接便利会出现某一些输出两次的情况
        // for(int a=0;a<maxppqq;a++)
        {
            a = bisquares[j]; //直接扫描的话快乐很多，但是一堆WA
            // cout<<a<<endl;
            // if(a+b*(N-1)>maxppqq2*2) continue;//改成N-1就可以AC了，但是是有两个点超时
            if (a + nb_1 > maxppqq2)
                break; //改成N-1就可以AC了，但是是有两个点超时  明白了，直接便利没有大小顺序，不可以直接break

            //如果是先a可以jianzhi?
            // if(tong[a]!=1) continue;//加上不超时，不是这一行，看109，但是错了很多  long long?
            //https://www.luogu.com.cn/problemnew/solution/P1214?page=3
            //可以直接扫描数组 bisquares
            current = a - b;
            count = 0;
            while (1)
            {
                // cout<<tong[current]<<endl<<endl;
                //这样一个个找太慢了？
                current += b;
                if (tong[current] != 1)
                    break;

                if (count >= N - 1)
                {
                    // cout << a << " " << b << "\n";
                    printf("%d %d\n", a, b);
                    ifans = 1;
                    break;
                }
                if (current >= maxppqq2) //上面已经改了这里就不用*2了  修改了这里之后最后一个点就从1.2变成1.1了
                    break;

                count++;
            }
        }
    }
    if (ifans == 0)
        cout << "NONE" << endl;
    return 0;
}
//只超时了0.1 https://www.luogu.com.cn/record/30912346