/*
ID: wguo6352
TASK: namenum
LANG: C++14                 
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string mydict[5003];

int n = 0;
char numlist[20];
int hasans = 0;
bool ifin(string a, string b[5003])
{
    if (a == "")
        return false;
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
//反过来做就可以啊啊啊啊啊！
void dfs(string alreadymade, int depth)
{
    if (depth >= n)
    {
        if (ifin(alreadymade, mydict))
        {
            cout << alreadymade << endl;
            hasans = 1;
        }
        return;
    }
    char aa = char(int(numlist[depth] - '0') * 3 - 6 + 'A'); //forget-'0'
    char bb = char(int(numlist[depth] - '0') * 3 - 6 + 'B');
    char cc = char(int(numlist[depth] - '0') * 3 - 6 + 'C');
    dfs(alreadymade + aa, depth + 1);
    dfs(alreadymade + bb, depth + 1);
    dfs(alreadymade + cc, depth + 1);
}

int main(void)
{
    // cout<<test+'a';
    // freopen("namenum.in", "r", stdin);
    // freopen("namenum.out", "w", stdout);
    ifstream fin;
    fin.open("dict.txt");
    int myindex = 0;
    while (fin >> mydict[myindex])
    {
        if (mydict[myindex].length() == n)
            myindex++;
    }
    // cout<<myindex;
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
    dfs("", 0);
    if (hasans == 0)
        cout << "NONE" << endl;
    return 0;
}