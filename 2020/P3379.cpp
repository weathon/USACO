#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int N, M, S;
int x, y;
int aa, bb;

struct mynode
{
    int id;
    int father;
};

mynode mytree[500005];
int root = -1;

vector<int> myansA;
vector<int> myansB;


void dfsA(int a)
{
    // cout<<a<<" ";
    myansA.push_back(a);
    if(a==root) return;
    dfsA((mytree[a].father));
}

void dfsB(int b)
{
    myansB.push_back(b);
    if(b==root) return;
    dfsB(mytree[b].father);
}

int main(void)
{
    cin >> N >> M >> S;
    for (int i = 1; i < N; i++)
    {
        cin >> x >> y;
        if (root == -1)
        {
            root = y;
        }
        mytree[x].father=y;
        if (root == x)
            root = y;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> aa >> bb;
        myansA.clear();
        myansB.clear();
        dfsA(aa);
        dfsB(bb);
    
    }

    return 0;
}
