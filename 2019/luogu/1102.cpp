//想到一點二分的思路了 每次記錄i有n個，然後就相當於縮小了範圍，然後排序，然後就可以查找了
//A-B=C A-C=B 故事背景帶偏
//繁體字不容易打錯

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <vector>
// #include <pair>
#include <fstream>
using namespace std;

int N, C;
int mylist[2000006];//既有RE又有WA，是不是數組不夠大，沒看到2*10^5
set <int> keys;//用set更好？
unordered_map <int,int> mymap; 
long long ans;
long long tmp;

int main()
{
    // freopen("1102.in","r",stdin);
    cin >> N >> C;
    // cout<<mymap[555];
    for (int i = 0;i < N; i++)
    {
        cin >> mylist[i];
        keys.insert(mylist[i]);
        if(mymap.count(mylist[i]))
        {
            mymap[mylist[i]]++;
        }
        else{
            mymap.insert(pair<int,int>(mylist[i],1));
        }
    // cout<<i<<endl;
    }
    if(keys.empty())
    {
        cout<<0<<endl;
        return 0;
    }
    for(int key:keys)
    {
        // cout<<"?????????????????";
        tmp=mymap.count(key-C);
        if(tmp)
        {
            tmp=mymap[key-C];
            ans+=tmp*mymap[key];
        }
    }
    cout<<ans<<endl;
    return 0;
}