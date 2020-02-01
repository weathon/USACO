#include <iostream>
#include <fstream>
using namespace std;

int K, N;
int X[1100];
// short f[1000000000]; //Too big No array needed, just check when meet? Not location meet, but speed "meet"(At the same), then record the index
int x;
short findexset[30000];
int indexsetfree = 0;

int subslove()
{
    int myans=0;
    //k米，x是终点限速
    int l,r;
    int ls,rs;
    l=0;
    r=k;//不用减一，因为开始的0是因为在起跑线外
    ls=0;
    rs=x;
    while(1){
        
    }
    return myans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("race.in", "r", stdin);
    // freopen("race.out", "w", stdout);
    cin >> K >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }
    for (int subproblem = 0; subproblem < N; subproblem++)
    {
        x = X[subproblem];
        cout << subslove() << endl;
    }
    return 0;
}