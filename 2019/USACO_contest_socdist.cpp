#include <iostream>
#include <fstream>
#include <cstdio>
#include <unordered_set>
#include <queue>
#include <vector>
using namespace std;

#define OO 100000;

int N, M;
long long a[100006];
long long b[100006];

struct mypair
{
    long long first, second;
};
unordered_set<mypair> hasgrass;

bool hasgrassf(long long i)
{
    return true;
}

struct node
{
    long long thismin, thismax;
    int l, r;
};

node mytree[1000006];
// unordered_set <long long> hasgrass;

int main(void)
{
    // freopen("socdist.in", "r", stdin);
    // freopen("socdist.out", "w", stdout);
    scanf("%d%d", &N, &M);
    long long farest = 0;
    for (int i = 0; i < M; i++)
    {
        scanf("%lld%lld", &a[i], &b[i]);
        if (b[i] > farest)
            farest = b[i];

        hasgrass.insert(pair<long long, long long>(a[i], b[i]));
    }

    for (auto ii : hasgrass)
    {
    }
    int mymin = 1;
    long long mymax = farest / N + 1;
    int CD;
    int i;
    int numberofcow;
    // cout<<mymax<<endl;
    for (int D = 1; D <= mymax + 1; D++)
    {
        CD = OO;
        numberofcow = N;
        for (i = 0; i <= farest + 1; i++)
        {
            if (i == farest + 1 and numberofcow > 0)
            {
                cout << D - 1 << endl;
                exit(0);
            }
            if (hasgrassf(i) and CD >= D)
            {
                numberofcow--;
                CD = 1; //1 or 0
            }
            else
                CD++; //else
        }
    }
    return 0;
}
