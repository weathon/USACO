#include<iostream>
#include<stdio.h>
#include<fstream>
#include<map>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int digs;
int stack[20];
int stackpointer;

inline bool ifprime(int n)
{
    
}

inline bool ifsymmetry(int n)
{
    digs=int(log10(n))+1;
    stackpointer=0;
    for(int j=1;j)
}

int a,b;
int main()
{
    scanf("%d%d",&a,&b);
    if(a%2==0) a++;
    for(int i=a;i<=b;i+=2)
    {
        if(ifsymmetry(i))
        {
            if(ifprime(i))
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}