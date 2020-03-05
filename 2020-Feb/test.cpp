#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main()
{
    int a=0,b=9;
    // for(long long i=0;i<10000000000000000000000;i++)
    // for(long long i=0;i<100;i++)
    int tmp;
    for(long long i=0;i<100000000;i++)
    {
        // swap(a,b);
        tmp=a;
        a=b;
        b=tmp;
    }
    return 0;
}