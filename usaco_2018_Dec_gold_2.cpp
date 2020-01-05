#include<iostream>
using namespace std;

int IDtong[1000003];
int n;
int i,j;
int cows[50000][5];

int main(void)
{
    for(i=0;i<1000003;i++) IDtong[i]=0;
    ios_base::sync_with_stdio(false); cin.tie(0);
    // From ios_base::sync_with_stdio(false); cin.tie(0) make io faster
    freopen("cowpatibility.in","r",stdin);
    freopen("cowpatibility.out","w",stdout);
    // The two line up here is from https://www.cnblogs.com/hjslovewcl/archive/2011/01/10/2314356.html
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>cows[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            IDtong[cows[i][j]]+=1;
        }
    }
    int count=0
    for(i=0;i<1000003;i++)
        if(IDtong[i]==1)
            count++;
    
    cout<<count<<endl;

    return 0;
}