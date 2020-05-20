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
        scanf("%d",&tmp);
        if (chopsticks.count(tmp))
        {
            chopsticks.erase(tmp);
        }
        else
        {
            chopsticks.insert(tmp);
        }
    }
    cout << *chopsticks.begin() << endl;
    return 0;
}