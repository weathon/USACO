#include <iostream>
#include <cstdio>
#include <string>
#include <iomanip>
using namespace std;

long long leftc, leftx, rightc, rightx;
double ans;

char vname;
char current_method='+';//默认为+
long long current_num = 0;
short current_type = 0; //0=num 1=value 默认为数字
bool ifleft = true;
bool really0=false;

void push()
{
    if (current_type == 0) //可以提用多维数组优化？
    {
        if (current_method == '+')
        {
            //+num
            if (ifleft)
            {
                // left
                leftc += current_num;
            }
            else
            {
                //right
                rightc += current_num;
            }
        }
        else
        {
            //-num
            if (ifleft)
            {
                // left
                leftc -= current_num;
            }
            else
            {
                //right
                rightc -= current_num;
            }
        }
    }
    else
    {
        if (current_method == '+')
        {
            //+value
            if (ifleft)
            {
                // left
                leftx += current_num;
            }
            else
            {
                //right
                rightx += current_num;
            }
        }
        else
        {
            //-value
            if (ifleft)
            {
                // left
                leftx -= current_num;
            }
            else
            {
                //right
                rightx -= current_num;
            }
        }
    }
}

int main()
{
    string myin;
    cin >> myin;
    // string left,right;
    for (int i = 0; i < myin.length(); i++)
    {
        char a = myin[i];
        if (a == '+')
        {
            push();
            //无论是加减还是等于，说明上一个数字已经结束
            current_method = '+';
            current_type = 0;
            current_num = 0;
            really0=false;
        }
        else if (a == '-')
        {
            push();
            current_method = '-';
            current_type = 0;
            current_num = 0;
            really0=false;
            
        }
        else if (a == '=')
        {
            push();
            ifleft = false;
            current_type = 0;
            current_num = 0;
            current_method='+';
            really0=false;
        }
        else if (a >= '0' and a <= '9')
        {
            //num
            current_num = current_num * 10 + (a - '0');
            if(a=='0' and current_num==0)//要判断当时也是0 
            really0=true;
        }
        else
        {
            //字母
            if(current_num==0 and !really0) current_num=1;//省略1的情况,但是如果真的写的是0呢？ 看题解还有-0  下载数据后看到的
            current_type = 1;
            vname=a;
        }
    }
    push();//结尾要再push一次，debug工具真的好用
    ans = float(rightc - leftc) / (leftx - rightx);
    // cout<<leftc<<" "<<leftx<<" "<<rightc<<" "<<rightx<<endl;
    if(ans<=0.000 and ans>-0.0001) ans=0.0; //负数0  打成了双==
    cout<< vname<<"="<<fixed << setprecision(3) << ans << endl;
    //https://blog.csdn.net/xidian13071185/article/details/4672344
}