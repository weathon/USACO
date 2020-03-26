#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <unordered_set>
using namespace std;

int N;
int tmp;
unordered_set <int> chopsticks;//用unorder优化

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        // for (auto ii : chopsticks)
        // cout << ii << endl;

        // cout << endl;
        cin >> tmp;
        // cout<<chopsticks.count(tmp)<<endl;//进不来
        if (chopsticks.count(tmp) == 1)
        {
            chopsticks.erase(tmp);
            // chopsticks.erase(tmp);
            // cout<<chopsticks.count(tmp)<<endl;//进不来
        }
        else
        {
            chopsticks.insert(tmp);
        }
    }
    for (auto i : chopsticks)
        cout << i << endl;
    return 0;
}