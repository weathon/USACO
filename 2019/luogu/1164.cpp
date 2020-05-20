//组合？刚好看完江老师的视频

#include<iostream>
using namespace std;

int foodlist[106];
int f[10100];//滚动数组?  用数组标记法的问题？重复？不能只看有没有，一个情况有2后面的也是

int main()
{
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++)
    {
        cin>>foodlist[i];
    }

    f[0]=1;
    for(int i=0;i<N;i++)//还是没习惯从0开始  改了之后后面的等于没改，出来个0
    {
        for(int j=M;j>=0;j--)//由于是01，所以要反向
        {

            if(f[j]>=1)// and (j+foodlist[i])<=M)
            {
                // cout<<i<<" "<<j<<" "<<j+foodlist[i]<<endl;
                f[j+foodlist[i]]+=f[j];//典型的A=B=C(表示两条路而不是等于) A to C 2*2
            }
            // for(int k=0;k<=M;k++) cout<<f[k]<<" "; //i or k
            // cout<<endl;
        }
        
    }
    cout<<f[M]<<endl;
    // for(int i=0;i<=M;i++) cout<<f[i]<<" ";
    return 0;
}