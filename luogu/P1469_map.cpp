#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <unordered_map>
using namespace std;

int N;
int tmp;
unordered_map <int,int> chopsticks;//用unorder优化

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&tmp);
        if (chopsticks.count(tmp))
        {
            if(chopsticks[tmp]>=1)
            {
                chopsticks[tmp]=0;
            }
            else{
                chopsticks[tmp]=1;
            }
        }
        else
        {
            chopsticks.insert(tmp,1);
        }
    }
    for(int ii:chopsticks)
    {
        if(chopsticks[ii]==1)
        {
            cout << ii << endl;
            break;
        }
    }
    return 0;
}