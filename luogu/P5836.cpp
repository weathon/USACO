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

    for (int i = 0; i < M; i++)
    {
        vector<int> astring;
        vector<int> bstring;
        int pointer = A[i];
        // astring.push_back(pointer);
        // while(A[pointer]!=1)
        while (pointer != 1)
        {
            astring.push_back(pointer); //分不清A和mytree
            pointer = mytree[pointer];  //把pointer携程A[i] 警告
        }
        astring.push_back(1);
        // for(auto j:astring) cout<<j<<endl;
        // cout<<endl;
        int pointer = A[i];
        // astring.push_back(pointer);
        // while(A[pointer]!=1)
        while (pointer != 1)
        {
            astring.push_back(pointer); //分不清A和mytree
            pointer = mytree[pointer];  //把pointer携程A[i] 警告
        }
        astring.push_back(1);
    }
    return 0;
}