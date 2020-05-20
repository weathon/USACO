#include<iostream>
using namespace std;
//用来练习自己实现二叉树排序

int N;
struct Tnode{
    int id,chinese,math,english;
    int LC,RC;
};

Tnode mytree[400];
int myfree=1;

void insert_node(int &root,int id,int chinese,int math,int english)
{
    // cout<<root<<endl;
    if(root==0)//每次都是这里？？
    {
        mytree[myfree].id=id;
        mytree[myfree].chinese=chinese;
        mytree[myfree].math=math;
        mytree[myfree].english=english;
        mytree[myfree].LC=mytree[myfree].RC=0;
        root=myfree;
        myfree++;
    }
    else
    {
        // if(((chinese+math+english)>(mytree[root].chinese+mytree[root].math+mytree[root].english)) or //忘了比较总分
        //     (chinese>mytree[root].chinese) or (chinese==mytree[root].chinese and math>mytree[root].math) or 
        //     (chinese==mytree[root].chinese and math==mytree[root].math and english>mytree[root].english) or
        //     (chinese==mytree[root].chinese and math==mytree[root].math and english==mytree[root].english and id<mytree[root].id))//注意，学号是比小
        // {
        //     //更加“优秀”
        //     insert_node(mytree[root].RC,id,chinese,math,english);

        // }  不能用or，要一个一个判断
        if((chinese+math+english)>(mytree[root].chinese+mytree[root].math+mytree[root].english))
            insert_node(mytree[root].RC,id,chinese,math,english);
        else if((chinese+math+english)==(mytree[root].chinese+mytree[root].math+mytree[root].english) and chinese>mytree[root].chinese) //else判断有问题，要加上相等，否则可能出现总分小语文达
            insert_node(mytree[root].RC,id,chinese,math,english);
        else if((chinese+math+english)==(mytree[root].chinese+mytree[root].math+mytree[root].english and chinese==mytree[root].chinese) and (id<mytree[root].id))  //括号放错位置了，弄了半天，终于AC了，眼！！
            insert_node(mytree[root].RC,id,chinese,math,english);
        else{
            insert_node(mytree[root].LC,id,chinese,math,english);
        }
    }
}

int count=0;//只记录从右到左的5个

void print_tree(int root)
{
    if(root==0) return;//还是0方便
    print_tree(mytree[root].RC);//打印右边先
    cout<<mytree[root].id<<" "<<(mytree[root].chinese+mytree[root].math+mytree[root].english)<<endl;
    count++;
    if(count>=5) exit(0);
    print_tree(mytree[root].LC);//突然想起luck唱歌，好久以前

}

int main(void){
    cin>>N;
    int root=0;//因该放在循环外面？是的，第一次过后root自动变为1
    for(int i=0;i<N;i++)
    {
        int id,chinese,math,english;
        cin>>chinese>>math>>english;
        id=i;
        insert_node(root,1+id,chinese,math,english);//由于是引用所以必须是变量不能是-1,而且每次都从根，但不是都是-1
    }
    // for(int i=0;i<=N;i++)
    // {
    //     cout<<mytree[i].LC<<" "<<mytree[i].RC<<endl;
    // }
    print_tree(1);
    return 0;
}


// 没看清楚题目啊啊啊，只比较总分语文和学号
// 出现的(yuanbenchuxiande)问题： A>B>C,but also A=C, 没问题，弄错了而已
