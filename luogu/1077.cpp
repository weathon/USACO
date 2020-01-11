#include<iostream>
using namespace std;

// Saw by solution, enumerate each k, than use LIS and LDS

int N;
int data[105];

int LIS(int l,int r)
{
    if(l==r) return 1;
    int f[105];
    for(int i=0;i<105;i++) f[i]=0;
    
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
    for(int i=0;i<105;i++) if(f[i]>imax) imax=f[i];
    return imax;
}


int LDS(int l,int r)
{
    if(l==r) return 1;
    int f[105];
    for(int i=0;i<105;i++) f[i]=0;
    // f[l]=1;//Not 0 but l?
    for(int i=l;i<=r;i++)
    {
        f[i]=1;
        for(int j=l;j<i;j++)
        {
            if(data[j]>data[i])// and f[j]>f[i])
            {
                f[i]=max(f[j]+1,f[i]);
            }
        }
    }
    int imax=0;
    for(int i=0;i<105;i++) if(f[i]>imax) imax=f[i];
    return imax;
}
int main()
{
    cin>>N;
    for(int i=0;i<N;i++) cin>>data[i];
    // cout<<LIS(0,N);
                int maxlen=0;
                for(int Ti=0;Ti<N;Ti++)//The tallest
                {
                    int t;
                    t=LIS(0,Ti)+LDS(Ti,N-1)-1;//Doesn't need -1?No, see line 36
                    // cout<<LIS(0,Ti)<<" "<<LDS(Ti,N-1)<<endl; 
                    if(t>maxlen) maxlen=t;
                    // cout<<t<<" ";
                }
    cout<<N-maxlen<<endl;
    return 0;

}