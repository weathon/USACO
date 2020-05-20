/*
ID: wguo6352
TASK: friday
LANG: C++14                 
*/


#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int monthdays[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int dayscount[7];
int main(void)
{
	freopen("friday.in", "r", stdin);
	freopen("friday.out","w",stdout);
    int n;
    cin>>n;
    int count=0;
    for(int year=1900;year<1900+n;year++)
    {
        if(year%4==0 and year%100 !=0)
        {
            // int monthdays[12]={31,29,31,30,31,30,31,31,30,31,30,31};
            monthdays[1]=29;

        }
        else if(year%400==0)
        {
            // int monthdays[12]={31,29,31,30,31,30,31,31,30,31,30,31};
            monthdays[1]=29;

        }
        else{
            // int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            monthdays[1]=28;
        }
        for(int month=0;month<12;month++)
        {
            for(int days=0;days<monthdays[month];days++)
            {
                count++;
                if(count==8) count=1;
                if(days==12) dayscount[count]++;

            }
        }
    }
    cout<<dayscount[6]<<" ";
    cout<<dayscount[7]<<" ";
    for(int i=1;i<=4;i++)
    cout<<dayscount[i]<<" ";
    cout<<dayscount[5];
    cout<<endl;
    return 0;
}