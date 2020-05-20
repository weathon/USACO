#include <iostream>
#include <fstream>
using namespace std;

int tong[103];

int main(void)
{
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);
    int N;
    cin >> N;
    // for (int _ = 0; _ < N - 1; _++)
    int a, b;
    while (cin >> a >> b)
    {

        tong[a] = b;
        // tong[b] = a;
    }
    int count = 0;
    int first = -1;
    // for(int i=0;i<103;i++)
    // {
    //     count+=tong[i];
    //     if(tong[i]==1) first=i;
    // }
    // if(count==1)
    // {
    //     cout<<first<<endl;
    // }
    // else
    // {
    //     cout<<-1<<endl;
    // }
    for (int i = 1; i < N; i++)
    {
        int next = tong[i];
        if(next==-1 and first!=-1)
        {
            cout<<-1<<endl;
            exit(0);
        }
        // if (tong[i] == 0)// or tong[i] == -1)  not here, and edit the loop begin with 1, 自己测试的时候拿离散数字，实际上是经凑的
        // {
            // continue;
        // }
        while (1)
        {
            // cout<<next<<endl;
            if (tong[next] == 0 or tong[next] == -1)
            {
                // cout<<"break"<<endl;
                tong[next] = -1;
                break;
            }
            next = tong[next];
        }
    }
    // int count=0;
    // first
    for (int i = 1; i < N; i++)
    {
        cout<<tong[i]<<" ";
        if (tong[i] == -1)
        {
            count++;
            first = i;
        }
    }
    if (count == 1)
        cout << first << endl;
    else
        cout << -1 << endl;
    return 0;
}