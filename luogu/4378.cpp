#include <iostream>
#include <string>
#include <fstream>
using namespace std;

long long A[100100];

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
    while (not sorted)
    {
        sorted = true;
        count++;
        for (int i = 0; i <= N - 2; i++)
            if (A[i + 1] < A[i])
            {
                b = A[i];
                A[i] = A[i + 1];
                A[i + 1] = b;
            }
        for (int i = N - 2; i >= 0; i--)
            if (A[i + 1] < A[i])
            {
                b = A[i];
                A[i] = A[i + 1];
                A[i + 1] = b;
            }
        for (int i = 0; i <= N - 2; i++)
            if (A[i + 1] < A[i])
                sorted = false;
    }
    cout<<count<<endl;
    return 0;
}