#include <iostream>
#include <fstream>
using namespace std;

int K, N;
int X[1100];
double mytime = 0.0;

int main()
{
    freopen("race.in", "r", stdin);
    // freopen("race.out", "w", stdout);
    cin >> K >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }
    //The speed can be slow down!!!! So I can run fast at the mid and slow down at the end
    for (int subproblem = 0; subproblem < N; subproblem++)
    {
        int myspeed = 0;
        mytime=0.0;
        for (int i = 0; i < K; i++)
        {
            if (myspeed < X[subproblem]+(K-i))//Incress every second, not every meter
                myspeed++;
            mytime += 1.0 / myspeed;
            cout<<myspeed<<"----";
        }
        cout<<endl;
        cout<<int(mytime+1)<<endl;
    }
    return 0;
}