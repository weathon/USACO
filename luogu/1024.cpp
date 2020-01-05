#include<iostream>
using namespace std;

int oo=9223302036854775800;

//可以用公式吗？或者二分？ 或者暴力？
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    // a*x*x*x+b*x*x+c*x+d=0
    long long thistime;
    int minnum_x;
    int x=-100;
    long long lasttime=a*x*x*x+b*x*x+c*x+d;
    int count=0;
    for(int i=-99;i<=100;i++)
    {
           thistime=a*x*x*x+b*x*x+c*x+d;
           if(thistime==0)
           {
               
           }
    }
    return 0;
}