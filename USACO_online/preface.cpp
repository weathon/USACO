/*
ID: wguo6352
TASK: preface
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <unordered_map>
using namespace std;

int N;
unordered_map <char,long long> mymap;
unordered_map <char,long long> totalmymap;

// unordered_map <char,long long> how_many_before_reach_to;
int tmp;

int main()
{
    // freopen("preface.in", "r", stdin);
    // freopen("preface.out","w",stdout);
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        tmp=i/1000;
        mymap['M']=tmp;
        tmp=i%1000;
        mymap['D']=tmp/500;
        tmp=tmp%500;
        mymap['C']=tmp/100;
        tmp=tmp%100;
        mymap['L']=tmp/50;
        tmp=tmp%50;
        mymap['X']=tmp/10;
        tmp=tmp%10;
        mymap['V']=tmp/5;
        tmp=tmp%5;
        mymap['I']=tmp;

        if(mymap['I']>=4)
        {
            mymap['I']=1;
            mymap['V']++;
        }
        if(mymap['V']>=2)
        {
            mymap['I']=1;
            mymap['X']++;
        }
        if(mymap['X']>=4)
        {
            mymap['I']=1;
            mymap['L']++;
        }
        if(mymap['L']>=2)
        {
            mymap['L']=1;
            mymap['C']++;
        }
        if(mymap['C']>=4)
        {
            mymap['C']=1;
            mymap['D']++;
        }
        if(mymap['D']>=2)
        {
            mymap['D']=1;
            mymap['M']++;
        }
        // cout<<mymap['I']<<endl;
        totalmymap['I']+=mymap['I'];
        totalmymap['V']+=mymap['V'];
        totalmymap['X']+=mymap['X'];
        totalmymap['L']+=mymap['L'];
        totalmymap['C']+=mymap['C'];
        totalmymap['D']+=mymap['D'];
        totalmymap['M']+=mymap['M'];
    }
    char mylist[7]={'I','V','X','L','C','D','M'};
    for(char i:mylist) if(totalmymap[i]!=0) cout<<i<<" "<<totalmymap[i]<<endl;
    return 0;  
}