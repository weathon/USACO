#include<iostream>
using namespace std;

int data[100000];

int Benchmark;
void quicksort(int i,int j)
{
    int oldj=j;
    int oldi=i;
    if(i==j) return;
    int newpoint;
    while(i<j)//防止刚好错过
    {
        while(data[i]<Benchmark and i<=oldj){ //要另外加上不能出界
            i++;//找到data[i]>Benchmark之前一直循环
        }
        while(data[j]>Benchmark and j>=oldi)
        {
            //找到data[j]<Benchmark之前一直循环
            j++;
        }
        int mid;
        mid=data[i];
        data[i]=data[j];
        data[j]=data[i];
    }
    Benchmark=data[i];
    quicksort(i,newpoint);
    quicksort(newpoint+1,j);
}


int main(void){
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>data[i];
    }
    cout<<0<<endl;
    Benchmark=data[0];
    quicksort(1,N-1);
    return 0;
}