#include <iostream>
#include <unordered_set>
using namespace std;

int N;
int f[2000];

int main()
{
    cin >> N;
    int supposesum;//ses
    supposesum=(1+N)*N/2;
    // cout<<supposesum<<endl;
    f[0]=1;
    for(int _=0;_<=N;_++)//++
    {
        for(int i=N-1;i>=0;i--)
        if(f[i]!=0)
        {
            f[f[i]+i]++;
        }
    }
    cout<<f[supposesum]<<endl;

    //骑完车眼睛累
    return 0;
}