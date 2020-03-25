#include <iostream>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;

int N;
int myloop[1002];

struct cow
{
    int pos;
    int energy;
};
long long ans;

inline int loopdis(int a, int b)
{
    //from a to b
    if (b > a)
        return b - a;
    else
    {
        return N + b - a;
    }
}

cow tmp;
stack<cow> mycows;
int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> myloop[i];
    }
    int myindex = 0;
    //全部push一圈再pop一圈？
    int tmp2;
    for (int i = 0; i < N; i++)
    {
        // if (myloop[i] > 1) //Maybe whatever how many cows, just move, because give space to others,优先队列？
        // https://www.luogu.com.cn/problemnew/solution/P3137
        {
            for (int _ = 0; _ < myloop[i]; _++)
            {
                tmp.pos = i;
                tmp.energy = 0;
                mycows.push(tmp);
            }
        }
        tmp2 = loopdis(mycows.top().pos, i);
        ans += tmp2 * tmp2;
        mycows.pop();
    }
    myloop[i] = 0;
}

// int tmp2;
// for (int i = 0; i < N; i++)
// {
//     if (myloop[i] == 0)//这里的0，上面忘了归零
//     {
//         tmp2 = loopdis(mycows.top().pos, i);
//         ans += tmp2 * tmp2;
//         mycows.pop();
//     }
// }
// for (int i = 0; i N; i++)
cout << ans << endl;
return 0;
}