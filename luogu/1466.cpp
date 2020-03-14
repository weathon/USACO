/*
ID: wguo6352
TASK: subset
LANG: C++14                 
*/
#include <iostream>
#include <unordered_set>
using namespace std;

int N;
long long f[2000];

int main()
{
    // freopen("subset.in","r",stdin);
    // freopen("subset.out","w",stdout);

    cin >> N;
    int supposesum; //ses
    supposesum = (1 + N) * N / 4;
    // cout<<supposesum<<endl;//为7时是28，忘了第二次除以二（一半）
    f[0] = 1;
    for (int _ = 1; _ <= N; _++) //++
    {
        for (int i = supposesum+3; i >= 0; i--)//not begin with N? ans only has n
        {
            if (f[i] != 0)
            {
                // f[i + _]++;//i+_ not f[i]+_
                f[i+_]+=(f[i]);
            }
        }
    }
    cout << (f[supposesum])/2 << endl;//相反的不算，美敢尝试 DP代码简单很多

    //骑完车眼睛累
    return 0;
}