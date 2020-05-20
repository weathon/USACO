#include<iostream>
#include <unordered_set>
using namespace std;

unordered_set <int> a;
int main()
{
//     int a[5]={0,1,2,3,4};
//     for(int i=0;a[i]!=3;i++) cout<<i<<endl;
a.insert(1);
a.insert(3);
a.insert(2);
cout<<a.count(1)<<endl;
a.erase(1);
cout<<a.count(1)<<endl;


}