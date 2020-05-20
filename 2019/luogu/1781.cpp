#include <iostream>
#include <string>
using namespace std;

struct longint
{
    int gids = 0;
    int num[105];
};

struct Tnode
{
    int LC = 0,
        RC = 0;
    longint num;
    int id;
};

Tnode mytree[30];
int myfree = 1;

longint data[25];

bool greaterthan(longint a, longint b)
{
    if (a.gids > b.gids)
        return true;
    else if (a.gids < b.gids)
        return false;
    else
    {
        for (int i = 0; i <= 100; i++)
        {
            if(a.num[i]==-1) return true;//相等
            if (a.num[i] > b.num[i])
                return true;
            else if (b.num[i] > a.num[i])
                return false; //小的时候我们牵着手一起回家
        }
    }
}

void print_longint(longint num)
{
    for(int i=0;i<num.gids;i++)//num.gids
    {
        if(num.num[i]==-1) break;
        else{
            cout<<num.num[i];//输出很大数，溢出0？？先有正确答案，然后才是乱东西。 眼睛难受
        }
    }
}
void insert(int &root, longint num, int index)
{
    if (root == 0)
    {
        mytree[myfree].num = num;
        mytree[myfree].id = index;
        root = myfree;
        myfree++;
    }
    else
    {
        if (greaterthan(mytree[root].num, num))//greater函数歧义“暧昧”
        {
            //root > num
            insert(mytree[root].LC, num, index);
        }
        else
        {
            insert(mytree[root].RC, num, index);
        }
    }
}

void print_ans(int root)
{
    if (mytree[root].RC == 0) //右节点为空，最大
    {
        cout << mytree[root].id+1 << endl;
        print_longint(mytree[root].num);
        cout<<endl;
            //  << mytree[root].num;
    }
    else
    {
        print_ans(mytree[root].RC);
    }
}

int main(void)
{
    // for(int i=0;i<30;i++) for(int j=0;j<105;j++)  mytree[i].num.num[j]=-1;//在这里初始化没用
    int N;
    cin >> N;
    int root = 0;//要放在外面？？
    for (int i = 0; i < N; i++)
    {
        // int index = 0;
        longint thisone;
        string inputa;
        cin >> inputa;
        // for(int u;u<103;u++) thisone.num[u]=-1; //这一行会RE  u没有=0
        for(int i=0;i<inputa.length();i++)
        {
            char c;
            // c = getchar();//-38换行符很难弄
            c = inputa[i];
            // cout<<c-'0'<<" ";
            if(c=='\n' or c=='\r') break;
            thisone.gids++;
            thisone.num[i] = c - '0'; //单双引号  放《大鱼》
            // index++;
        }
        // root=0;
        // for(int j=0;j<=5;j++) cout<<thisone.num[j]<<" ";
        insert(root, thisone, i);
    }
    // cout<<root<<endl;
    // for(int i=0;i<5;i++) cout<<mytree[i].LC<<" "<<mytree[i].RC<<endl;
    print_ans(1);
    return 0;
}