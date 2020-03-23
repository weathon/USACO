#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <math.h>
#include <queue>
#include <vector>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <fstream>
using namespace std;

int N, M;
char which_kind_of_cows_i_like[100005];
char which_kind_of_cows_farm_i_has[100005];
int A[100005];
int B[100005];
int mytree[100005];
int tmp1, tmp2;
// vector<int> asatring;
int the_number_where_it_got_different = -1;

vector<int> astring;
vector<int> bstring;

int main()
{
    // freopen("P5836.in", "r", stdin);原来是这个
    cin >> N >> M;
    for (int i = 1; i <= N; i++) //还是弄错
    {
        cin >> which_kind_of_cows_farm_i_has[i];
    }
    for (int i = 0; i < N - 1; i++)
    {
        cin >> tmp1 >> tmp2;
        mytree[tmp2] = tmp1;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i] >> which_kind_of_cows_i_like[i];
    }
    for (int i = 0; i < M; i++)
    {
        astring.clear();
        bstring.clear();
        int pointer = A[i];
        while (pointer != 1)
        {
            astring.push_back(pointer); //分不清A和mytree
            pointer = mytree[pointer];  //把pointer携程A[i] 警告
        }
        astring.push_back(1);
        pointer = B[i];
        while (pointer != 1)
        {
            bstring.push_back(pointer); //分不清A和mytree
            pointer = mytree[pointer];  //把pointer携程A[i] 警告
        }
        bstring.push_back(1);
        reverse(astring.begin(), astring.end());
        reverse(bstring.begin(), bstring.end());
        the_number_where_it_got_different = -1;

        for (int ii = 0; ii <= min(astring.size(), bstring.size()); ii++)
        {
            if (astring[ii] != bstring[ii])
            {
                the_number_where_it_got_different = astring[ii - 1];
            }
        }
        if (the_number_where_it_got_different == -1)
            return -100;
        bool mystart = false;
        int ans=0;
        for (auto ii : astring)
        {
            if (ii == the_number_where_it_got_different)
                mystart = true;
            if (mystart)
            {
                if (which_kind_of_cows_farm_i_has[ii] == which_kind_of_cows_i_like[i])
                // cout << "1";
                {
                    ans = 1;
                    break;
                }
                // continue;
            }
        }
        mystart = false;
        for (auto ii : bstring)
        {
            if (ii == the_number_where_it_got_different)
                mystart = true;
            if (mystart)
            {
                if (which_kind_of_cows_farm_i_has[ii] == which_kind_of_cows_i_like[i])
                {
                    ans = 1;
                    break;
                }
                // continue;
            }
        }
        cout << ans;
    }
    return 0;
}