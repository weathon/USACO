#include<iostream>
#include<fstream>
using namespace std;

long long tree[100100];

int main()
{
    //It turned out to be a water problem, just get the degree
    //https://www.luogu.com.cn/problemnew/solution/P5197
    //Math
    freopen("planting.in","r",stdin);
    freopen("planting.out","w",stdout);///forget file io, but usaco said stdout get 1. But add files, it works
    int n;
    cin>>n;
    long long mymax;
    for(int i=0;i<n-1;i++)//Why I forget the -1 here but still 70%?
    {
        int a,b;
        cin>>a>>b;
        tree[a]++;
        tree[b]++;
        if(tree[a]>mymax) mymax=tree[a];
        if(tree[b]>mymax) mymax=tree[b];

    }
    cout<<mymax+1<<endl;
    return 0;
}