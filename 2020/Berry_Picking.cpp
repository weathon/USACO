#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
#define rof(a, b) for (int i = b; i > a; i--)
#define FOR(a, b) for (int i = a; i < b; i++)

//ge shi hua hui jia kong ge

int N, K;
int B[1008];
int BB[1008];


bool cmp(int a, int b)
{
    return a > b;
}
int find_max()
{
    int ans = 0;
    FOR(0, N)
    {
        if (B[i] > ans)
            ans = B[i];
    }
    return ans;
}

int main()
{
    freopen("berries.in", "r", stdin);
    // freopen("berries.out","w",stdout);
    cin >> N >> K;
    FOR(0, N)
    cin >> B[i];
    sort(B, B + N, cmp);
    // FOR(0,N) cout<<B[i]<<endl;
    int mymax = find_max();
    // int now = 0;
    int ans = 0;
    // FOR (int i=mymax-1;i>=0;i--)
    // cout<<mymax<<endl; 8
    FOR(1, mymax) //zheli gai cheng 1 jiu hao le?
    {
        // cout<<i<<endl;
        //便利数字
        int tree = 0;
        int tong = 0; //zhuang man de tong shu
        int thiiiimax = i;
        int tmpsum = 0;
        int count = K;
        for(int i=0;i<N;i++)
        {
            BB[i]=B[i];
        }
        // while (tong>=1)
        while (count >= 1) //bu neng yong K?
        {
            if (i < BB[tree])
            {
                BB[tree] -= i;//huan yuan!!!!
                tong++; //++ --
                // yao fang li mian
            }
            else
            { //yao fem qing chu shi yuan lai jiu xiao hai shi zen me yang, xiang qingchu zai xie
                tree++;
                if (i < BB[tree])
                {
                    BB[tree] -= i;
                }
                else
                {
                    tmpsum += BB[tree];
                    // cout<<tmpsum<<endl; //mei jing lai
                }
            }
            count--;
        }
        // cout<<i<<endl;
        cout << i << " " << tong << endl;
        if (tong >= K / 2)
        {
            int thisans = (tong - K / 2) * i + tmpsum;
            if (thisans > ans)
                ans = thisans;
        }
        //From largest to smallest fang bian hen duo
    }
    cout << ans << endl;
    return 0;
}