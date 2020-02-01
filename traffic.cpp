#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct mynode
{
    int maxi, mini;
    int mode;
};

int max0, min0;
mynode highway[200];
// 根据题面的解释，我需要做的就是照片到水底一个两个none连在一起的，然后以这个为基准点，用之前的方法做，但是如果没有两个连在一起的，就用一个也可以
// 所以以后多看题面提示,这一次做错了好多次再来回溯的
// 但是又被题面误导了，想复杂了，不需要检测两次，直接第一次然后面再检测到会自动～～

int main()
{
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out","w",stdout);
    int N;
    cin >> N;
    int lastm = -2;
    bool if_two_in_a_row = false;
    int the_index_of_the_first_none;
    bool if_the_first_none = true;
    for (int i = 0; i < N; i++)
    {
        string m;
        int intm;
        cin >> m;
        int mini, maxi;
        cin >> mini >> maxi;
        highway[i].maxi = maxi;
        highway[i].mini = mini;
        if (m == "on")
            intm = 1;
        else if (m == "off")
            intm = -1;
        else if (m == "none")
            intm = 0;
        highway[i].mode = intm;

        if (intm == 0 and if_the_first_none == true) //forget the and
        //first time didn't go in, only the second time go in here  XX
        {
            // if (lastm == 0)
            // {
            // if_two_in_a_row = true;
            if (if_the_first_none)
            {
                if_the_first_none = false;
                the_index_of_the_first_none = i;
                max0 = maxi;
                min0 = mini;
            }
            // }
            // lastm = intm;
        }
        else
        // 要从最后一个往前推，而不是从第一个往前
        {
            // cout << min0 << " " << max0<<endl;

            // if(if_the_first_none == false)
            // {

            if (intm == 1)
            {
                max0 += maxi;
                min0 += mini;
            }
            else if (intm == -1)
            {
                max0 -= mini;
                min0 -= maxi;
            }
            else
            {
                max0 = min(maxi, max0);
                min0 = max(min0, mini);
                // cout << min0 << " " << max0;
            }
            // }
        }
    }
    // cout << min0 << " " << max0;
    int max1 = highway[the_index_of_the_first_none].maxi;
    int min1 = highway[the_index_of_the_first_none].mini;
    bool notfirst=false;
    for (int i = N - 1; i >= 0; i--)
    {
        if (notfirst)
        {
            if (highway[i].mode == 1)
            {
                max1 -= highway[i].mini;
                min1 -= highway[i].maxi;
            }
            else if (highway[i].mode == -1)
            {
                min1 += highway[i].mini;
                max1 += highway[i].maxi;
            }
        }
        if(highway[i].mode==0)//WHat ever if is
        {
            max1 = min(highway[i].maxi, max1);
            min1 = max(min1, highway[i].mini);
            notfirst=true;
        }
    }
    if(min1<0) min1=0;
    if(min0<0) min0=0;
    if(max0<0) max0<0;
    if(min1<0) min1<0;
    cout << min1 << " " << max1 << endl
         << min0 << " " << max0 << endl;
    return 0;
}
