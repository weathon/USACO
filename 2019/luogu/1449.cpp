#include<iostream>
using namespace std;

int main(void)
{
    int ans;
    int stack[10000];
    int stacktop=0;//指向的是最低的空位
    char read;
    int dignum=0;

    while(1)
    {
        cin>>read;
        if(read=='@') break;
        else if(read>='0' and read<='9')//num
            dignum=dignum*10+(read-'0');//要用单引号
        else if(read=='.')
        {
            
            stack[stacktop]=dignum;
            stacktop++;
            dignum=0;//要清空,但是要先加入在清空
        }
        else if(read=='+')//可以用case? pop不用删除，直接移动top
        {
            stack[stacktop-2]=stack[stacktop-2]+stack[stacktop-1];
            stacktop--;
        }
        else if(read=='-')//可以用case? pop不用删除，直接移动top
        {
            stack[stacktop-2]=stack[stacktop-2]-stack[stacktop-1];
            stacktop--;
        }
        else if(read=='*')//可以用case? pop不用删除，直接移动top
        {
            stack[stacktop-2]=stack[stacktop-2]*stack[stacktop-1];
            stacktop--;
        }
        else if(read=='/')//可以用case? pop不用删除，直接移动top
        {
            stack[stacktop-2]=stack[stacktop-2]/stack[stacktop-1];
            stacktop--;
        }
    }
    cout<<stack[0]<<endl;
    return 0;
}