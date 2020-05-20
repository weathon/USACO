#include<bits/stdc++.h>     //万能头文件。
using namespace std;
int a[1000],n;                       //n用来输入。a[]在当前深搜里面用来记录当前数字。
bool pd(int x){
    int k=sqrt(x);
    if(x==1)return 0;
    else if(x==2||x==3)return 1;
    else for(int i=2;i<=k;i++)
    if((x%i)==0) return 0;
    return 1;
}                                         //判断素数。
void dfs(int step){               //表示step搜到第几位数字。
    if(step==n){
        cout<<a[step]<<endl;
        return ;
}                                         //如果搜到了第n位数的话那么就输出。并且返回。 
      for(int i=1;i<=9;i++)     //枚举每一位数上的数字。
       if(pd(10*a[step]+i)){
           a[step+1]=10*a[step]+i;
           dfs(step+1);             //按照题意来深搜模拟。
        }
   } 
int main(){
    cin>>n;
    dfs(0);                            //我们从第零位数开始搜。 
    return 0;
}       