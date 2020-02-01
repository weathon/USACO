#include <iostream>
#include <fstream>
using namespace std;

int N;
int b[1100];
// int used[1100];//methon of Mark, not a list? Yes, do not need to scan the whole list
// int anslist[1100];
int zeros[1100];
int zeros2[1100];

void dfs(int index, int lastone, int used[1100], int myans[1100])
{
    // cout<<index<<" "<<lastone<<endl;
    if (index == N - 2)
    {
        //Finish!
        for (int i = 0; i < index ; i++)
            cout << myans[i] << " ";
        cout<<lastone<<" "<<b[index]-lastone;//if this if put after for, don't needs this
        exit(0); //forget this when debug
    }
    else if(N==2)
    {
        cout<<lastone<<" "<<b[index-1]-lastone;
        exit(0);
    }
    // cout<<0;
    for (int i = 1; i <=N; i++)
    {
        // if (used[1] != 1 and b[index] - i != i and i + lastone == b[index] and i<b[index])//old:i + lastone == i  used[l]
        if (used[i] != 1 and b[index] - i != i and i + lastone == b[index] and i<b[index])//old:i + lastone == i
        {
            // cout<<"+"<<i<<endl;;
            //not used
            used[i] = 1;
            myans[index] = lastone;
            // dfs(index + 1, b[index] - i, used, myans); Not b[index] - i,creat a loop
            dfs(index + 1,i, used, myans);
            used[i] = 0;
        }
    }
}

int main()
{
    freopen("photo.in", "r", stdin);
    freopen("photo.out", "w", stdout);
    cin >> N;//If N is 2, then has not output
    // cout<<N;
    for (int i = 0; i < N - 1; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= N; i++)
    {
        if (b[0] - i != i and i<b[0])
        {
            // cout<<b[i]<<i;
            zeros[i] = 1;
            zeros2[0] = i;
            dfs(1, b[0]-i, zeros, zeros2);// i and index
            zeros2[0] = 0;
            zeros[i] = 0;
        }
    }
    return 0;
}

// IN: 3579
// Out should be 1 2 3 4 5 
// 2 1 4 3 6