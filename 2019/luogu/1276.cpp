#include<iostream>
using namespace std;
int mod,b,e;
int street[10005];//1表示有树，0表示没有,2表示树苗，3表示被拔掉的树苗
int main(void)
{
    int ans1,ans2;
    ans1=0;ans2=0;
    int N,L;
    cin>>L>>N;

    for(int i=0;i<L;i++) street[i]=1;
    for(int i=0;i<N;i++){
        cin>>mod>>b>>e;
        if(mod==0)
        {
            //砍树
            for(int j=b;j<=e;j++){
                if(street[j]==1){
                    street[j]=0;
                }
                else if(street[j]==2)
                {
                    street[j]=0;
                    ans2++;
                }
            }
        }
        else{
            for(int j=b;j<=e;j++){
                if(street[j]==0)
                {
                    street[j]=2;
                }
                // if(street[j]==3){
                //     street[j]=2;
                // }
            }
        }
    }


    for(int i=0;i<=L;i++)
    {
        // if(street[i]==3) ans2++;
        if(street[i]==2) ans1++;
    }
    cout<<ans1<<endl<<ans2;
}