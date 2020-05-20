/*
ID: wguo6352
TASK: wormhole
LANG: C++14                 
*/

// NO COW ANYMORE!!!
// 我喜欢Meredith
// https://www.youtube.com/watch?v=KR4iY-EfEs4
// kan jiu ma ban shang de tong xue you "ge song" gong chan dang

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

struct mystack
{
    int list[30];
    int pointer = 0;
    void pop()
    {
        pointer--;
        // return list[pointer];
    }
    void push(int item)
    {
        list[pointer] = item;
        pointer++;
    }
    bool ifin(int item)
    {
        for (int i = 0; i < pointer; i++)
        {
            if (item == list[i])
                return true;
        }
        return false;
    }
};

int N;
struct xy
{
    int x, y;
};

struct mypair
{
    int a, b;
};

struct mystack_for_pair
{
    mypair list[30];
    int pointer = 0;
    void pop()
    {
        pointer--;
        // return list[pointer];
    }
    void push(mypair item)
    {
        list[pointer] = item;
        pointer++;
    }
    bool ifin(mypair item)
    {
        for (int i = 0; i < pointer; i++)
        {
            if (item.a == list[i].a and item.b == list[i].b)
                return true;
        }
        return false;
    }
};

xy holes[30];
mystack used;
int whereistarted;
mystack_for_pair mystack_for_pair_o;

bool checkloop(int id, int firsttime) //看到luogu说还要判断方向?
{
    cout << id << endl; //也没有到这里
    //这里用并查集可以加快速速度
    if (id == whereistarted and firsttime == 0) //直接这样？第一次就返回
    {
        // cout << endl;
        return true;
    }
    for (int j = id+1; j < N; j++) //防止重复， 之前的放发是扫描坐标，所以这样，现在不用了
    {
        //相同的y坐标
        if (holes[id].y == holes[j].y and holes[id].x != holes[j].x)
        {
            for (int __ = 0; __ < N / 2; __++)
            {
                // cout<<mystack_for_pair_o.list[__].a<<endl;  //根本没有到这里
                if (mystack_for_pair_o.list[__].a == j)
                    return checkloop(mystack_for_pair_o.list[__].b, 0); //不因该是j，而是要查找pair}
                else if (mystack_for_pair_o.list[__].b == j)
                    return checkloop(mystack_for_pair_o.list[__].a, 0);
            }
        }
        return false;
    }
}
int cmycount = 0;

void dfs(int depth)
{
    // for (int i = 0; i < N; i++) //便利每一个节点
    // {
    if (depth >= N) //不是> 反了？  是>=，因为是>是used全完了
    {
        for (int i = 0; i < N; i++) //遍历每一个节点
        {
            whereistarted = i;
            // cout << whereistarted << endl; //All 0 because the return
            if (checkloop(i, 1))
            {
                cmycount++;
            }
            // return; not here
        }
        return;
    }
    // }
    for (int first1 = 0; first1 < N; first1++)
    {
        if (not used.ifin(first1))
        {
            used.push(first1);

            for (int first2 = 0; first2 < N; first2++)
            {
                if (not used.ifin(first2))
                {
                    used.push(first2);
                    mypair firstpair;
                    firstpair.a = first1;
                    firstpair.b = first2;
                    mystack_for_pair_o.push(firstpair);
                    dfs(depth + 2);
                    used.pop();
                    mystack_for_pair_o.pop();
                }
            }
            used.pop();
        }
    }
}

int main(void)
{
    freopen("wormhole.in", "r", stdin);
    // freopen("wormhole.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> holes[i].x >> holes[i].y;
    }
    dfs(0);
    cout << cmycount/N << endl;
    return 0;
}

//longest code I've write