/*
ID: wguo6352
TASK: runround
LANG: C++14                 
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int m;
int cn;

bool check(int);

int main(void)
{
    // freopen("runround.in", "r", stdin);
    // freopen("runround.out","w",stdout);
    cin >> m;
    cn = m;
    while (1)
    {
        if (check(cn))
        {
            cout << cn << endl;
            return 0;
        }
        cn++;
    }
    return 0;
}

bool check(int a)
{
    //get each dig
    vector<short> num;
    set<short> appeared;
    while (1)
    {
        if (a == 0)
            break;
        num.push_back(a % 10);
        a = a / 10;
    }
    for (auto i : num)
    {
        if (i == 0)
            return false;
        if (appeared.count(i) == 1)
            return false;
        else
            appeared.insert(i);
    }
    appeared.clear();
    // reuse
    int wentcount=0;
    // int current_dig=num[num.size()-1];
    int current_index=num.size()-1;
    // cout<<num.size()<<endl;
    while(1)
    {
        if(appeared.count(num[current_index]))
        {
            // 来到了一个来过的点
            if(wentcount==num.size())//**** 全部来过了
            {
                cout<<current_index<<endl;
                if(current_index==num.size()-1) return true;//其实只要否则false就好了，避免死循环，还有下面的操作  忘记了反过来
                // 要停留于开始？
                return false;
            }
            else{
                return false;
            }
        }
        appeared.insert(num[current_index]);
        wentcount++;
        current_index-=num[current_index];
        while(current_index<0)
        {
            current_index+=num.size();//到底是什么，不加不减？？？？ 第一次+第二次-  崔吃饭 nongcuole er yi, shu cuo le meishu zi ji?  shide yi yang hua guo qu le mei shu zui hou yi ge 
        }
    }
}