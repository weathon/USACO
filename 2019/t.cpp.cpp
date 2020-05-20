#include<iostream> 
#include<fstream> 
#include<bits/stdc++.h> 
using namespace std; 

int main(void) 
{ 
    // freopen("input.in","r",stdin); 
    // freopen("output.out","w",stdout); 
    int a[5]={3,5,2,3,6};
    sort(a,a+5);
    for(int i:a) cout<<i<<endl;
    return 0;
}
