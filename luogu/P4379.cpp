#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

long long mylist[1000000];
bool aa(int a, int b) { return (a > b); }
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> mylist[i];
    sort(mylist, mylist + N, aa);
    // cout << mylist[0];
    // int ans=0;
    for (int i = 0; i < N; i++)
    {
        if (mylist[i] < i)
        {
            cout << i << endl;//不需要+1，因为当前已经是了
            return 0;
        }
    }
    cout<<N<<endl;
    return 0;
}