/*
ID: wguo6352
TASK: wormhole
LANG: C++14                 
*/

// NO COW ANYMORE!!!
// 我喜欢Meredith
// https://www.youtube.com/watch?v=KR4iY-EfEs4

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
long long next_on_right_len[30];
int next_on_right_index[30];

struct xy
{
    int x, y;
};

xy holes[30];
int mycount = 0;
int N;

int mypair[30];
//Idea from the video, the value means the paor with i

void checkloop()
{
    // mycount++;
    for (int i = 0; i < N; i++)
    {
        int whereibegin = i;
        int nextloopindex = i; //递推代替递归
        bool dualb = false;
        for (int _ = 0; _ < 2 * N; _++)
        {

            if (next_on_right_len[nextloopindex] == 2907154449)
                break;
            // cout<<next_on_right_index[nextloopindex]<<endl;

            nextloopindex = mypair[next_on_right_index[nextloopindex]];
            if (nextloopindex == whereibegin)
            {
                mycount++;
                dualb = true;
                break; //need dual breaks
            }
            // if (dualb)
            // break;
        }
        if (dualb)
            break;
    }
}

void solve()
{
    //不用找一个然后测试可不可行 视屏教程是说只见找，找到一个空的就可以了，不要被惯性思维束缚
    int index = 0;
    for (index = 0; index <= N; index++)
        if (mypair[index] == -1) //忘了初始化
            break;

    if (index >= N)
    {
        // cout<<index<<endl;
        checkloop();
        // mycount++;
        return;
    }

    for (int j = index + 1; j < N; j++) //还是视频里看来的，只往后
    {
        // cout<<index<<" "<<j<<endl;
        if (mypair[j] == -1) //忘了这个，看视频
        {
            mypair[index] = j;
            mypair[j] = index;
            solve();
            mypair[index] = -1;
            mypair[j] = -1;
        }
    }
}

int main()
{
    for (int i = 0; i < 30; i++)
        mypair[i] = -1;
    freopen("wormhole.in", "r", stdin);
    freopen("wormhole.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> holes[i].x >> holes[i].y;
    }
    for (int i = 0; i < N; i++)
    {
        next_on_right_len[i] = 2907154449;
    } //怒可以和下面在一起？
    for (int i = 0; i < N; i++)
    {
        // next_on_right_len[i] = 2907154449;
        for (int j = 0; j < N; j++)
        {
            if (holes[i].x < holes[j].x and holes[i].y == holes[j].y and
                (holes[j].x - holes[i].x) < next_on_right_len[i])
            {
                next_on_right_len[i] = (holes[j].x - holes[i].x);
                next_on_right_index[i] = j;
            }
        }
    }
    solve();
    cout << mycount << endl;
}