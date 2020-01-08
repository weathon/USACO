#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double Ns[20];
int N;

double f(double x)
{
    double ans=0;//又忘记初始化
    for(int i=0;i<=N;i++)//要有等于，漏了常数项
    {
        ans+=Ns[i]*pow(x,N-i);//差点忘了Ns了
    }
        // cout<<"f of "<<x<<" "<<ans<<endl;
    return ans;
}

void search(double ll,double lr)//一个动点还是两个？ 明白了 ll=left lr=right
{
    if(abs(ll-lr)<0.000001)//答案要求四舍五入保留5位，此处求到6位 快12点了啊啊啊，明天还要上课，头晕
    {
        cout<<fixed<<setprecision(5)<<ll<<endl;
        exit(0);
    }
    double mymid;
    mymid=(ll+lr)/2.0;
    //检测单调方向
    // cout<<mymid<<endl;//目前的方法是往0走？f(x)写错？
    // 提交忘记关调试
    if(f(mymid)>f(mymid+0.000001))//小于要求精度，类似”微积分“？
    {
        //当前点比右边的大 在目标点右侧
        // lr=mymid;//把有边界移动到此处
        search(ll,mymid);
    }
    else{
        search(mymid,lr);
    }
}

int main()
{
    
    double l,r;
    cin>>N>>l>>r;
    for(int i=0;i<=N;i++) cin>>Ns[i];//这里也漏了=
    search(l,r);
    // cout<<f(-0.4)<<endl;
    return 0;
}