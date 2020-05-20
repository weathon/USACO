#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
int N;
int clocks[3000];
// int can_this_room_be_the_strat_room[3000];
int numans = 0;
int a, b;
struct mynode
{
    int id;
    int connection[3000];
    int pointer = 0;
    void add(int num)
    {
        connection[pointer] = num;
        pointer++;
    }
};
//用上次那个方法，i表示连接房间 虫洞 不只是单个链接
//太吵了，太担心吵了，不敢细想
mynode connections[3000];

// bool solve(int);

int solve(int roomid, int coming)
{
    if (connections[roomid].pointer == 1) //不可以继续往下走了 1,nit 0
    {
        return 12 - clocks[roomid];
    }
    int tmp;
    int tmpsum = 0;
    for (int i = 0; i < connections[roomid].pointer; i++)
    {
        if (i == coming)
            continue;
        tmp = solve(connections[roomid].connection[i], roomid);
        if (tmp == -1)
            return -1;
        else
            tmpsum += tmp;
    }
    if (tmpsum == connections[roomid].pointer) //pointer是多一的
    {
        return connections[roomid].pointer;
    }
    else
    {
        return -1;
    }
}

int main()
{
    freopen("clocktree.in", "r", stdin);
    // freopen("clocktree.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> clocks[i];
    }
    for (int i = 0; i < N - 1; i++)
    {
        scanf("%d%d", &a, &b);
        a--;
        b--;
        // connection[a] = b;
        // connection[b] = a;
        connections[a].add(b);
        connections[b].add(a);
        // cout<<a<<endl<<b;
    }
    for (int i = 0; i < N; i++)
    {
        //开始的节点
        int tttmp = solve(i, -1);
        cout<<tttmp<<endl;
        if (tttmp == connections[i].pointer and tttmp != -1)//回来的路上突然想到
            ;
        numans++;
        // if (solve(i))
        //     numans++;
    }
    cout << numans << endl;
    return 0;
}
