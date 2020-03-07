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
vector<int> ans;
set<int> used; //忘了这个,但是理论上不会有重复的啊，直接全局变量
// struct ans
// {
// string mylist;
//     int howdeep;
// };

// ans anses[100000];
vector<int> finalans;
int nowg;

int totalanssum = 1000000;

bool myifdictbetter(vector<int> a, vector<int> b)
{
    //可以直接返回来测试
    //为什么说不能作为函数？
    for (int i = 0; i < a.size(); i++)
    {
        //js感觉？
        //非递归实现
        if (a[i] == b[i])
            continue;
        else if (a[i] < b[i]) //是要小，之前确实错了
            return true;
        else
            return false;
    } //应该还是比较错了 好晚了
}
void dfs(int, int);
//忽略了一个越少越好，刚好就可以

int gsum[30];

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
        int thisum = 0; //=0
        for (int j = 0; j < v; j++)
        {
            cin >> glist[i][j];
            thisum += glist[i][j];
        }
        gsum[i] = thisum;
    }

    // for (nowg = 1; nowg <= g; nowg++)
    dfs(0, 0); //这里c的0真的就是什么都没选，不用fix

    // for(int i:finalans) cout<<i+1<<" ";
    // cout<<endl;

    cout << finalans.size() << " "; //为什么只有一个输出但是输出很多行？位置错了
    for (int i = 0; i < finalans.size() - 1; i++)
    {
        cout << finalans[i] + 1 << " ";
    }
    cout << finalans[finalans.size() - 1] + 1 << endl; //输出的结果不在list中，-2错了？
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
        int mysum = 0;
        for (auto p : ans)
        {
            mysum += gsum[p];
            // cout << p << " ";
        }
        // cout << " " << d << " " << mysum << " " << totalanssum << endl; //totalsum一直是1000000
        //且所需的饲料剂量最少。
        if (finalans.size() == 0 or (finalans.size() != 0 and finalans.size() > ans.size()))// or mysum < totalanssum)//size优先级别过高/低？

            if (mysum < totalanssum) //这个优先级很难搞 放到上面or里面也可以
            {
                // if (myifdictbetter(ans, finalans)) //注意顺序？
                {
                    finalans = ans;      //只是qianfuzhi?
                    totalanssum = mysum; //加了这里sum变了，但是结果还是没有改变 但是这里没有加判断}
                    //这里也忘记盘段数量 那个优先？这样做的话长度不同无法比较啊
                    // finalans.clear();
                    // for (int i = 0; i < ans.size(); i++)
                    // {
                    //     finalans.push_back(ans[i]);
                    // }
                }
            }
            else if (finalans.size() == ans.size()) //漏掉了小于的情况?
            {
                if (mysum < totalanssum)
                {
                    if (myifdictbetter(ans, finalans))
                    {
                        finalans = ans;
                        totalanssum = mysum;
                        // cout<<totalanssum<<endl;
                        //没进来？ 上面没写
                    }
                }
            }
        return; //return but not exit
    }
    //选
    // used.insert(d);
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
    // used.erase(d);
    ans.pop_back();
    dfs(d + 1, c);
}