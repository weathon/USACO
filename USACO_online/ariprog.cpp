/*
ID: wguo6352
TASK: ariprog
LANG: C++14                 
*/
#define fastcall __attribute__((optimize("-O3")))

#pragma GCC optimize(2)

#pragma GCC optimize(3)

#pragma GCC optimize("Ofast")

#pragma GCC optimize("inline")

#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")

#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdio>
using namespace std;

int N;
int maxpq;
int bisquares[100000];
short tong[225000];
int pointer = 0;

int main(void)
{
    // freopen("ariprog.in", "r", stdin);
    // freopen("ariprog.out", "w", stdout);
    //看了别人用人用sort做
    //上升序列？
    cin >> N;
    cin >> maxpq;
    int q; //常优
    for (int p = 0; p <= maxpq; p++)
    {
        for (q = 0; q <= maxpq; q++)
        {
            bisquares[pointer] = p * p + q * q;
            tong[bisquares[pointer]] = 1;
            pointer++;
        }
    }
    // int maxnum=bisquares[maxpq*maxpq*2];
    long long current;
    int count;
    int ifans=0;
    int a;//移到外面来之后多过了一个点
    int b;
    int maxppqq=maxpq * maxpq+1;//常熟
    int maxppqq2=maxppqq*2;//常熟
    int j;
    int maxdiffer=0;
    int nb_1;
    // sort(bisquares,bisquares+pointer-1);
    //for(int i=1;i<pointer;i++)
    //{
    //    if(bisquares[i]-bisquares[i-1]>maxdiffer) maxdiffer=bisquares[i]-bisquares[i-1];
    //}
    for (b = 1; b < (maxppqq*2)/(N-2); b++)//优化maxppqq为maxdiffer?不行，可以跨越的  这里可以N-2,智商刚才和下面的一起修改了，瞬间快了好多，最后的结束没有了
    {
        nb_1=b*(N-1);//这个放在外面最后一个点过了
        for (a = 0; a < maxppqq; a++)//直接用整除取余数可以吗  一倍就够了，很快了
        {
            // if(a+b*(N-1)>maxppqq2*2) continue;//改成N-1就可以AC了，但是是有两个点超时
            if(a+nb_1>maxppqq2) break;//改成N-1就可以AC了，但是是有两个点超时

            // a=bisquares[j];
            //如果是先a可以jianzhi?
            // if(tong[a]!=1) continue;
            //https://www.luogu.com.cn/problemnew/solution/P1214?page=3
            //可以直接扫描数组 bisquares
            current = a - b;
            count=0;
            while (1)
            {
                // cout<<tong[current]<<endl<<endl;
                //这样一个个找太慢了？
                current += b;
                if (tong[current] != 1)
                    break;
            
                if (count >= N-1)
                {
                    // cout << a << " " << b << "\n";
                    printf("%d %d\n",a,b);
                    ifans=1;
                    break;
                }
                if (current >= maxppqq2)//上面已经改了这里就不用*2了  修改了这里之后最后一个点就从1.2变成1.1了
                    break;

                count++;
            }
        }
    }
    if(ifans==0) cout<<"NONE"<<endl;
    return 0;
}
