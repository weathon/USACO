#include<iostream>
using namespace std;

int a[5]={1,2,3,4,5};//[ {写错了
int main()
{
	for(auto i:a) cout<<i<<endl;//如果要修改可以用指针
	//https://blog.csdn.net/FX677588/article/details/70157088
	return 0;
}
