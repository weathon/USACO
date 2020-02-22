#include <iostream>
#include <fstream>
using namespace std;

int N, K, A1, A2, B1, B2;

int numlist[200];
int tmplista[200]; //不直接删除，而是标记？
//有机会过
int tmplistb[200]; //不直接删除，而是标记？

int main()
{
    // freopen("swap.in", "r", stdin);
    // freopen("swap.out", "w", stdout);
    cin >> N >> K >> A1 >> A2 >> B1 >> B2;
    for (int i = 1; i <= N; i++) //从一开始，有点不习惯win全键盘
    {
        numlist[i] = i;
    }
    for (int j = 0; j < K; j++)
    {
        // cout<<B1;
        for (int a = 1; a <= (A2 - A1) / 2; a++)
        {

            // int tmp;
            // tmp = numlist[A2 - a + 1];
            // numlist[A2 - a + 1] = numlist[a];
            // numlist[a] = tmp;//交换两次了？  这里debug,明明tmp是3，到数组里面变成2?
            // // cout<<numlist[a]<<" "<<tmp<<endl;
            swap(numlist[A2 - a + 1], numlist[a]);
        }

        for (int b = 1; b <= (B2 - B1) / 2; b++) //格式化快捷键不好用 喝太多水
        {
            //     int tmp;
            //     tmp = numlist[B2 - b + 1];//B2还是N?
            // //    cout<<tmp<<" "<<numlist[b]<<" "<<numlist[B2 - b + 1]<<endl;
            //     numlist[B2 - b + 1] = numlist[b];
            //     numlist[b] = tmp;
            //    cout<<tmp<<" "<<numlist[b]<<" "<<numlist[B2 - b + 1]<<endl;
            swap(numlist[B2 - b + 1], numlist[b]);
        }

    } //分开都没问题，合到一起就不行了？ 局部？
    for (int i = 1; i <= N; i++)
    {
        cout << numlist[i] << endl; //恩典 喝太多水要上厕所 咖啡，大便
    }
    return 0;
}