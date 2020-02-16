/*
ID: wguo6352
TASK: skidesign
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int N;
int numlist[1500];

int main(void)
{
    freopen("skidesign.in", "r", stdin);
    freopen("skidesign.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> numlist[i];
    }
    sort(numlist, numlist + N);
    int mincost = 100000000;
    int thiscost=0;
    // cout<<numlist[0]<<" "<<numlist[N-1]<<endl;
    // for(int i=0;i<N;i++) cout<<numlist[i]<<endl;
    for (int i = numlist[0]; i < numlist[N-1]; i++)//change to N-1, tu ran keyile
    {
        // cout<<i<<endl;
        thiscost=0;
        for(int j=0;j<N;j++)
        {
            if(numlist[j]<i)
            {
                thiscost+=(i-numlist[j])*(i-numlist[j]);
            }
            else if(numlist[j]>i+17)
            {
                thiscost+=(numlist[j]-i-17)*(numlist[j]-i-17);
            }
        }
        // cout<<thiscost<<endl;
        if(thiscost<mincost) mincost=thiscost;
    }
    cout << mincost << endl;
    return 0;
}