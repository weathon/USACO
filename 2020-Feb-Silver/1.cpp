#include <iostream>
#include <fstream>
using namespace std;

int N, M, K;
int Ls[200];
int Rs[200];
int cows[200000];
int ref[200000];
int L, R;
int tmp;

bool ifsame(int A[200], int B[200])
{
    for (int i = 1; i <= N; i++)
        if (A[i] != B[i])
            return false;
    return true;
}

int main()
{
    freopen("swap.in", "r", stdin);
    freopen("swap.out", "w", stdout);
    cin >> N >> M >> K;
    for (int i = 1; i <= M; i++)
    {
        cin >> Ls[i] >> Rs[i];
    }
    for (int i = 1; i <= N; i++)
    {
        cows[i] = i;
        ref[i]=i;
    }
    int samema = -1;
    for (int times = 1; times <= K; times++)
    {
        if(ifsame(ref,cows) and times!=1){
            samema=times-1;
        }
        for (int i = 1; i <= M; i++)
        {
            L = Ls[i];
            R = Rs[i];
            // cout<<L<<" "<<R<<endl;  2 5 3 7 两次
            for (int j = L; j <= (R + 1 - L) / 2 + L - 1; j++)
            {
                //不能用之前的代码
                // cout<<cows[R-j+L]<<" "<<cows[j]<<endl;  样例输出 5 2\n 2 5
                // cout<<j<<" "<<R-j+L<<endl;  //两个2 5
                tmp = cows[R - j + L];
                cows[R - j + L] = cows[j];
                cows[j] = tmp; //太吵，写错了
            }

            // for (int i = 1; i <= N; i++)
            // {
            //     cout << cows[i] << endl;
            // }
            // cout << endl;
            // cout<<endl;
        }
    }
    for (int i = 1; i <= N; i++)
    {
        cout << cows[i] << endl;
    }
    return 0;
}
