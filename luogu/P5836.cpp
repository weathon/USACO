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
using namespace std;

int N, M;
char which_kind_of_cows_i_like[100005];
char which_kind_of_cows_farm_i_has[100005];
int A[100005];
int B[100005];
int mytree[100005];
int tmp1, tmp2;

int main(void)
{
    cin >> N >> M;
    getchar();
    for (int i = 0; i < N; i++)
    {
        which_kind_of_cows_farm_i_has[i] = getchar();
    }
    getchar();
    for (int i = 0; i < N - 1; i++)
    {
        cin >> tmp1 >> tmp2;
        mytree[tmp2] = tmp1; //反向查找，不用push了，只有一个？太麻烦，下面处理
    }
    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i] >> which_kind_of_cows_i_like[i];
    }
    bool ans;
    int tmp3, tmp4;
    for (int i = 0; i < M; i++)
    {
        vector<int> astring;
        vector<int> bstring;
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
        //从前往后扫描，扫到一样的就停止，然后
        //Len of astring and bstring maight not be the same
        ans = false;
        int index = 0;
        int equalindex;
        for (int i = 0; true; i++)
        {
            if (astring[astring.size() - i] != bstring[bstring.size() - i])
            {
                equalindex = astring[astring.size() - i + 1];
                break;
            }
        }

        while (1)
        {
            tmp3 = astring[index];
            if (which_kind_of_cows_farm_i_has[tmp3] == which_kind_of_cows_i_like[i])
            {
                ans = true;
                break;
            }
            if (tmp3 == equalindex)
            {
                break;
            }
            index++;
        }
        index=0;
        while (1)
        {
            tmp4 = bstring[index];
            if (which_kind_of_cows_farm_i_has[tmp4] == which_kind_of_cows_i_like[i])
            {
                ans = true;
                break;
            }
            if (tmp4 == equalindex)
            {
                break;
            }
            index++;
        }
        printf("%d", ans);
    }
    return 0;
}