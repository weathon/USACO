#include <iostream>
#include <string>
#include <map>
using namespace std;

int n;
string set[50];
int f[50];
// int map[25][25]; //记录关系 不需要？每一次直接遍历
// int mem[25];     //记忆化搜索
// map<string, int> myindex;//为了保证有序，只是用于记录set(f)的index
char myhead;

//刚才突然想到如何弄最多用两次，拼接字符串，只能往后走
//那么直接DP不行吗？无后效性
//类似上升序列？

//看到有人贪心，重叠最少的，不可行，有后效性

int overlap(string a,string b)//如果有重叠返回长度，没有的话返回-1
{
    // int ans;
    // int maxans=-1;
    //又眼角辣
    //固定a，把b来移动，用重叠个数检测是否包含
    // 不用移动那么麻烦，真的是乱了，直接比较，只是之前是镜像比较现在是直接比较
    // 不行，这是特殊情况，还是得一个一个比
    // char tmp[200];//不知道单词字母个数
    int count=0;
    for(int i=0;i<min(a.length(),b.length());i++)
    {
        if(a[a.length()-i-1]==b[b.length()-i-1])
        {
            count++;
        }
        else{
            break;
        }
    }
    if(count==a.length() or count==b.length())//每一次都.len可以优化
    {
        return -1;
    }
    else if(count ==0)
    {
        return -1;
    }
    else return count;

}


int main()
{
    cin >> n;
    string tmp; //放在外面优化速度
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        set[i] = set[i + n] = tmp;
        // myindex[tmp]=i;
    }
    cin >> myhead;
    cout<<overlap(set[0],set[1])<<endl;
    f[n*2-1]=set[n*2-1].length();
    // for(int i=2*n-1;i>=0;i--)//跨到第一区也没问题，毕竟后来会覆盖
    // {
    //     //以i结尾的龙

    //     for(int j=i-1;j>=0;j--)//可不可以接自己？
    //     {
    //         //注意i是已知的，是往前面写，为了保证不会重复要改变顺序？不是数字！！
    //     }
    // }
    return 0;
}