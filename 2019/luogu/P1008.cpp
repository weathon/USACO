#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;
#define ans myans
#define unordered_set set

unordered_set<int> used;
int myans[10];
// int ans[10];

void dfs(int deepth)
{
    if (deepth == 9)
    {
        // for(auto o:myans) cout<<o<<" ";
        // cout<<endl;

        if ((ans[0] * 100 + ans[1] * 10 + ans[2]) * 6 == (ans[3] * 100 + ans[4] * 10 + ans[5]) * 3 and (ans[3] * 100 + ans[4] * 10 + ans[5]) * 3 == (ans[6] * 100 + ans[7] * 10 + ans[8])*2)
        {
            cout << (ans[0] * 100 + ans[1] * 10 + ans[2]) << " " << (ans[3] * 100 + ans[4] * 10 + ans[5]) << " " << (ans[6] * 100 + ans[7] * 10 + ans[8]) << endl;
        }
        return;
    }

    for (int i = 1; i <= 9; i++)
    {
        // cout<<used.count(i)<<endl;
        // for(auto II:used) cout<<II<<" "; cout<<endl;
        if (used.count(i) == 0) //为什么加上这一个就没有答案输出了，其实可以直接枚举第一个数字
        {
            used.insert(i);
            myans[deepth] = i;
            dfs(deepth + 1);
            used.erase(i);
        }
    }
}

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        used.insert(i);
        myans[0] = i;
        dfs(1);
        used.erase(i);
    }
    return 0;
}