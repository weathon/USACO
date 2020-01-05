#include <iostream>
using namespace std;

int data[40];
int f[30000];

int main()
{
    for (int i = 0; i < 30000; i++)
        f[i] = 0;
    int V;
    cin >> V;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> data[i];
    f[0] = 1;
    for (int a = 0; a < n; a++)
    {
        for (int i = V; i >= 0; i--)
        {
            if (f[i] == 1)
            {
                f[i + data[a]]=1;
            }
        }
    }
    for (int i = V; i >= 0; i--)
    {
        if(f[i]==1){
            cout<<V-i<<endl;
            return 0;
        }
    }
    return 0;
}