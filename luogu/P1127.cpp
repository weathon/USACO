#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;

int n;
string mylist[1000];//忘了定义成数组
queue <int> bfs;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>mylist[i];
    sort(mylist,mylist+n);
    
    return 0;
}

