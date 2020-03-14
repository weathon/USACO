#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <hash_map>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;

int N;
int ground[300][300];
// char tong[90000];突然想到样例很大，但是我可以用map啊，题解说的
//本来的想法是穷举两两组合
//现在发现和上次一样，只需要琼剧联通就可以了（题解）
//但是要注意，例题中的再次练会原来的
// vector <int> tong;

int dump(int x,int color)//已经填好色了，只需要统计数量  
{
    
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            cin >> ground[i][j];
            tong[ground[i][j]]=1;
        }


    
    return 0;
}
