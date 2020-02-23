#include <iostream>
#include <fstream>
#include<vector>
#include <map>
//https://www.cnblogs.com/mr-wid/archive/2013/01/22/2871105.html  https://blog.csdn.net/qq_31918961/article/details/88934815 whole programe
using namespace std;

int N;
int X[100005];
int Y[100005];
// int xhash[3001][10000]; //有负数，要注意处理
map<int, 
int xhashpointer[2001];
int yhash[3001][10000]; //有负数，要注意处理
int yhashpointer[2001];
// vector<int> a;
long long myans;


void solve(int pointid)
{
    int myxxx, myyyy;
    for (int i = 0; i < xhashpointer[X[pointid]]; i++)
    {
        //所有相同的x,空间换时间
        myyyy = xhash[X[pointid]][i];
        for (int j = 0; j < yhashpointer[Y[pointid]]; j++)
        {
            myxxx = yhash[Y[pointid]][j];
            myans += abs(myxxx - X[pointid]) * abs(myyyy - Y[pointid]);
            if(myans>1000000007) myans=myans%1000000007;
        }
    }
}

int main()
{
    // a[100]=0;
    freopen("triangles.in", "r", stdin); //原来根本没有输入文件 困
    freopen("triangles.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i] >> Y[i];
        X[i]+=1001;
        Y[i]+=1001;
        xhash[X[i]][xhashpointer[X[i]]] = Y[i];
        xhashpointer[X[i]]++;
        yhash[Y[i]][yhashpointer[Y[i]]] = X[i];
        yhashpointer[Y[i]]++;
    }
    for (int i = 0; i < N; i++)
        solve(i);
    cout << myans << endl;
    return 0;
}