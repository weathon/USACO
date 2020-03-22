#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int m, n;
struct mynode
{
    vector<int> connects;
    bool ifwent = false;
};
mynode mygraph[100000];
mynode mygraph2[100000];
int tmp1, tmp2;

void dfs(int id)
{
    cout << id << " ";
    mygraph[id].ifwent = true;
    for (auto i : mygraph[id].connects)
        if (!mygraph[i].ifwent)
            dfs(i);
}

int main()
{
    cin >> m >> n; //m is the num of nodes
    for (int i = 0; i < n; i++)//m,n分不清
    {
        cin >> tmp1 >> tmp2;
        mygraph[tmp1].connects.push_back(tmp2);
        mygraph2[tmp1].connects.push_back(tmp2);

    }
    for (int i = 1; i <= m; i++)//这里忘了需要，dfs可以bfs不行不一定是bfs出了问题，可能是两者不同
    {
        sort(mygraph[i].connects.begin(), mygraph[i].connects.end());
        sort(mygraph2[i].connects.begin(), mygraph2[i].connects.end());

    }
    dfs(1);
    cout << endl;
    queue<int> myq;
    int tmp3;
    myq.push(1);
    while (!myq.empty())
    {
        tmp3 = myq.front();
        myq.pop();
        // if(mygraph2[tmp3].ifwent) continue;//要在这里弄才可以,不然会重复添加，因为有时候添加了但是还没有到，这个是样例刚好出来了

        cout<<tmp3<<" ";
        mygraph2[tmp3].ifwent = true;
        for (int i : mygraph2[tmp3].connects)
            if (!mygraph2[i].ifwent)
                myq.push(i);
    }
    return 0;
}