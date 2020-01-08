#include <iostream>
#include <string>
using namespace std;


struct mylonglong{
    int num[40];
    int mypointer=0;
};

int rules[20][2];

void dfs(){

}

int main()
{
    string n;
    int k;
    cin>>n>>k;
    mylonglong org;
    for(int i=0;i<k;i++)
    {
        cin>>rules[i][0]>>rules[i][1];
    }

    for(int i=0;i<n.length();i++)
    {
        org.num[org.mypointer]=n[i]-'0';
        org.mypointer++;
    }

    dfs();
    return 0;
}

// 每一位之间不会相互影响,所以看到题解说检测每一位然后相乘即可