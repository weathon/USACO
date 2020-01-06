#include <iostream>
#include <string>
#include <map>
using namespace std;

int n;
string set[50];

struct mine
{
    int len;
    int overlap_len=0;
};
mine f[50];
// int map[25][25]; //记录关系 不需要？每一次直接遍历
// int mem[25];     //记忆化搜索
// map<string, int> myindex;//为了保证有序，只是用于记录set(f)的index
char myhead;

//刚才突然想到如何弄最多用两次，拼接字符串，只能往后走
//那么直接DP不行吗？无后效性
//类似上升序列？

//看到有人贪心，重叠最少的，不可行，有后效性

int overlap(string a, string b,int &rr) //如果有重叠返回长度，没有的话返回-1   调试的时候ab一直能反了   是a不动移动b，所以是a接在b后面
{
    // int ans;
    // int maxans=-1;
    //又眼角辣
    //固定a，把b来移动，用重叠个数检测是否包含
    // 不用移动那么麻烦，真的是乱了，直接比较，只是之前是镜像比较现在是直接比较
    // 不行，这是特殊情况，还是得一个一个比
    // char tmp[200];//不知道单词字母个数
    // string tmp;
    int count = 0;
    for (int i = 0; i < a.length(); i++)
    {
        // cout << i << " ";并不是i=0，1，2，2最后一个2是额外输出，这种问题犯了好多次了
        // tmp = "";
        char tmp[200];//用char乱码，需要初始化？用到的自然覆盖
        for (int j = 0; j <= i; j++)
        {
            tmp[j]=(b[b.length() - (i-j) - 1]);
        }
        bool ooo = true;
        for (int j = 0; j <=1; j++)//数组没有len
        {
            if (tmp[j] != a[j])
            {
                ooo = false;
                break; //?
            }
        }
        if (ooo)//在此处设断点，tmp是空，之前测试成功是因为刚好差1
        {
            count = i+1; //i+1？ //调试发现count总是比i少1,
        }
        // else 此处不可以break，第一次不行后面反而有可能，改采char也是这样，该回去
        //     break;
    }
    rr=count;
    if (count == a.length() or count == b.length()) //每一次都.len可以优化
    {
        return -1;
    }
    else if (count == 0)
    {
        return -1;
    }
    else
        return a.length()+b.length()-count;//不是直接返回count
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
    // cout << overlap(set[0], set[1]) << endl;
    // f[n * 2 - 1] = set[n * 2 - 1].length();
    // 初始状态不是一个就够了
    for(int i=n;i<2*n;i++) f[i].len=set[i].length();
    for(int i=2*n-1;i>=0;i--)//跨到第一区也没问题，毕竟后来会覆盖
    //目前有一个问题就是就算把数组重复了一次，也不能保证每个数都选到了，弄一个变量？
    //也可以再数组里面放组合完成的字符串，但是时空效率都不高.但是后来发现似乎只能这么做.返回count似乎会好一些？
    {
        //以i结尾的龙

        for(int j=i-1;j>=0;j--)//可不可以接自己？
        {
            //注意i是已知的，是往前面写，为了保证不会重复要改变顺序？不是数字！！  要确定是从后往前，否则可能改变路径？
            //目前的写法没有改变j的文字结尾？？
            int len;
            int myoverlap;
            len=overlap(set[i],set[j],myoverlap);//注意是a接在b后面
            
            // overlap=-(len-set[i].length()-set[j].length());//公式待议
            if(len != -1)
            {
                // f[j].overlap_len=overlap;   要确定选取才可以修改
                // int tt=(len+f[i].len-set[i].length());
                int tt=f[i].len+set[j].length()-myoverlap;
                // f[j].len=max(f[j].len,tt);
                if(tt>f[j].len)
                {
                    f[j].len=tt;
                    f[j].overlap_len=myoverlap;//调试发现此项全为0
                }

            }
        }
    }
    
    int maxans=0;
    for(int i=0;i<25;i++)
    {
        if(f[i].len>maxans and set[i][0]==myhead)
        maxans=f[i].len;
    }
    cout<<maxans<<endl;
    // cin;
    return 0;
}

// 每一次被搞死的都是模拟