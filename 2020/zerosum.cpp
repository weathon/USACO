/*
ID: wguo6352
TASK: zerosum
LANG: C++14   
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int N;
vector <string> ans;


void dfs(int,int);
int main(void)
{
    // freopen("zerosum.in", "r", stdin);
    // freopen("zerosum.out","w",stdout);
    cin>>N;
    dfs(1,2);
    // sort(ans.begin(),ans.end());
    return 0;
}

void dfs(int sum,int index)
{
    if(index==N+1)
    {
        if(sum==0)
        {
            cout<<0<<end;
        }
    }
    dfs(sum+index,index+1);
    dfs(sum-index,index+1);
    dfs(sum-(index-1)+((index-1)*10+index),index+1);

}
