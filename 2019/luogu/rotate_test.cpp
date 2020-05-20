#include<iostream> 
#include<fstream> 
#include<bits/stdc++.h> 
using namespace std; 

int main(void) 
{ 
    // freopen("input.in","r",stdin); 
    // freopen("output.out","w",stdout); 
    int a[8]={0,1,2,3,4,5,6,7};
    rotate(a,a+5,a+8);
    for(int ii:a) cout<<ii<<" ";
    return 0;
}
