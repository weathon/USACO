#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;

int N;
pair<int, int> moops[1000006];
vector<int> canreact[1000006];
pair<int, int> vectorlen[1000006];
unordered_set<int> gone;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second);
}

int main(void)
{
    // freopen("moop.in", "r", stdin);
    // freopen("moop.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> moops[i].first >> moops[i].second;
    }
    for (int i = 0; i < N; i++)
    {
        vectorlen[i].first = i;
    }
    int j;
    for (int i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if ((moops[i].first <= moops[j].first and moops[i].second <= moops[j].second) or
                (moops[i].first >= moops[j].first and moops[i].second >= moops[j].second)) //loule dengyu
            {
                canreact[i].push_back(j);
                canreact[j].push_back(i);
                vectorlen[i].second++;
                vectorlen[j].second++;
            }
        }
    }
    sort(vectorlen, vectorlen + N, cmp);
    long long ans = N;
    bool cangone;
    int theother;
    for (int i = 0; i < N; i++) //i is just the order
    {
        cangone = false;
        for (int ii : canreact[vectorlen[i].first])
        {
            if (gone.count(ii) == 0)
            {
                cangone = true;
                theother = ii;
                break;
            }
        }
        if (cangone)
        {
            ans--;
            if (vectorlen[i] < vectorlen[theother])
            {
                gone.insert(vectorlen[i].first);
                vectorlen[vectorlen[i].first].second--;
            }
            else
            {
                gone.insert(vectorlen[theother].first);
                vectorlen[vectorlen[theother].first].second--;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
