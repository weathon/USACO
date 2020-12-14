#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
int N, K;
char space[105][15];
int color_count[105][15];
int went[105][15];

void dfss(int, int, char);
void dfsd(int, int, char);
bool have_change;
int mycount;

void clearwent()
{
    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 15; j++)
            went[i][j] = 0;
}

int main()
{
    // freopen("mooyomooyo.in", "r", stdin);
    // freopen("mooyomooyo.out", "w", stdout);
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        space[i][0] = '-';
        space[i][11] = '-';
        for (int j = 1; j <= 10; j++)
        {
            cin >> space[i][j];
        }
    }
    for (int i = 0; i < 12; i++)
    {
        space[N][i] = '-';
    }
    //quniandongtian
    // for(int i=0;i<=N;i++)
    // {
    //     for(int j=0;j<=11;j++)
    //     {
    //         cout<<space[i][j];
    //     }
    //     cout<<endl;
    // }
    while (1)
    {
        have_change = false;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j <= 11; j++) //yuanlaishifanlea
            {
                if (space[i][j] != '0' and space[i][j] != '-')
                {
                    mycount = 0;
                    clearwent();
                    // cout<<space[i][j]<<endl; jingquqianjiuyoubuming targetle
                    dfss(i, j, space[i][j]);
                    // cout << mycount << endl;
                    if (mycount >= K)
                    {
                        have_change=true;
                        clearwent();
                        dfsd(i, j, space[i][j]);
                    }
                }
            }
        }
        for (int i = N; i >= 0; i--)
        {
            for (int j = 0; j <= 11; j++)
            {
                if (space[i][j] != '-' and space[i][j] != '0' and space[i + 1][j] == '0')
                {
                    int location = i;
                    while (1)
                    {
                        if (space[location + 1][j] != '0')
                        {
                            space[location][j] = space[i][j];
                            space[i][j] = '0';
                            break;
                        }
                        location++;
                    }
                }
            }
        }
        if (!have_change)
        {
            for (int i = 0; i <= N; i++)
            {
                for (int j = 0; j <= 11; j++)
                {
                    if(space[i][j]!='-')cout << space[i][j];
                }
                cout << endl;
            }
            return 0;
        }
    }
}

void dfss(int x, int y, char target)
{
    // cou<<target<<endl;

    // cout<<x<<endl;
    // cout<<target<<endl;
    //touturanyun
    if (space[x][y] != target or went[x][y] == 1 or space[x][y] == '-') //or, not and - panduanbuyong,kendingbufdengu?
        return;
    else
    {
        mycount++;
        went[x][y] = 1;

        // for (int i = 0; i <= N; i++)
        // {
        //     for (int j = 0; j <= 11; j++)
        //     {
        //         cout << went[i][j];
        //     }
        //     cout << endl;
        // }
        // cout<<endl;
        //jiluwent
        dfss(x + 1, y, target);
        dfss(x, y + 1, target);
        dfss(x - 1, y, target);
        dfss(x, y - 1, target);
    }
}

void dfsd(int x, int y, char target)
{
    if (space[x][y] != target or went[x][y] == 1)
        return;
    space[x][y] = '0';
    went[x][y] = 1;
    dfsd(x + 1, y, target);
    dfsd(x, y + 1, target);
    dfsd(x - 1, y, target);
    dfsd(x, y - 1, target);
}
