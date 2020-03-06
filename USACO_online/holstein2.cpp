/*
ID: wguo6352
TASK: holstein
LANG: C++14                 
*/

#include <iostream>
#include <stack>
#include <vector>
#include <set>
#include <string>
using namespace std;

int v;
int vlist[30];
int g;
int glist[30][30];
int status[30];
// int ans[10000];
vector <int> ans;
// struct ans
// {
    // string mylist;
//     int howdeep;
// };

// ans anses[100000];
vector <int> finalans;
int nowg;

bool myifdictbetter(vector <int> a, vector <int> b)
{
    //可以直接返回来测试
    //为什么说不能作为函数？
    for(int i=0;i<a.size();i++)
    {
        //js感觉？
        //非递归实现
        if(a[i]==b[i]) continue;
        else if(a[i]>b[i]) return true;
        else return false;
    }
}
void dfs(int, int);

int main(void)
{
    // cout<<("123">"12")<<endl; //output 1
    // if("123"<"12") cout<<"111";
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

    // for (nowg = 1; nowg <= g; nowg++)
    dfs(0, 0);//这里c的0真的就是什么都没选，不用fix

    return 0;
}

void dfs(int d, int c)
{
    //d 深度 c数量
    if (d > g)
        return; //**
    bool ifans = true;
    for (int i = 0; i < g; i++)
    {
        if (status[i] < vlist[i])
        {
            ifans = false;
            break;
        }
    }
    if (ifans)
    {
        // cout << c << endl;
        // for(int i:ans) cout<<i+1<<" ";
        // cout<<endl; 
        //不用储存同统一比较，直接此处比较
        if(finalans.size()==0 or (finalans.size()!=0 and finalans.size()>ans.size()))
        {
            finalans=ans;
        }
        else if(finalans.size() == ans.size())
        {
            if(myifdictbetter(ans,finalans))
            {
                finalans=ans;
            }
        }
        return; //return but not exit
    }
    //选
    for (int i = 0; i < g; i++)
    {
        status[i] += glist[d][i];
    }
    ans.push_back(d);
    dfs(d + 1, c + 1);
    //还原
    for (int i = 0; i < g; i++)
    {
        status[i] -= glist[d][i];
    }
    ans.pop_back();
    dfs(d + 1, c);
    cout<<finalans.size()<<endl;//为什么只有一个输出但是输出很多行？
}