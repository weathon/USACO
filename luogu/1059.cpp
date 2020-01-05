#include<iostream>
using namespace std;

int inp;
int tong[1050];

int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>inp;
        tong[inp]=1;
    }
    int count=0;
    int ans[105];
    int myfree=0;
    for(int i=0;i<1050;i++)
        if(tong[i]==1)
        {
            count++;
            ans[myfree]=i;
            myfree++;
        }
    cout<<count<<endl;
    for(int i=0;i<myfree;i++) cout<<ans[i]<<" ";
    return 0;
}