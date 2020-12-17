#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

#define FOR(a, b) for (int i = a; i < b; i++)

int N;
int cows[1000000];
int presum[1000000];

int main()
{
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    cin >> N;
    FOR(0, N)
    {
        cin >> cows[i];
    }
    long long mysum;
    FOR(0, N)
    {
        mysum += cows[i];
        mysum = mysum % 7;
        presum[i] = mysum;
        // cout<<mysum<<endl;
    }
    int maxans = 0;
    FOR(0, 6)
    {
        int first = -1, last = -1;
        for (int j = 0; j < N; j++)
        {
            if (presum[j] == i)
            {
                first = j + 1;
                break;
            }
        }
        for (int j = N - 1; j >= 0; j--)
        {
            if (presum[j] == i)
            {
                last = j;
                break;
            }
        }
        if (first != -1)
        {
            maxans = max(last - first + 1, maxans);
            // printf("first: %d  last %d i %d\n",first,last,i);
        }
    }
    cout << maxans << endl;
    return 0;
}
// luo gu you liang ge WA USACO quna bu AC
// bu yi ding yi qian yi hou? duan kai qi shi mei you guan xi a 