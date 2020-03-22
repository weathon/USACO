#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>
#include <cmath>
#include <math.h>
#include <fstream>
#include <sstream>
#include <cstring>
using namespace std;

int n, m;
int t1, t2;
int A[100005];
vector<int> G[100005];
// char ifwent[100005];
unordered_set <int> ifwent;
int whereb;
// vector <int> changedifwent;//想起游泳考试    sdefedjnhu

int mymax(int a,int b)
{
    if(a>=b) return a;
    return b;
}

// int k;

void dfs(int id)
{
    if(ifwent.count(id)!=0) return;
    ifwent.insert(id);
    // changedifwent.push_back(id);
    A[whereb]=mymax(A[whereb],id);
    for(int k:G[id]) dfs(k);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin>>t1>>t2;
        G[t1].push_back(t2);
        // G[t2].push_back(t1); 有向图
    }
    for(int i=1;i<=n;i++)//漏了=
    {
        // memset(ifwent,false,n+1);//+1 很好时间，类型？ 用set也可以，想到有slear
        // for(auto j:changedifwent) ifwent[j]=false;
        // changedifwent.clear();
        ifwent.clear();
        whereb=i;
        A[i]=i;
        dfs(i);
    }
    for(int i=1;i<=n;i++) cout<<A[i]<<" ";
    return 0;
}