#include <iostream>
#include <fstream>
using namespace std;

int N, K, A1, A2, B1, B2;

int numlist[200];
int tmplist[200]; //不直接删除，而是标记？
//有机会过

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
        // int tmplist[200]; //不直接删除，而是标记
        for (int _ = 0; _ < 200; _++)
            tmplist[_] = -1;
        for (int a = A1; a <= A2; a++)
        {
            // tmplist[a] = numlist[A1 - a + 1];
            tmplist[a-1] = numlist[A2 - a]; //2 but not 1? bujianbujian
        }
        for (int a = A1; a <= A2; a++)
        {
            numlist[a] = tmplist[a-1]; //还是下标01问题  早解决tmp下biaojiuhao;
        }
        /////////////////////////////
        for (int _ = 0; _ < 200; _++)
            tmplist[_] = -1;

        for (int b = B1; b <= B2; b++) //格式化快捷键不好用 喝太多水
        {
            tmplist[b-1] = numlist[B2 - b];
        }
        for (int b = B1; b <= B2; b++)
        {
            numlist[b] = tmplist[b-1]; //-1, not +1?  不是numlistjian,ershi bi ji caogao
        }
    } //分开都没问题，合到一起就不行了？ 局部？
    for (int i = 1; i <= N; i++)
    {
        cout << numlist[i] << endl; //恩典 喝太多水要上厕所 咖啡，大便
    }
    return 0;
}