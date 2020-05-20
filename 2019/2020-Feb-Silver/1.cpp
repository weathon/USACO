#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int N, M, K;
int Ls[200];
int Rs[200];
int cows[3][200000];
int ref[200000];
int L, R;
int tmp;
// int ansmemory[]
//回来的路上突然想到 因为每一次M都是一样的，先扫描一次变为指定函数
int map[200000];

bool ifsame(int a[200], int b[200])
{
    for (int i = 1; i <= N; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

// int times;
int main()
{
    freopen("swap.in", "r", stdin);
    // freopen("swap.out", "w", stdout);
    // ios_base::sync_with_stdio(false); cin.tie(0);  //加上这一行答案就不正确了
    cin >> N >> M >> K;
    for (int i = 1; i <= M; i++)
    {
        // cin >> Ls[i] >> Rs[i];//读入数据卡住了？
        scanf("%d%d", &Ls[i], &Rs[i]);
    }
    // cout<<1;//<<endl;//读入数据卡住了？直接return就不会,加上endl就好？
    for (int i = 1; i <= N; i++)
    {
        cows[0][i] = i;
        map[i] = i;
    }
    int j;
    for (int i = 1; i <= M; i++)
    {
        for (j = Ls[i]; j <= (Rs[i] + 1 - Ls[i]) / 2 + Ls[i] - 1; j++)
        {
            swap(map[j], map[Rs[i] - j + Ls[i]]);  //也不行，来回交换了？ 检测来回交换来优化？太累了不想写
        }
    }
    //找到是否回到原位置只需要判断一个数？ 之前一直感觉说我这个检查也是到一半就结束，但是忘记了我这个在改写整个数据，只要追踪一个就好了
    // int samema = -1;
    // aatimes = 0;
    // int att=0;

    int i;
    for (int times = 1; times <= K%(M*K); times++) //tring 2m 2k mk
    {
        if(ifsame(cow,backup)) break;
        for (i = 1; i <= N; i++)
        {
            cows[times % 2][i] = cows[(times - 1) % 2][map[i]];
        }
    }
    // times=0;
    // if (samema != -1)
    // {
    //     for (int times = 1; times <= K % samema; times++)
    //     {
    //         for (int i = 0; i <= N; i++)
    //         {
    //             cows[times % 2][i] = cows[(times - 1) % 2][map[i]];
    //         }
    //         times++;
    //         att=times;
    //     }
    // }
    // cout<<times<<endl;
    for (i = 1; i <= N; i++)
    {
        cout << cows[(K % (M * K)) % 2][i] << endl;
        // printf("%d\n", cows[(K % (M * K)) % 2][i]);
    }
    return 0;
}
