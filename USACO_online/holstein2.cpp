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
    freopen("holstein.out", "w", stdout);
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
    // cout<<totalanssum<<endl; //640
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
    //不准确吧，status的意义是？push进去的？不是，那是ans
    //要等所有的弄完了？
    // if(d==g)
        for (int i = 0; i < v; i++)//原v来就是这个vg用错了，条那么久，之前想到过的，弄成v炸了？之前也出现了
        {
            if (status[i] < vlist[i])
            {
                ifans = false;
                break;
            }
        }
    if (ifans)
    {
        int mysum = 0;
        // for (auto p : anscout)
        // {
        //     mysum += gsum[p];
        //     cout << p << " ";
        // }
        // cout<<endl;
        // cout << " " << d << " " << mysum << " " << totalanssum << endl; //totalsum一直是1000000
        //且所需的饲料剂量最少。
        // printf("%lx %lx %d\n",ans.size(),finalans.size(),mysum);
        // if(mysum<=totalanssum)
        if (finalans.size() == 0 or (finalans.size() != 0 and finalans.size() > ans.size())) // or mysum < totalanssum)//size优先级别过高/低？
        {//一直不远写等号？
            if ((mysum <= totalanssum and (finalans.size() == 0)) or finalans.size() != 0) //加上等于号就好了？ 应该改成比较一个数组，同等anssize下面比较                                          //这个优先级很难搞 放到上面or里面也可以
            //size相等再对比sum?
            // {
                // if (myifdictbetter(ans, finalans)) //注意顺序？
                // {
                    finalans = ans;      //只是qianfuzhi?
                    totalanssum = mysum; //加了这里sum变了，但是结果还是没有改变 但是这里没有加判断}
                // }
            // }
        }
        //通过python对样例检测，还是sum太大了，要练习自主查错??python没注意index，我的sum还是小一些，其他原因
        //通过excel分析，发现其实是有些数据根本没有达到标准，前面的问题，表格见末尾
        else if (finalans.size() == ans.size()) //漏掉了小于的情况?  出问题的第五个点是size相同的
        {
            // cout<<"=="<<mysum<<" "<<totalanssum<<endl; //没进来
            if (mysum <= totalanssum)
            {
                // cout<<"=="<<mysum<<" "<<totalanssum<<endl; //没进来
                if ((myifdictbetter(ans, finalans) and mysum == totalanssum) or (mysum < totalanssum)) //原来问题出在这里，卡字典序，没搞清楚优先级的关系，要先确定前面相等？？？？？？？？？
                //如果不相等（小于）就无需判断字典序？其实可以优化  
                {
                    finalans = ans;
                    totalanssum = mysum;//不是检查sum而是分别？
                }
            }
        }
        return; //return but not exit
    }
    //选
    // used.insert(d);
    for (int i = 0; i < v; i++)//这要改v，也许是上面错过了给了这里机会
    {
        status[i] += glist[d][i];
    }
    ans.push_back(d);
    dfs(d + 1, c + 1);
    //还原
    for (int i = 0; i < v; i++)
    {
        status[i] -= glist[d][i];
    }
    // used.erase(d);
    ans.pop_back();
    dfs(d + 1, c);
}



// 123	137	194	60	137	89	153	122	115	198	47	76	38	62	112	1663
// 31	105	1	155	93	25	74	15	177	191	146	32	47	115	7	1214
// 116	72	139	64	112	39	173	33	61	118	119	136	32	132	100	1446
// 37	143	7	159	27	44	170	158	71	72	160	125	56	155	28	1412
// 4	31	77	184	26	185	184	77	69	159	130	154	44	31	154	1509
// 87	41	171	91	126	92	108	197	145	87	8	189	64	92	93	1591
// 197	197	199	16	16	6	181	113	150	27	57	146	54	41	44	1444
// 61	48	48	22	181	121	124	164	138	94	124	61	191	151	102	1630
// 9	14	36	15	179	7	87	179	131	20	31	51	198	128	108	1193
// 198	3	164	32	27	41	42	179	147	169	168	97	122	156	183	1728
// 863	791	1036	798	924	649	1296	1237	1204	1135	990	1067	846	1063	931	
															
// 							correct	7270							
// 							mine	6888							
															
// 335	425	380	283	513	140	360	349	505	187	358	309	485	495	190	
// 391	443	461	303	529	270	670	811	635	300	380	572	563	567	375	
// True	True	True	True	True	True	True	True	True	True	True	True	True	True	True	
// 440	429	546	341	526	169	623	537	664	443	361	554	395	508	352	
// True	True	True	True	True	True	True	True	True	True	True	True	FALSE	True	True	
