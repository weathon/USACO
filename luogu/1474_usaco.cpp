#include<iostream>
using namespace std;

int mysystem[30];
long long f[200050];

int main()
{
    for(int i=0;i<20005;i++) f[i]=0;
    int V,N;
    cin>>V>>N;
    for(int i=0;i<V;i++)
    {
        cin>>mysystem[i];
    }
    f[0]=1;
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<=N;j++)
        {
            f[mysystem[i]+j]=f[mysystem[i]+j]+f[j];
        }
    }
    // for(int i=0;i<=N;i++) cout<<f[i]<<" ";
    // cout<<mysystem[N-1]<<endl;
    cout<<f[N]<<endl;
    return 0;
}