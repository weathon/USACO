#include <iostream>
using namespace std;
// int a;

void foo(int b) { cout << b << endl; }

int main()
{
    foo(1);
    int a[3] = {1, 2, 3};
    std::cout << a[-1] << std::endl;
}