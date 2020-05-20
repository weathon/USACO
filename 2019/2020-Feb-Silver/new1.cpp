#include <iostream>
#include <fstream>
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

bool ifsame(int A[200000], int B[200000])
{
    for (int i = 1; i <= N; i++)
        if (A[i] != B[i])
            return false;
    return true;
}

int times;
int main()
{
    freopen("swap.in", "r", stdin);
    // freopen("swap.out", "w", stdout);
    cin >> N >> M >> K;
    for (int i = 1; i <= M; i++)
    {
        cin >> Ls[i] >> Rs[i];
    }
    for (int i = 1; i <= N; i++)
    {
        cows[0][i] = i;
        ref[i] = i;
        map[i] = i;
    }

    for (int i = 1; i <= M; i++)
    {
        L = Ls[i];
        R = Rs[i];
        // cout<<L<<" "<<R<<endl;  2 5 3 7 两次
        for (int j = L; j <= (R + 1 - L) / 2 + L - 1; j++)
        {
            tmp = map[R - j + L];
            map[R - j + L] = map[j];
            map[j] = tmp; //太吵，写错了
        }
    }

    int samema = -1;
    // aatimes = 0;
    int att = 0;
    for (int times = 1; times <= K; times++)
    {
        // cout<<times<<endl;
        if (ifsame(ref, cows[(times-1) % 2]) and times != 1)//漏了-1
        {
            samema = times - 1;
            cout<<samema<<endl;
            break;
        }
        // for (int i = 1; i <= M; i++)
        // {
        // }
        for (int i = 0; i <= N; i++)
        {
            cows[times % 2][i] = cows[(times - 1) % 2][map[i]];
        }
        // times++;
        att = times;
    }
    // times=0;
    // cout<<samema<<endl;
    if (samema != -1)
    {
        for (int times = 1; times <= K % samema; times++)
        {
            // for (int i = 1; i <= N; i++)
            // {
            //     cout << cows[(att) % 2][i] << " ";
            // }
            // cout << endl; 

            for (int i = 0; i <= N; i++)
            {
                cows[times % 2][i] = cows[(times - 1) % 2][map[i]];
            }
            // times++; 重复了
            att = times;
        }
    }
    // cout<<times<<endl;
    for (int i = 1; i <= N; i++)
    {
        cout << cows[(att) % 2][i] << " ";
    }
    cout << endl;
    return 0;
}
