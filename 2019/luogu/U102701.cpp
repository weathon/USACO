#include<iostream>
using namespace std;

int A[210010];
int B[210010];

int main()
{
    int N;
    cin>>N;
    for(int i=0;i<2N;i++)
    {
        if(i<N) cin>>A[i];
        else if(i>=N) cin>>B[i-N];
    }

    
    return 0;
}