#include<iostream>
using namespace std;

void a(int &b){ b++;}

int main()
{
    int b=0;
    a(b);
    cout<<b<<endl;
    return 0;
}