#include <iostream>
using namespace std;

int A[20];
int B[20];

// int Atong[2000];
int Btong[2000];

// void copy(int a[], int b[]) for (int i = 0; i < 20; i++) b[i] = a[i];

int main()
{
    for (int i = 0; i < 10; i++)
        cin >> A[i];
    for (int i = 0; i < 10; i++)
        cin >> B[i];
    //Since the times of dfs is constand, why not use loop?
    // int free1 = 10,
    //     free2 = 10;//Start from 0 and doesn't include this number
    int mysum=0;//B tong
    int temp1,temp2;
    for (int i = 0; i < 10; i++)
    {
        //first
        mysum+=A[i];
        B[11] = A[i];
        for (int j = 0; j < 11; j++)
        {
            //second
            A[11
            int temp1,temp2;]=B[j];//j not i
            mysum-=B[j];//same as last line
            for (int k = 0; k < 10; k++)
            {
                //first
                B[11]=A[k];
                mysum+=A[k];
                for (int l = 0; l < 11; l++)
                {
                    //second
                    // A[10]=B[l];
                    Btong[mysum-B[l]]=1;
                }
                mysum-=A[k];
            }
            mysum+=B[j];
        }
        mysum-=A[i];
    }
    int count=0;
    for(int i=0;i<2000;i++)
        if(Btong[i]==1)
            count++;
    cout<<count<<endl;
    return 0;
}