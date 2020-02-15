/*
ID: milk
TASK: milk
LANG: C++14                 
*/

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

struct farmer
{
    // int v[6000];
    // int p[6000];
    // int vp[6000];
    int v,p,vp;
};

farmer farmers[6000];

bool f(farmer a,farmer b)
{
    return (a.vp<b.vp);
}
int main()
{
    freopen("milk.in","r",stdin);
    freopen("milk.out","w",stdout);
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int p1, p2;
        cin >> p1 >> p2;
        farmers[i].vp = p1; //单价!!!!!!
        farmers[i].v = p2;
        // farmers[i].p = p1 * p2;
    }
    sort(farmers, farmers + M,f);
    int how_many_left = N;
    int price = 0;
    for (int i = 0; true; i++)
    {
        if (farmers[i].v < how_many_left)
        {
            how_many_left -= farmers[i].v;
            price += farmers[i].vp*farmers[i].v;
        }
        else
        {
            price += how_many_left * farmers[i].vp;
            break;
        }
    }
    cout << price << endl;
    // for(int i=0;i<M;i++) cout<<farmers[i]<<endl;
    return 0;
}
