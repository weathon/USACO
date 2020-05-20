#include <bits/stdc++.h>
using namespace std;

int n, m;
int t1, t2;
int A[100005];
vector<int> G[100005];
unordered_set<int> ifwent;
int whereb;


int tmp;
void dfs(int id)
{
    if(A[id]) return;
    A[id]=whereb;

    for (int k : G[id])
        dfs(k);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> t1 >> t2;
        G[t2].push_back(t1);
    }
    for (int i = n; i >0; i--) 
    {
        // ifwent.clear();没有这个就不会超时，我直接建立一个新的？大小其实很接近N，但不是N，弄不了？现在反过来？用true表示走过？反向由于是从大到小可以直接用A记录
        whereb = i;
        // A[i] = i;
        dfs(i);
    }
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    return 0;
}