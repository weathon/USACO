// #憋气写代码
// #越久越爽

#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int mylist[1000006];

int tmp;
int l, r, mid;
// bool nonans;

int main()
{
    cin >> n >> m;
    // 憋气头痛
    for (int i = 0; i < n; i++)
        cin >> mylist[i];
    for (int _ = 0; _ < m; _++)
    {
        cin >> tmp;
        l = 0;
        r = n;
        mid = (l + r) / 2;
        // nonans = false;
        while (true)
        {
            // cout<<mid<<endl;
            if (tmp >= mid)
            l = mid;
            {
                int tt=l;
                if(mylist[l]!=mylist[l-1])
                {
                    l=mid;
                }
                else{
                    for(;mylist[l]!=tt;l--);
                    l++;
                }
            }
            if (tmp <= mid)
                r = mid;
            mid = (l + r) / 2;
            // if (r - l <= 1)
            // {
            //     cout<<" "<<r<<" "<<l<<endl;
            //     for (int __ = r; __ <= l; __++)
            //     {
            //         if (mylist[__] == tmp and mylist[__ - 1] != tmp)
            //         {
            //             cout << __ + 1 << " ";
            //             break;
            //         }
            //     }
            // }
            if (mylist[mid] == tmp and mylist[mid - 1] != tmp)
            {
                cout << mid + 1 << " ";
                break;
            }
            if (l == r and mylist[l] != tmp)
            {
                // cout<<endl<<l<<" "<<r<<endl;
                cout << -1 << " ";
                break;
            }
        }
    }
    return 0;
}