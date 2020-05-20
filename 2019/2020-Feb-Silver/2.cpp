
#include <iostream>
#include <fstream>
using namespace std;

int N;
int X[100005];
int Y[100005];
long long ans;
int i, j;
inline void solve(int pointid)
{
    for (i = 0; i < N; i++)
    {
        //遍历X
        if (Y[i] != Y[pointid])
            continue;
        for ( j = 0; j < N; j++)
        {
            if (X[j] != X[pointid])
                continue;
            // 遍历Y
            if (i == j)
                continue;

            ans += abs(X[i] - X[pointid]) * abs(Y[j] - Y[pointid]);
            if (ans >= 1000000007)
                ans = ans % 1000000007;
        }
    }
}

int main()
{
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> X[i] >> Y[i];
    }
    for (int _ = 0; _ < N; _++)
        solve(_);
    cout << ans << endl;
    return 0;
}