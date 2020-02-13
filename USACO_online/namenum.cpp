/*
ID: wguo6352
TASK: namenum
LANG: C++14                 
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// A=65

string f[12][5003]; //用递归思想，一个维度代表（可以压缩）步骤，另一个储存结果
string test;
char numlist[20];
// string accaptable[5000];

bool ifin(string a, string b[5003])
{
    if(a=="") return false;
    bool ans = false;
    for (int i = 0; i < 5000; i++)
    {
        if (a == b[i])
        {
            // cout<<a;
            return true;
        }
    }
    return ans;
}

int main(void)
{
    // cout<<test+'a';
    freopen("namenum.in", "r", stdin);
    freopen("namenum.out", "w", stdout);
    // int num;
    // cout<<char('A'+1);
    int n = 0;
    for (int i = 0; true; i++)
    {
        char tmp;
        // cin >> tmp;
        tmp = getchar();
        // cout<<tmp;
        if (tmp == '\n')
            break;
        numlist[i] = tmp;
        n++;
    }
    // cout << 0;

    // for (int i = 0; i < 4617; i++)
    // {
    //     cin >> accaptable[i];
    // }
    f[0][0] = char(int(numlist[0] - '0') * 3 - 6 + 'A'); //forget-'0'
    f[0][1] = char(int(numlist[0] - '0') * 3 - 6 + 'B');
    f[0][2] = char(int(numlist[0] - '0') * 3 - 6 + 'C');
    // cout<<f[0][0];
    // cout<<n;return 0;
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int pointer = 0;
        for (int j = 0; true; j++)
        {
            // cout<<i<<" "<<j<<endl;

            if (f[i - 1][j] == "" or f[i - 1][j] == "\0")
                break;
            // if (not ifin(f[i - 1][j] + char(int(numlist[0]) * 3 - 6 + 'A'), f[i]))
            // {
            f[i][pointer] = f[i - 1][j] + char(int(numlist[i] - '0') * 3 - 6 + 'A');
            pointer++;
            // }
            // if (not ifin(f[i - 1][j] + char(int(numlist[0]) * 3 - 6 + 'B'), f[i]))
            // {
            f[i][pointer] = f[i - 1][j] + char(int(numlist[i] - '0') * 3 - 6 + 'B');
            pointer++;
            // }
            // if (not ifin(f[i - 1][j] + char(int(numlist[0]) * 3 - 6 + 'C'), f[i]))
            // {
            f[i][pointer] = f[i - 1][j] + char(int(numlist[i] - '0') * 3 - 6 + 'C');
            pointer++;
            // }
            // cout<<pointer;
            // cout<<f[i][j]<<endl;
            count += 3;
        }
    }
    // cout<<f[n-1][0];
    int uu=0;
    for (int i = 0; i < count; i++)
    {
        
        // cout << f[n - 1][i] << endl;
        if(ifin(f[n-1][i],accaptable))
        {
            cout<<f[n-1][i]<<endl;
            uu++;
        }
    }
    if(uu==0) cout<<"NONE"<<endl;
    return 0;
}