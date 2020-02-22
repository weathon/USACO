#include <iostream>
#include <fstream>
using namespace std;

int N;
int X[100005];
int Y[100005];
long long ans;

void solve(int pointid)
{
    for (int i = 0; i < N; i++)
    {
        //遍历X
        if (Y[i] != Y[pointid])
            continue;
        for (int j = 0; j < N; j++)
        {
            // 遍历Y
            if (i == j)
                continue;
            if (X[j] != X[pointid])
                continue;
            ans+=abs(X[i]-X[pointid])*abs(Y[j]-Y[pointid]);
            ans=ans%1000000007;//太紧张噪音了
        }
    }
}

int main()
{
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i] >> Y[i];
    }
    for (int i = 0; i < N; i++)
        solve(i);
    cout << ans << endl;
    return 0;
}