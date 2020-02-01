#include <iostream>
#include <fstream>
using namespace std;

int K, N;
int X[1100];
double mytime = 1000000000000000;//need to be oo https://blog.csdn.net/ACb0y/article/details/5336822
int x;

void dfs(int myspeed, double mysubtime, int mylocation)
{
    // TLE Pruning?
    if(K-mylocation<myspeed-x) return;
    if(((((myspeed+x-1)*(myspeed-x))/2)>(K-mylocation))) return;
    // cout<<myspeed<<" "<<mysubtime<<" "<<mylocation;
    if (myspeed > x and mylocation >= K)
        return;
    else if (mylocation >= K)
    {
        // cout<<myspeed<<" "<<mysubtime<<endl;
        if (mysubtime <= mytime)//forget the "="
            mytime = mysubtime;
        return;
    }
    else if (myspeed == 0)
    {
        // myspeed += 1;
        //forget this
        // dfs(myspeed+1)
        // dfs(myspeed + 1, mysubtime + (1.0 / myspeed), mylocation + myspeed);//No /0 error?
        dfs(myspeed + 1, mysubtime + 1, mylocation + 1);

    }
    else
    {
        dfs(myspeed + 1, mysubtime + 1, mylocation + myspeed+1);
        dfs(myspeed, mysubtime + 1, mylocation + myspeed);
        dfs(myspeed - 1, mysubtime + 1, mylocation + myspeed-1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    //https://usaco.cs.clemson.edu/index.php?page=instructions
    // 5/0;
    freopen("race.in", "r", stdin);
    freopen("race.out", "w", stdout);
    cin >> K >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }
    for (int subproblem = 0; subproblem < N; subproblem++)
    {
        mytime=1000000000000000;//https://blog.csdn.net/ACb0y/article/details/5336822
        x = X[subproblem];
        dfs(0, 0.0, 0);
        cout << mytime << endl;
    }
}