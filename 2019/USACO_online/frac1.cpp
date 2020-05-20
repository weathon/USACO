/*
ID: wguo6352
TASK: frac1
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int N;
struct f
{
    int A, B;
    double num=0;
    // int num=0;
};
f mylist[400000];
int pointer = 0;

bool compare(f aa,f bb)
{
    return aa.num<bb.num;

}
// int count;
bool hz(int a1,int b1)
{
    // counter=0;
    if(a1==0 and b1==1) return true;
    else if(a1==0) return false;
    else if(b1==0 and a1==1) return true;
    else if(b1==0) return false;

    for(int l=1;l<a1*b1;l++)
    {
        if(a1%l==0 and b1%l==0 and l!=1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    freopen("frac1.in", "r", stdin);
    freopen("frac1.out","w",stdout);
    cin >> N;
    int a;
    for (int b = 1; b <= N; b++)
    {
        for (a = 0; a <= b; a++)
        {
            if (hz(a,b))
            {
                mylist[pointer].A = a;
                mylist[pointer].B = b;
                mylist[pointer].num = float(a) / b;
                pointer++;
            }
            // else if (b % a != 0 or b==a)
            // {
            //     mylist[pointer].A = a;
            //     mylist[pointer].B = b;
            //     mylist[pointer].num = a / b;
            //     pointer++;
            // }
        }
    }
    sort(mylist,mylist+pointer,compare);
    for(int i=0;i<pointer;i++)
    {
        cout<<mylist[i].A<<"/"<<mylist[i].B<<endl;
    }
    return 0;
}