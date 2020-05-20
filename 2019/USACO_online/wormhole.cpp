/*
ID: wguo6352
TASK: wormhole
LANG: C++14                 
*/

// NO COW ANYMORE!!!

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

struct mystack
{
    int list[10];
    int pointer = 0;
    int pop()
    {
        pointer--;
        return list[pointer];
    }
    void push(int item)
    {
        list[pointer] = item;
        pointer++;
    }
    bool ifin(int item)
    {
        for (int i = 0; i < pointer; i++)
        {
            if (item == list[i])
                return true;
        }
        return false;
    }
};

int N;
struct xy
{
    int x, y;
};

struct mypair
{
    int a, b;
};

xy holes[30];
int main(void)
{
    freopen("wormhole.in", "r", stdin);
    // freopen("wormhole.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> holes[i].x >> holes[i].y;
    }
    mystack used;
    for (int first1 = 0; first1 < N; first1++)
    {
        for (int first2 = 0; first2 < N; first2++)
        {
            mypair firstpair;
            firstpair.a = first1;
            firstpair.b = first2;
            for (int second1 = 0; second1 < N; second1++)
            {
                for (int second2 = 0; second2 < N; second2++)
                {
                    mypair secondpair;
                    secondpair.a = second1;
                    secondpair.b = second2;
                    
                }
            }
        }
    }
    return 0;
}