#include<iostream>
using namespace std;

int data[12][22];
int main(){
    int count=0;
    ios_base::sync_with_stdio(false); cin.tie(0);
    // From ios_base::sync_with_stdio(false); cin.tie(0) make io faster
    freopen("gymnastics.in","r",stdin);
    freopen("gymnastics.out","w",stdout);
    // The two line up here is from https://www.cnblogs.com/hjslovewcl/archive/2011/01/10/2314356.html
    int K,N;
    cin>>K>>N;
    for(int i=0;i<K;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>data[i][j];
        }
    }   
    int tong[22];
    for(int i=0;i<22;i++) tong[i]=0;

    for(int i=0;i<N;i++)
    {
        for(int i=0;i<22;i++) tong[i]=0;//每次都要清空
        int now_num=data[0][i];
        for(int j=0;j<K;j++)
        {
            int shaobing=0;
            for(int k=0;k<N;k++)
            {
                if(shaobing)
                {
                    // tong[k]=1; 长犯错误
                    // cout<<"1:"<<data[j][k]<<endl;
                    tong[data[j][k]]+=1;
                }
                else{
                    tong[data[j][k]]=-10000000; //最后一次无法擦去
                }
                if(data[j][k]==now_num){
                    shaobing=1;//c++中不是所有数字都是真
                }
                //顺序要对
            }
        }
        // cout<<tong<<endl;
        // cout<<"--------tong--------"<<endl;
        // for(int i=0;i<=4;i++) cout<<tong[i]<<",";
        // cout<<endl;
        for(int i=0;i<22;i++) if(tong[i]>0) count+=1;//tong[i];
        // cout<<count<<endl;
    }
    cout<<count<<endl;
}   