#include<iostream>
using namespace std;

int maxnode=0;

struct Tnode{
    int LC=0
        ,RC=0;
    int data;
    int subnodenum[1000005];
    int subnodenum_array_free=0;
    void add_node_num(int n){
        subnodenum[subnodenum_array_free]=n;
        subnodenum_array_free++;
    }
};

int treedata[1000005];
Tnode mytree[1000005];

void dfs(int root&)
{
    mytree[root].add_node_num(mytree[root].data);
    if(mytree[root].data==-1) return;
    else{
        dfs
    }

}

int main(void){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>treedata[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>mytree[i].LC>>mytree[i].RC;
        mytree[i].data=treedata[i];
    }
    dfs();
    return 0;
}


//先通过后序遍历在每一个节点中记录一个数组，然后再比较