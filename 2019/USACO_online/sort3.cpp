/*
ID: wguo6352
TASK: sort3
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int numlist[2000];
int numlist2[2000];
int tong[2000];
int difference[2000];
// int Atong[2000];
// int Btong[2000];
// int Ctong[2000];

// vector <int> A,B,C;
int a[11][11];
// int b[4][4];
// int c[4][4];

// bool a(int i,int j){ return i>j;}

int main()
{
    freopen("sort3.in", "r", stdin);
    freopen("sort3.out", "w", stdout);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> numlist[i];
    for (int i = 0; i < N; i++)
        numlist2[i] = numlist[i];
    sort(numlist,numlist+N);
    int count=0;
    for(int i=0;i<N;i++)
    {
        if(numlist2[i]!=numlist[i])
        {
            count++;
            // if(numlist[i]==1)
            // {
            //     A.push_back(numlist[i]);
            // }
            // else if(numlist[i]==2)
            // {
            //     B.push_back(numlist2[i]);
            // } 
            // else if(numlist[i]==3)
            // {
            //     C.push_back(numlist2[i]);
            // }
            a[numlist2[i]][numlist[i]]++;
        }
    }
    // int sum=0;
    // for(int i=0;i<N;i++)
    // {
        
    // }
    count+=abs(a[2][1]+a[3][1]+a[3][2]-a[1][2]-a[1][3]-a[2][3]);
    // if(sum!=0) 

    cout<<(count)/2<<endl;
    
    return 0;
}
// https://www.luogu.com.cn/problem/P1459
// 出现了特殊情况，a[3][3]出现了数字，没事，看错了
//