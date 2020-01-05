#include<iostream>
using namespace std;
// 吉林省选
// 我是用栈解决的，有人用并查集？https://www.luogu.com.cn/problemnew/solution/P3884
struct Tnode{
    int LC=-1,
    RC=-1;
};

Tnode tree[105];
int deepth=0;
int widthList[105];
int n,u,v;
int howfar=0; //考虑距离，不需要到总root, 可以是subroot，反向搜索？  左胸口痛，熬夜做题，中文
int uStack[105];
int vStack[105];
int udeep,vdeep;

void dfs(int id,int deep,int *stack)
{
    // cout<<id<<" "<<deep<<endl; //Only for debug
    // cout<<tree[id].LC<<" "<<tree[id].RC<<endl;
    int newstack[deep+2];//动态？
    for(int i=0;i<deep;i++){
        newstack[i]=stack[i];
    }
    newstack[deep]=id;

    if(tree[id].LC != -1) dfs(tree[id].LC,deep+1,newstack);
    if(tree[id].RC != -1) dfs(tree[id].RC,deep+1,newstack);
    widthList[deep]+=1;
    if(id==u){
        for(int i=0;i<=deep;i++){
        uStack[i]=newstack[i];
        }
        udeep=deep;
        // howfar=(deep-1)*2;
    }
    else if(id==v)
    {
        for(int i=0;i<=deep;i++){
        vStack[i]=newstack[i];
        }
        vdeep=deep;
        // howfar+=(deep-1);
    }
    if((tree[id].LC ==-1) and (tree[id].RC == -1))//如果两边都没有,是==，写成了！=，则为叶子节点，所以可以比较深度  可以不需要判断？
    {
        if(deep>deepth)
            deepth=deep;
    }

}
// 偏要我去玩游戏，困，浪费时间
// 狗毛，用力擦 触屏乱shan
//弄了一下午中序，被搞混了
// 重点是子树的解决！！！用栈，然后比较，也可以用再次反向搜索？
int main(void)
{
    for(int i=0;i<105;i++) widthList[i]=0;

    int id,C;

    cin>>n;
    for(int i=0;i<n-1;i++)//接下来的n-1行？？是的，最后一行是求距离的
    {
        cin>>id>>C;
        if(tree[id].LC==-1)
        {
            //左子树为空，往里面记录
            tree[id].LC=C;
        }
        else{
            //右子树为空
            tree[id].RC=C;
        }
    }
    cin>>u>>v;
    // cout<<"-----------"<<endl;
    int stack[105];
    for(int i=0;i<105;i++) stack[i]=-1;

    dfs(1,1,stack);//按照题意，深度从1开始
    // cout<<"---------"<<endl<<deepth;
    cout<<deepth;
    int maxwidth=0;
    for(int i=0;i<=deepth;i++)
     if(widthList[i]>maxwidth)
        maxwidth=widthList[i];

    for(int i=1;i<105;i++){
    // {cout<<vStack[i]<<" "<<uStack[i]<<endl;
        if(vStack[i]!=uStack[i]) //判断不等于
        {
            
            howfar=(udeep-i+1)*2+(vdeep-i+1);
            break;//重要
        }
    }
    cout<<endl<<maxwidth<<endl<<howfar;
    return 0;
    
}