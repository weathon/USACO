#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;

// Saw by solution, enumerate each k, than use LIS and LDS

int N;
int data[1000100];

int LIS(int l,int r)
{
    if(l==r) return 1;
    int f[1000100];//Forget here
    for(int i=0;i<1000100;i++) f[i]=0;
    
    for(int i=l;i<=r;i++)
    {
        f[i]=1;
        for(int j=l;j<i;j++)
        {
            if(data[j]<data[i])// and f[j]>f[i])
            {
                f[i]=max(f[j]+1,f[i]);
            }
        }
    }
    int imax=0;
    for(int i=0;i<=N+1;i++) if(f[i]>imax) imax=f[i];
    return imax;
}


int LDS(int l,int r)
{
    if(l==r) return 1;
    int f[1000100];
    for(int i=0;i<1000100;i++) f[i]=0;
    // f[l]=1;//Not 0 but l?
    for(int i=l;i<=r;i++)
    {
        f[i]=1;
        for(int j=l;j<i;j++)
        {
            if(data[j]>=data[i])// and f[j]>f[i])
            {
                f[i]=max(f[j]+1,f[i]);
            }
        }
    }
    int imax=0;
    for(int i=0;i<=N+1;i++) if(f[i]>imax) imax=f[i];
    return imax;
}
int main()
{
    // freopen("1020.in","r",stdin);
    // cin>>N;
    int myindex=0;
    // for(int i=0;i<N;i++) cin>>data[i];
    while(1)//Stack here
    {
        cin>>data[myindex];
        myindex++;
        if(getchar()=='\n') break; 
    }
    // cout<<"a"<<endl;  No, input is finish but stack here
    // cout<<LIS(0,N);
    // int maxlen=0;
    myindex--;
    cout<<LDS(0,myindex)<<endl<<LIS(0,myindex)<<endl;
    return 0;

}

// change from 1077