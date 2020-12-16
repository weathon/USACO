#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
//sort as event
int N;
struct customer
{
    int time;
    int event;//0 in, 1 out
};
customer tmp;
vector <customer> mylog;
int currenet;
int mymax;


bool cmp(customer a,customer b)
{
    return a.time<b.time;
}

int main(){
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>tmp.time;
        tmp.event=0;
        mylog.push_back(tmp);
        cin>>tmp.time;
        tmp.event=1;
        mylog.push_back(tmp);
    }
        
    sort(mylog.begin(),mylog.end(),cmp);
    for(auto ii:mylog)
    {
        if(ii.event==0){
            currenet++;
        }
        else{
            currenet--;
        }
        if(currenet>mymax) mymax=currenet;
    }
    cout<<mymax<<endl;
    return 0;
}