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
    if (b >= a) //yao =
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
    // int myindex = 0;
    //全部push一圈再pop一圈？
    int tmp2;
    bool waszero;
    for (int i = 0; i < N; i++)
    {
        // waszero=false;
        if (myloop[i] == 0 and !mycows.empty())
        {
            tmp2 = loopdis(mycows.top().pos, i);
            ans += tmp2 * tmp2;
            mycows.pop();
            myloop[i]++; //missing
            // waszero=true;
        } //shunxu

        // if(!waszero)
        for (int _ = 0; _ < myloop[i]; _++)
        {
            tmp.pos = i;
            tmp.energy = 0;
            mycows.push(tmp);
            myloop[i]--;
        }
        if (myloop[i] == 0 and !mycows.empty())
        {
            tmp2 = loopdis(mycows.top().pos, i);
            ans += tmp2 * tmp2;
            mycows.pop();
            myloop[i]++; //missing
            // waszero=true;
        } //shunxu
    }

    for (int i = 0; i < N; i++)
    {
        if (myloop[i] == 0 and !mycows.empty())
        {
            tmp2 = loopdis(mycows.top().pos, i);
            ans += tmp2 * tmp2;
            mycows.pop();
            myloop[i]++;
        }
    }
    cout << ans << endl;
    // cout << mycows.size() << endl;
    // for(int i=0;i<N;i++) cout<<myloop[i]<<" ";
    return 0;
}