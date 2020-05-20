#include <iostream>
#include <string>
using namespace std;

int Q;

struct mynum
{
    char num[20];
    int pointer = 0;
    int size;
    void get()
    {
        num[pointer] = getchar();
        if (num[pointer] ==  '\n' or num[pointer] == ' ')
        {
            num[pointer] = '\0';
            size=pointer-1;
            return;
        }
        pointer++;
    }
    void print(void)
    {
        // string ans="";
        for(int i=0;i<size;i++)
        {
            putchar(num[i]);
        }
    }
};
//原来是2^60,不用高精度，但是这样还是方便一些?

int main()
{
    cin >> Q;
    getchar();
    for (int i = 0; i < Q; i++)
    {
        mynum L, R;
        L.get();
        R.get();
        L.print();
        R.print();
    }
    return 0;
}