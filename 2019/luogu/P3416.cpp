#include <iostream>
#include <unordered_set>
#include <queue>
#include <vector>
using namespace std;

int X[300];
int Y[300];
int P[300];
int N;
int ans=0;

bool ifwent[300];
vector<int> C[300]; //C[i]=j means i -> j

int count=0;

void dfs(int id)
{
    if(ifwent[id]==1) return;
    ifwent[id]=1;
    count++;
    if(count>ans) ans=count;
    for(auto i:C[id])
    {
        dfs(i);
    }
    // count--; 不用减去？最后归零，不是路径是统计
}

int main(void)
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i] >> Y[i] >> P[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (
                ((X[i] - X[j]) * (X[i] - X[j]) + (Y[i] - Y[j]) * (Y[i] - Y[j])) <= P[i] * P[i])
            {
                C[i].push_back(j);
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int i=0;i<300;i++) ifwent[i]=0;
        count=0;
        dfs(i);
    }
    cout<<ans<<endl;
    return 0;
}