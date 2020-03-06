/*
ID: wguo6352
TASK: holstein
LANG: C++14                 
*/

#include <iostream>
#include <stack>
#include <vector>
#include <set>
using namespace std;

int v;
int vlist[30];
int g;
int glist[30][30];

struct current
{
    int s[30]; //表示每一种维他命的数量
    current()
    {
        // int index;
        for (auto &i : s)
        {
            i *= 0; //可行
            // cout<<s[index]<<endl;
            // index++;
        }
    }
    vector<int> ans;
    set<int> used;
};

int thisg; //迭代加深，同时满足最小和字典序（？）但是迭代加深的不是深度而是数量？
//迭代加深会出现的问题还有之前想到的，如果是后面的数单个怎么办
void dfs(int a, current b, int count)
{

    // for(int _=0;_<g;_++)
    // {
    //     b.s[_]+=glist[a][_];
    // }
    if (a >= v)
        return;
    // cout<<a<<" ";
    bool ifpass = true;
    for (int _ = 0; _ < v; _++) //这里用g下面用vlist?
    {
        if (b.s[_] < vlist[_]) //>=写成了小于？
        {
            ifpass = false;
            break;
        }
    }
    if (ifpass)
    {
        cout << count << " ";
        // cout<<b.ans[1]<<endl;
        // for(auto __:b.ans) cout<<__+1<<" ";//骑完车眼睛超级累
        // cout<<"\b"<<endl;
        for (int i = 0; i < b.ans.size() - 1; i++)
        {
            cout << b.ans[i] + 1 << " ";
        }
        cout << b.ans[b.ans.size() - 1] + 1 << endl;
        // exit(0); //不能就这样退出，字典序问题，先便利有的？
    }
    if (count > thisg) //由于是先判断，所以是>?还是说要直接后判断？
    {
        // cout<<count<<" "<<a<<endl;
        return;
    }
    // for (int _ = 0; _ < v; _++)
    // {
    //     tmp.s[_] += glist[a][_];
    // } 不使用有无遍历，使用每一次遍历下一个
    // tmp.ans.push_back(a);
    // dfs(a + 1, tmp, count + 1);
    // // tmp.ans.pop_back();
    // dfs(a + 1, b, count); //这里用tmp会出0
    for (int k = 0; k < g; k++)
    {
        // current tmp = b;//复制过来会重置吗？
        // tmp.s=b.s;
        // tmp.used=b.used;
        // tmp.ans=b.ans;
        if (tmp.used.count(k) == 0)
        {
            tmp.used.insert(k);//分清楚内容和下biao
            for (int _ = 0; _ < v; _++)
            {
                tmp.s[_] += glist[a][_];
            }
            dfs(a+1,tmp,count+1);
        }
    }
}

int main(void)
{
    freopen("holstein.in", "r", stdin);
    // freopen("holstein.out", "w", stdout);
    cin >> v;
    for (int i = 0; i < v; i++)
    {
        cin >> vlist[i];
    }
    cin >> g;
    for (int i = 0; i < g; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cin >> glist[i][j];
        }
    }

    for (thisg = 1; thisg <= g; thisg++) //<=g
    {
        current a;
        dfs(0, a, 0);
    }

    return 0;
}
