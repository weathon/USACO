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
    int l, r;
    int meetindex = 0;
    int lspeed = 0,
        rspeed = x;
    int sta = 0; //0 means geting faster, 1 means getting slower
                 // If meet, then begin to lower speed until x? YES!
    l = 0;       //change from i
    r = K - 1;
    int mytime = 0; //=0 aa
    // Not leftand right go at the same time but right scan the f array first?
    while (1) //not for
    {
        if (l >= K - 1) //not l>=x, but l>=K  name, always
            // cout << mytime << endl;
            return mytime;
        // l=0;//change from i
        // r=K-i-1;
        if (l >= r)
        {
            // meetindex=r;
            sta = 1;
        }
        if(lspeed<x) lspeed++;
        if(lspeed>x)
        {
            if((((lspeed+x)*(lspeed-x))/2)>(K-l)){
                lspeed--;
            }
            if((((lspeed+x)*(lspeed-x))/2)<(K-l)){
                lspeed++;
            }
        }
        l+=lspeed;
        // if (sta == 0)
        // {
        //     lspeed++;
        //     rspeed++;
        //     l += lspeed;
        //     r -= rspeed;
        //     findexset[indexsetfree] = r;
        //     indexsetfree++;
        //     // for(int heng=r+rspeed;heng>r;heng--) f[heng]=rspeed-1;//lspeed and r
        // }
        // else if (sta == 1)
        // {
        //     // if (lspeed > x)
        //     // {
        //     //     lspeed--;
        //     //     l += lspeed;
        //     // }
        //     // else
        //     // {
        //     //     l += lspeed;
        //     // }
        //     // if(lspeed>f[l]) lspeed--;
        //     // else if(lspeed<f[l]) lspeed++; //works after I add this
        //     // overspeed
        //     if (findexset[lspeed - x] < l) //location<r
        //     {
        //         if(lspeed>x) lspeed--;
        //     }
        //     if (findexset[lspeed - x] > l) //location<r
        //     {
        //         lspeed++;
        //     }
        //     l += lspeed;
        //     // cout << lspeed << endl;
        mytime++;
        }
        
    }
    // return mytime;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //https://usaco.cs.clemson.edu/index.php?page=instructions
    // 5/0;
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