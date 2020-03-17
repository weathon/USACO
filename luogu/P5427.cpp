#include<iostream>
#include<vector>
using namespace std;

int N;
bool array[1005][1005];

void flipf(int f)
{
    for(int i=0;i<N;i++)
    {
        array[f][i]=!array[f][i];
    }
}

void flips(int s)
{
    for(int i=0;i<N;i++)
    {
        array[i][s]=!array[i][s];
    }
}

char tmp;

int main(void)
{
    cin>>N;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            {
                cin>>tmp;
                if(tmp=='L')
                {
                    array[i][j]=true;
                }
                else
                {
                    array[i][j]=false;
                }
                
            }
    
    
    for(int i=0;i<N;i++)
    {
        if(array[0][i]==false)
        {
            flips(i);
        }
    }

    for(int i=0;i<N;i++)
    {
        if(array[i][0]==false)
        {
            flipf(i);
        }
    }

    bool if00=true;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(!((array[i][j]==true and (i==0 or j==0)) or (i!=0 and j!=0 and array[i][j]==false)))
            {
                if00=false;
                break;
            }
        }
        if(if00==false) break;
    }
    if(if00)
    {
        cout<<"1 1"<<endl;
        return 0;
    }

    // vector <int> truecount;
    int truex=-1;
    int truey=-1;
    int truecount=0;
    int firstf=-1,firsts=-1;
    int firsttime=0;
    int ansx=-1,ansy=-1;
    for(int i=1;i<N;i++)
    {
        for(int j=1;j<N;j++)
        {
            if(array[i][j]==true)
            {
                truecount++;
                if(truex==-1) truex=i;
                if(truey==-1) truey=j;
                if(truex==i)
                {
                    firstf=i;
                }
                if(truey==j)
                {
                    firsts=i;
                }
                if(firsttime==0)
                {
                    firsttime=1;
                    ansx=i;
                    ansy=j;
                }
            }
        }
    }
    if(firsts!=-1) cout<<"1 "<<firsts+1<<endl;
    else if(firstf!=-1) cout<<firstf+1<<" 1"<<endl;
    else if(ansx!=-1){
        cout<<ansx+1<<" "<<ansy+1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}