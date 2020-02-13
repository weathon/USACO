/*
ID: wguo6352
TASK: gift1
LANG: C++14                 
*/

#include<iostream>
#include<fstream>
#include<string>
#include<map>
using namespace std;

map<string,int> friends;
string namelist[300];

int main(void)
{
	freopen("gift1.in", "r", stdin);
	freopen("gift1.out","w",stdout);
    int n;
    cin>>n;//Forgot
    string current_name;
    for(int i=0;i<n;i++)
    {
        string nm;
        // cout<<"-----------------"<<current_name;
        cin>>nm;
        // cout<<"-----------------"<<nm;
        namelist[i]=nm;
        friends[nm]=0;
    }
    while(cin>>current_name)
    {
        // cout<<"-----------------"<<current_name;
        int money,count;
        cin>>money>>count;
        // cout<<money<<" "<<count<<endl;
        if(count!=0) friends[current_name]+=(money%count)-money;//(money%count) doesn't count anything?
        for(int i=0;i<count;i++)
        {
            string name2;
            cin>>name2;
            friends[name2]+=money/count;
        }
    }
    // cout<<friends["dave"];
    for(int i=0;i<n;i++)
    {
        cout<<namelist[i]<<" "<<friends[namelist[i]]<<endl;
    }
    return 0;
}