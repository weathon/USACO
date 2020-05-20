#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int N, K;
int mylist[100005];
unordered_set<int> myset;

int main(void)
{
    //根据题解的说法就是最长的+1
    cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> mylist[i];
    //可以用反向计数
    vector<int> breakpointes;
    int counts = 0;
    for (int i = 0; i < N; i++)
    {
        if (myset.count(mylist[i]) == 0)
        {
            myset.insert(mylist[i]);
            counts++;
        }
        if (counts == K)
        {
            myset.clear();
            counts = 0;
            breakpointes.push_back(i);
        }
    }
    if (breakpointes.size() != 0)
    {
        if (breakpointes.back() == N)//最后一个点刚好结束不会插入，这里应该是等于才插入
            breakpointes.push_back(-1);
    }
    cout << breakpointes.size() + 1 << endl;
    return 0;
}