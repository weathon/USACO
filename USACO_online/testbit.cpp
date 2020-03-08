#include <iostream>
#include <cstdio>
using namespace std;

int tmp;

int main()
{
    int tmp = 15;
    bool myleft = 1 & tmp;
    bool myup = 1 & (tmp >> 1);
    bool myright = 1 & (tmp >> 2);
    bool mydown = 1 & (tmp >> 3); //这里写了right
    printf("%d %d %d %d",myleft,myright,myup,mydown);
    return 0;
}