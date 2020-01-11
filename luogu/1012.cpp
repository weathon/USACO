#include<iostream>
#include<algorithm>
using namespace std;

int data[1000];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>data[i];
	}
	sort(data,data+n);
	for(int i=0;i<n;i++) cout<<data[i];
	return 0;
}
