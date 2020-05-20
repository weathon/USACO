#include <iostream>
#include <string>
#include <fstream>
using namespace std;

long long A[100100];


struct Tnode{
    
};

int main()
{
    freopen("sort.in","r",stdin);
    freopen("sort.out","w",stdout); 
    int count = 0;
    bool sorted = false;
    int N;
    cin >> N;
    int b;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    cout<<count<<endl;
    return 0;
}