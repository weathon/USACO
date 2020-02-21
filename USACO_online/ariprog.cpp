/*
ID: wguo6352
TASK: ariprog
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int N;
int maxpq;
int bisquares[100000];
short tong[225000];
int pointer = 0;

int main(void)
{
    freopen("ariprog.in", "r", stdin);
    // freopen("ariprog.out", "w", stdout);
    //看了别人用人用sort做
    //上升序列？
    cin >> N;
    cin >> maxpq;
    int q; //常优
    for (int p = 0; p <= maxpq; p++)
    {
        for (q = 0; q <= maxpq; q++)
        {
            bisquares[pointer] = p * p + q * q;
            tong[bisquares[pointer]] = 1;
            pointer++;
        }
    }
    //便利来找等差数列？tong?
    long long current = 0;
    int count;
    for (int a = 0; a < 125000; a++) //不用扫完，只要N个?这是起始点，不是个数
    //还是可以用反向思维？
    {
        // current=a-b;//第一项是直接a，为了保证后面代码的一致性所以这里减去b。b还没有定义啊
        // current = a; //后面B是0，没关系
        // cout<<a<<endl;
        for (int b = 1; b < 125000; b++) //每一个最大是多少
        {
            // count = 0;
            // count = a; wrong
            current=a-b;//多了这个一下子出来好多
            count=0;//missing
            while(1)
            //这里要额外一个循环，眼角痛
            {
                current += b;
                // if(count>=1) cout<<count<<endl;
                if (current > 125000)
                    break;
                if (count >= N)
                {
                    /*output code here*/
                    cout << a << " " << b<<endl; //不需要额外排序，由于循环
                    break;//忘了这个
                }
                // cout<<current<<endl;
                if (tong[current] != 1)
                    break;
                count++;
            }
        }
    }
    return 0;
}