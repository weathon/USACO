#include <iostream>
#include <queue>
#include <algorithm>
#include <stack>
#include <unordered_set>
using namespace std;
#define MYMAX 100005
#define OO 1000000000000000000

int N;
int myloop[MYMAX];
int myloop_1[MYMAX];
int myloopo[MYMAX];
int repeat[MYMAX];

long long ans, totalans = OO;

inline int loopdis(int a, int b)
{
    if (b >= a) 
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
        cin >> myloopo[i];
        myloop_1[i]=myloop[i]-1;
    }

    //計算前綴和
    // int mysum=0;
    // for(int i=0;i<N;)
    // {
    //     //不用雙重循環
    //     for(int j=i;j<N;j++)
    //     {

    //     }
    //     i++;
    // }

    
 
    // for (int start : maxcowsindex)
    for(int start=0;start<N;start++)
    { 
        // if(myloopo[start]<maxcows-2) continue;
        // cows.
        queue<int> cows;
        for (int i = 0; i < N; i++)
            myloop[i] = myloopo[i];
        for (int i = 0; i < N; i++)
            repeat[i] = -1;
        ans = 0;
        for (int ii = start; ii < N + start; ii++)
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
                repeat[i] = cows.front();
                ans += loopdis(cows.front(), i) * loopdis(cows.front(), i);
                cows.pop();
            }
        }
        int last0index = 0;
        for (int i = start; i < N + start; i++)
        {
            if (myloop[i % N] == 0)
                last0index = i; 
        }
        for (int ii = start; ii <= last0index; ii++) 
        {
            int i = ii % N;
            if (myloop[i] >= 1)
            {
                for (int _ = 0; _ < myloop[i]; _++)
                    if (repeat[i] != -1)
                        cows.push(repeat[i]);
                    else
                    {
                        cows.push(i);
                    }

                myloop[i] = 0;
            }
            if (!cows.empty())
            {
                myloop[i] = 1;
                ans += loopdis(cows.front(), i) * loopdis(cows.front(), i);
                cows.pop();
            }
        }                
        if (ans < totalans)
            totalans = ans;
    }
    cout << totalans << endl;
    return 0;
}