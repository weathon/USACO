#include <fstream>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>
using namespace std;

int N;
int numlist[100100];

struct mynode
{
    int beforeid;
    int num = -100;
    int afterid;
    int L = -1, R = -1;
};

mynode mytree[100100];
int treepointer = 0;
int totalidcounter = 0;
int tmp;
bool iffirst = true;

void insert(int number, int &id)
{
    if (iffirst)
    {
        //第一(零)个点?
        mytree[id].num = number;
        mytree[id].beforeid = totalidcounter;
        totalidcounter++;
        treepointer++;
        iffirst = false;
    }
    else
    {
        if (id == -1)
        {
            id = treepointer;
            mytree[treepointer].num = number;
            mytree[treepointer].L = -1;
            mytree[treepointer].R = -1;
            mytree[id].beforeid = totalidcounter;
            totalidcounter++;
            treepointer++;
            return;
        }
        if (number > mytree[id].num)
            insert(number, mytree[id].R);
        else if (number < mytree[id].num)
            insert(number, mytree[id].L);
    }
}

int afteridcounter = 0;
void dfs(int id)
{
    if (id == -1)
        return;
    dfs(mytree[id].L);
    cout << mytree[id].L<<" "<<mytree[id].R<<"---- " << mytree[id].num << endl;
    mytree[id].afterid = afteridcounter;
    afteridcounter++;
    dfs(mytree[id].R);
}
int maxstep = 0;
int tmp2;
void countmaxstep(int id)
{
    if (id == -1)
        return;
    tmp2 = abs(mytree[id].beforeid - mytree[id].afterid);
    if (tmp2 > maxstep)
        maxstep = tmp2;

    // cout << mytree[id].beforeid << " " << mytree[id].afterid << endl;//这里和上面同时打印会出现交叉？ 

    dfs(mytree[id].L);
    dfs(mytree[id].R);
}
int zero = 0;
int main()
{
    freopen("sort.in", "r", stdin);
    // freopen("sort.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        insert(tmp, zero);
    }

    dfs(0);
    // cout << moo << endl;

    countmaxstep(0); //这个函数有问题？本来就没有输出内容但是调用的话会有递归输出  修改文件名之后什么输出都没有了
    cout << maxstep << endl;
    return 0;
}