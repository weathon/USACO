#include<iostream>
#include<algorithm>
using namespace std;

int N;
int data[100005];

int main()
{
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>data[i];
    }
    sort(data,data+N);//(sizeof(data)/sizeof(data[0])) 不能排序整个，不然全是0 也不用N*size
    //前多少的中位数不是排序后的

    for(int i=1;i<(N/2)*2;i+=2)
    {
        sort(data,data+i);
        cout<<data[i/2]<<endl;
    }
    if(N%2==1)
    {
        sort(data,data+N);
        cout<<data[N/2]<<endl;
    }
    return 0;
}