#include <iostream>
#include <queue>
#include <algorithm>
#include <stack>
#include <unordered_set>
using namespace std;

int N;
int myloop[1002];

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

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> myloop[i];
    }
    //不需要遍历起点,最多的点
    queue<int> cows;
    for (int ii = 0; ii < N; ii++)
    {
        int i = ii % N;
        if (myloop[i] >= 1)
        {
            for (int _ = 0; _ < myloop[i]; _++)
                cows.push(i);
            myloop[i] = 0;
        }
        if (!cows.empty())
        {
            myloop[i] = 1;
            ans += loopdis(cows.front(), i) * loopdis(cows.front(), i);
            cows.pop();
        }
    }
    int last0index = 0;
    for (int i = 0; i < N; i++)
    {
        if (myloop[i] == 0)
            last0index = i;
    }
    for (int i = 0; i <= last0index; i++)
    {
        if (myloop[i] >= 1)
        {
            for (int _ = 0; _ < myloop[i]; _++)
                cows.push(i);
            myloop[i] = 0;
        }
        if (!cows.empty())
        {
            myloop[i] = 1;
            ans += loopdis(cows.front(), i) * loopdis(cows.front(), i);
            cows.pop();
        }
    }
    for (int i = 0; i < N; i++)
        cout << myloop[i] << " ";
    cout << endl;
    cout << last0index << endl;
    cout << ans << endl;
    return 0;
}