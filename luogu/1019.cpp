#include <iostream>
#include <string>
#include <map>
using namespace std;

int n;
string set[25];
// int map[25][25]; //记录关系 不需要？每一次直接遍历
// int mem[25];     //记忆化搜索
map<string, int> mem;
char myhead;

int lenafterputtogether(string a,string b)
{

}

int dfs(string word) //传入上一个单词，返回最长龙，如果有记忆直接返回(记忆只需要一维数组？)
{

}

    int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> set[i];
    }
    cin >> myhead;
    // for (int i = 0; i < 25; i++)
    // {
    //     mem[i]=0;
    //     for (int j = 0; j < 25; j++)
    //     {
    //         map[i][j];
    //     }
    // }

    return 0;
}