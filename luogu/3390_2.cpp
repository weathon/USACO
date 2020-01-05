#include <iostream>
using namespace std;

struct martix
{                               //写到最后发现拼写错了，不管了，就像HTTP协议一样，将错就错
int mydata[200][200]; //避免传递参数的麻烦
};
int n;

void multiply(martix old1, martix old2, martix &mynew) //模拟
{
    int count=0;//要初始化？
    for (int i = 0; i < n; i++)
    {

        // 第一个数组的每一行

        //第二个数组的每一列 ,要两个循环
        for (int j = 0; j < n; j++)
        {
            long long sum = 0;
            //每一个项目
            for (int k = 0; k < n; k++) //问题处在这，k这个变量重复了
                sum += (old1.mydata[i][k] * old2.mydata[k][j]) % 1000000007;
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
    int a;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >>mine.mydata[i][j];
    martix ans;
    while(k>0)
    {
        if(k%2==1)//单数
        {
            //这种方法是只拆两份，单数只拆1出来，瞬间清醒了, 因为只需要上一次的状态，所以0维
            multiply(ans,mine,ans);
            k--;
        }
        else
        {
            multiply(ans,ans,ans);
            k=k/2;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j<<" ";
        }
        cout<<endl;
    }
    return 0;
}