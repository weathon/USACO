#include <iostream>
using namespace std;

struct martix
{                               //写到最后发现拼写错了，不管了，就像HTTP协议一样，将错就错
    long long mydata[200][200]; //避免传递参数的麻烦
};
int n;

void multiply(martix old1, martix old2, martix &mynew) //模拟
{
    long long count=0;//要初始化？
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

void dfs(martix old, int power, martix &ret) //需要计算的数组，幂次，返回的数组
{
    if (power == 1)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) //复制数组,其实可以直接当作一次放来算？
            {
                ret.mydata[i][j] = old.mydata[i][j];
                // cout << old.mydata[i][j] << " ";
            }
    }
    else if (power % 2 == 0) //双数
    {
        martix tmpans;
        dfs(old, power / 2, tmpans);   //old传参似乎一直不变？可以优化？不管了
        multiply(tmpans, tmpans, ret); //第二个参数其实不需要？No，后面的单数就要啦，两次传引用
    }
    else if (power % 2 == 1) //单数
    {
        martix tmpans, tmpans2;
        dfs(old, (power - 1) / 2, tmpans);
        multiply(tmpans, tmpans, tmpans2);
        multiply(tmpans2, old, ret);
    }
}

int main()
{
    // freopen("3390.txt","r",stdin);
    // cout<<"aaa";
    long long k;//没想到这个
    cin >> n >> k;
    martix mine;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mine.mydata[i][j];
    martix ans;
    dfs(mine, k, ans);
    // multiply(mine,mine,ans); for debug
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans.mydata[i][j];
            if(j!=n-1)//有坑
            cout<<" ";
        }
        cout << endl;
    }
    return 0;
}
