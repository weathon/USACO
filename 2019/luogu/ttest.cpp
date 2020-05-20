#include<iostream> 
#include<fstream> 
#include<bits/stdc++.h> 
using namespace std; 

int main(void) 
{ 
    // freopen("input.in","r",stdin); 
    // freopen("output.out","w",stdout); 
    int a=0;
    int j;
    for(int i=0;i<100000;i++)
    {
        for(j=i;j<i+100000;j++)
        {
            a++;
        }
        a=0;
    }
    return 0;
}
