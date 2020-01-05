#include <iostream>
using namespace std;

struct martix
{                               //写到最后发现拼写错了，不管了，就像HTTP协议一样，将错就错
long long mydata[200][200]; //避免传递参数的麻烦
bool allone=false;
};
long long n;

void multiply(martix &old1, martix old2, martix &mynew) //模拟
{
    if(old1.allone)
    {
        old1.allone=false;
        for(long long i=0;i<n;i++) for(long long j=0;j<n;j++) old1.mydata[i][j]=old2.mydata[i][j];
        return;
    }
    long long count=0;//要初始化？
    for (long long i = 0; i < n; i++)
    {

        // 第一个数组的每一行

        //第二个数组的每一列 ,要两个循环
        for (long long j = 0; j < n; j++)
        {
            long long sum = 0;
            //每一个项目
            for (long long kk = 0; kk < n; kk++) //问题处在这，k这个变量重复了
                sum = (sum+(old1.mydata[i][kk] * old2.mydata[kk][j])) % 1000000007;
                //要单独取余
            // cout << sum << " ";
            // mynew.mydata[count%n][count/n]=sum;
            mynew.mydata[count / n][count % n] = sum; //注意方向
            count++;
        }
    }
}

// 找非递归式的方法了 https://oi-wiki.org/math/quick-pow/ 眼睛累死了

int main()
{
    // freopen("3390.txt","r",stdin);  //  注释掉这一行重来就好了？  复制内容不完整
    long long k;
    cin >> n >> k;
    martix mine;
    for (long long i = 0; i < n; i++)
        for (long long j = 0; j < n; j++)
            cin >>mine.mydata[i][j];
    martix ans;
    // ans.mydata=mine.mydata;
    ans.allone=true;
    for(long long i=0;i<n;i++) for(long long j=0;j<n;j++) ans.mydata[i][j]=mine.mydata[i][j];//copy数组
    // 想办法让一开始数组*ans不变？不是，第一个双数次方不用*2？
    // if(k%2==1) k--;
    // k--;
    while(1)
    {
        if(k==0) break;
        martix tmpans;//防止
        //要用两个数来记录，为单数时不再是*原数而是当前新的 https://oi-wiki.org/math/quick-pow/  递归转循环还是不是很熟练
        if(k%2==1)//单数
        {
            //这种方法是只拆两份，单数只拆1出来，瞬间清醒了, 因为只需要上一次的状态，所以0维
            multiply(ans,mine,tmpans);
            for(long long i=0;i<n;i++) for(long long j=0;j<n;j++) ans.mydata[i][j]=tmpans.mydata[i][j];
            k--;
        }
        // else
        // {
            multiply(mine,mine,tmpans);
            for(long long i=0;i<n;i++) for(long long j=0;j<n;j++) mine.mydata[i][j]=tmpans.mydata[i][j];
            k=k/2;
        // }
        
    }
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<n;j++)
        {
            cout<<ans.mydata[i][j];
            if(j!=n-1) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}