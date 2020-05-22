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
int tmp;
void flipA()
{
    // cout<<myansA.size()<<"==="<<endl;
    if(myansA.size()==1) return;
    for(int _=0;_<myansA.size()/2;_++)
    {
        tmp=myansA[_];
        myansA[_]=myansA[myansA.size()-_-1];
        //swap要有中间变量
        myansA[myansA.size()-_-1]=tmp;
        // cout<<"==="<<myansA[_]<<myansA[myansA.size()-_-1]<<endl;//根本没有来
    }
}

void flipB()
{
    if(myansB.size()==1) return;
    for(int _=0;_<myansB.size()/2;_++)
    {
        tmp=myansB[_];
        myansB[_]=myansB[myansB.size()-_-1];
        myansB[myansB.size()-_-1]=tmp;
    }
}
//flip只有一个的时候会出问题？
void dfsA(int a)
{
    // cout<<a<<" ";
    myansA.push_back(a);
    if (a == root)
        return;
    dfsA((mytree[a].father));
}

void dfsB(int b)
{
    myansB.push_back(b);
    if (b == root)
        return;
    dfsB(mytree[b].father);
}
//出现错误是否是因为前一个不一定是后一个的child?
int main(void)
{
    freopen("3379.in","r",stdin);
    cin >> N >> M >> S;
    for (int i = 1; i < N; i++)
    {
        cin >> x >> y;
        // if (root == -1)
        // {
        //     root = y;
        // }
        mytree[x].father = y;
        // if (root == x)
        //     root = y;
    }
    // cout<<root<<endl;
    root=S;
    for (int i = 0; i < M; i++)
    {
        cin >> aa >> bb;
        myansA.clear();
        myansB.clear();
        dfsA(aa);
        dfsB(bb);
        flipA();//B的问题
        flipB();//flip引起问题,flip没用？
        myansA.push_back(-1);
        myansB.push_back(-1);
        for(auto __:myansA) cout<<__<<endl;
        cout<<endl;
        for(auto __:myansB) cout<<__<<endl;
        cout<<endl;
        cout<<endl;
        for(int ii=0;ii<=min(myansA.size(),myansB.size());ii++)//<= not < ?
        {
            // cout<<"---"<<myansA[ii]<<endl;
            if(myansA[ii]!=myansB[ii])
            {
                cout<<myansA[ii-1]<<endl;//第一个输出1是因为有一些没有输出
                break;
            }
        }
    }

    return 0;
}
