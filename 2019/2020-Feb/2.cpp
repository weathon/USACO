#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
int N;
char A[2000];
char B[2000];

int main()
{
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    cin>>N;
    getchar();//remove \n or \r
    for(int i=0;i<N;i++) A[i]=getchar();
    getchar();//remove \n or \r
    for(int i=0;i<N;i++) B[i]=getchar();
    getchar();//remove \n or \r
    int lasttime=1;//lasttime 0 means not the same, 1 means the same
    int ans=0;
    for(int i=0;i<N;i++)
    {
        if(A[i]!=B[i])
        {
            lasttime=0;
        }
        else
        {
            if(lasttime==0) ans++;
            lasttime=1;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}