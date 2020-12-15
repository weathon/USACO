#include <iostream>
#include <fstream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N, M, C;
int cows[100005];
int goal;
int check(int n)
{
    // if (n <= 10)
    //     return -1;
    // else
    //     return 1;

    int bus = 1; // zuikaishiyaoyige bus
    int cow = 1;
    int start = cows[0];
    for (int i = 1; i < N; i++)
    {
        if (cows[i] - start <= n) //=tongyitangcaiyoubiyao ran  deng deng n shi sm? shijianjiange
        // yan pi yang  tu ran xiang dao bu shi he shang yige er shi di yi ge ying wei shi qian mian de yaodenghou mian de
        {
            if (cow < C)
            {
                cow++;
            }
            else
            {
                cow = 1;
                bus++;
                start=cows[i];
            }
        }
        else
        {
            cow = 1;
            bus++;
            start=cows[i];
        }
        // printf("bus: %d cow: %d start: %d\n",bus,cow,start);

    }
    // if (cow == C)  //zhe li youpanduan bingqie shang mian <= huishi1
    // {
        // bus++;
    // }
    // cout <<"bus: " << bus << endl;
    // cout<<goal<<endl;  yuan lai shi goal you wen ti
    if (bus <= M) //太大了
    {
        return 1;
    }
    return -1;
}

int main(void)
{
    // bei wu jie le, yi kai shi yi wei cong you wang zuo zhao bian hua de dian shi ji shang bu shi?
    // you bian hua le bu yi ding shi zui hao de?:wq
    // zhe ge da zi hen shuang ixng dian nao de huang geng hsuang:wq
    // mei xing si kan shi ping?
    // wang le shua ya!!!
    // shi ji shang zhuan zhu xie de ye zhi you yi xiao shi?
    // wei sm bian ji zhaung tai shijian fan er shao? bu shi quan bu zai da zi
    freopen("convention.in", "r", stdin);
    freopen("convention.out", "w", stdout);
    cin >> N >> M >> C;
    for (int i = 0; i < N; i++)
    {
        cin >> cows[i];
    }
    sort(cows, cows + N);
    // for(int i=0;i<N;i++)
    // cout<<cows[i]<<" ";
    int l = 0;
    int r = cows[N - 1];
    int mid;
    int lasttime = -1;

    int bus = 1;
    int cow = 1;
    for (int i = 1; i < N; i++) //< not <=
    {
        // cout << cow << " " << bus << endl;
        if (cow < C) //xiao yu cai ke yi jia
        {
            cow++;
        }
        else
        {
            cow = 1; //not 0
            bus++;
        }
    }

    goal = bus;
    // cout << bus << endl; //1?
    while (1)
    {
        mid = (l + r) / 2.0 + 0.5;
        // cout << l << " " << mid << " " << r << " " << endl;
        if (mid == lasttime)
        {
            break;
        }
        if (check(mid) == -1)
        {
            l = mid;
        }
        else if (check(mid) == 1)
        {
            r = mid;
        }
        lasttime = mid;
    }
    cout << mid << endl;
    return 0;
}