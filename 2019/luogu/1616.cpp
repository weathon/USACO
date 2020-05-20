#include<iostream>
using namespace std;

struct Drug{
    int t,m;
};

int i;
Drug data[10100];
int f[100100];

int main(void)
{
    //init
    for(i=0;i<1010;i++) f[i]=0;
    
    int T,M;
    cin>>T>>M;
    for(i=0;i<M;i++)
    {
        cin>>data[i].t>>data[i].m;
    }

    for(i=0;i<M;i++)
    {

        for(int j=data[i].t;j<=T;j++)
        {
            f[j]=max(f[j],f[j-data[i].t]+data[i].m);//replace掉还是加上？？？  第二个是加上， 没问题，但为什么出来的还是2而不是1？打印出错
            //最终问题：是f[j]=，我写成了f[i]=
        }


        // for(int k=0;k<=T+1;k++)
        // {
        //     cout<<f[k]<<" ";
        // }
        // cout<<endl;
    }

    int mymax=0;
    for(i=0;i<=T+1;i++)
    {
        // cout<<f[i]<<" ";
        if(f[i]>mymax) mymax=f[i];
    }
    cout<<mymax<<endl;
    return 0;
}