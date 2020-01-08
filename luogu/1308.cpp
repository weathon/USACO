#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string lowercase(string a)
{
    for(int i=0;i<a.length();i++)
    {
        if(a[i]>='A' and a[i]<='Z')
        {
            a[i]=32+a[i];
        }
    }
    return a;
}

int main()
{
    // freopen("1308.in","r",stdin);
    string word, ar;
    cin >> word;
    word=lowercase(word);
    // cin.getline(ar,1000000);
    //用getline还要分割，直接cin
    string thisword;
    int first=1;
    int ifex=0;
    int index=0;
    int count=0;
    int firstplace;
    while (cin>>thisword)//https://blog.csdn.net/liuchuo/article/details/67081824
    {
        
        if(lowercase(thisword)==word and first==1)
        {
            // cout<<index<<endl;
            firstplace=index;
            ifex=1;
            first=0;
        }
        if(lowercase(thisword)==word) 
        {
            count++;
        }
        index+=thisword.length()+1;//index不是单词数量而是字母
        if(getchar()=='\n') break;
    }
    if(ifex==0) cout<<-1<<endl;
    else cout<<count<<" "<<firstplace<<endl;//顺序
    return 0;
}