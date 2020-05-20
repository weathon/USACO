/*
ID: wguo6352
TASK: palsquare
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <map>
#include<string>
using namespace std;

struct mynumber
{
    char d[25];
    mynumber()
    {
        for (int i = 0; i < 20; i++)
        {
            d[i] = '-';
        }
    };
    string tostring()
    {
        string ans;
        int mylen2=0;
        for(int i=0;true;i++)
        {
            if(d[i]=='-') break;
            ans+=d[i];
            mylen2++;
        }
        // cout<<mylen2<<endl;
        // cout<<ans<<endl<<endl;
        string ans2;//Cannot use ans1 anymore, no, youcan. The issue is we did twice, and it swap back
        ans2=ans;
        for(int i=0;i<mylen2/2;i++)
        {
            // char tmp;
            // tmp=ans[mylen2-i-1];
            ans2[mylen2-i-1]=ans[i];
            // cout<<ans[i]<<endl;
            // cout<<tmp<<endl;
            ans2[i]=ans[mylen2-i-1];
        }
        // cout<<ans2<<endl;
        return ans2;
    }
};

int B;

mynumber myconvert(int number)
{
    // 反正要搞回文，所以顺序无所谓   输出原数字还是需要顺序
    char mylist[25]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N'};
    mynumber ans;
    int pointer=0;
    while(number!=0)
    {
        ans.d[pointer]=mylist[number%B];
        number=number/B;
        pointer++;
    }
    return ans;
};

bool ifworks(mynumber num)
{
    int len=0;
    for(int i=0;i<20;i++)
    {
        if(num.d[i]!='-')
        {
            len++;
        }
        else{
            break;
        }
    }
    for(int i=0;i<len;i++)
    {
        if(num.d[i]!=num.d[len-i-1])
        {
            return false;
        }
    }
    return true;
};

int main(void)
{
    // ifstream fin;
    // ofstream fout;
    // fin.open("palsquare.in");
    // fout.open("palsquare.out");
    cin >> B;
    for (int i = 1; i < 300; i++)//from 1 instead of 0, to remove the blank line
    {
        int square_=i*i;
        mynumber square_in_B=myconvert(square_);
        mynumber or_in_B=myconvert(i);
        if(ifworks(square_in_B))
        {
            cout<<or_in_B.tostring()<<" "<<square_in_B.tostring()<<endl;
        }
    }
    return 0;
}