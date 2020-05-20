#include <iostream>
#include <fstream>
using namespace std;

// char data[1010][1010];
int f[1010][1010];
int n;
int freename = 1;
int vpointer[1010000][2];//not 1010
int vpointerfree = 0;
int cAs[1010000][2];//forget this is 3rd nvm
int Xdirection[4] = {1, -1, 0, 0};
int Ydirection[4] = {0, 0, 1, -1};

void dfs(int x, int y)
{
    // if (f[x][y] == -1) //empty
    //     return;
    // else
    // {
    vpointer[vpointerfree][0] = x;
    vpointer[vpointerfree][1] = y;
    vpointerfree++;
    for (int i = 0; i < 4; i++) //It will be a cicle between 4
    {
        if (f[x + Xdirection[i]][y + Ydirection[i]] == 0 and x + Xdirection[i] >= 0 and y + Ydirection[i] >= 0 and x + Xdirection[i] < n and y + Ydirection[i] < n) //-1 Boundary processing
        //-2 means has went
        {
            f[x + Xdirection[i]][y + Ydirection[i]] = -2;
            dfs(x + Xdirection[i], y + Ydirection[i]);
        }
    }
    // }
}

int main()
{
    freopen("perimeter.in","r",stdin);
    freopen("perimeter.out","w",stdout);
    
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            char a;
            cin >> a; //Coincidentally only read once(zhi du), not paying attention before
            if (a == '#')
                f[i][j] = 0;
            else
                f[i][j] = -1;
        }

    //ONce get a non-colored place, use dfs to color it
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (f[i][j] == 0)
            {
                dfs(i, j);
                for (int num = 0; num < vpointerfree; num++)
                {
                    f[vpointer[num][0]][vpointer[num][1]] = freename;
                    vpointer[num][0] =
                        vpointer[num][1] = 0;
                }
                freename++;
                vpointerfree = 0;
            }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << f[i][j] << " ";
    //     cout << endl;
    // }
    for(int x=0;x<n;x++) f[x][n]=-1;
    for(int y=0;y<n;y++) f[n][y]=-1; 
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(f[i][j]>=1)
            {
                //left and top
                if(i==0)
                    cAs[f[i][j]][0]++;
                if(j==0)//twice
                    cAs[f[i][j]][0]++;

            }
            if(f[i][j]==-1){
                for(int d=0;d<4;d++)
                {
                    if(i+Xdirection[d]>=0 and i+Xdirection[d]<n and j+Ydirection[d]>=0 and j+Ydirection[d]<n)
                        if(f[i+Xdirection[d]][j+Ydirection[d]]>=1)
                        {
                            cAs[f[i+Xdirection[d]][j+Ydirection[d]]][0]++;
                        }
                }
            }//Doesn't include the otherside 
            if(f[i][j]>=1)
            {
                cAs[f[i][j]][1]++;
            }
        }
    }
    // int mymaxlist[1010];
    // int mymaxlistfree=0;
    // int mymax=cAs[0][1];
    int mymaxs=0;
    long long myminc=100000000000;//=0, RE
    // cout<<freename;
    for(int d=1;d<=freename;d++)//freename or vpointerfree?
    {
        if(cAs[d][1]>mymaxs)
        {
            mymaxs=cAs[d][1];
            myminc=cAs[d][0];
        }
        else if(cAs[d][1]==mymaxs)
        {
            if(cAs[d][0]<myminc)
                myminc=cAs[d][0];
        }
    }
    cout<<mymaxs<<" "<<myminc<<endl;
    return 0;
}

/* 6
##....
....#.
.#..#.
.#####
...###
....##
1 2 -1 -1 -1 -1 
-1 -1 -1 -1 3 -1 
-1 3 -1 -1 3 -1 
-1 3 3 3 3 3 
-1 -1 -1 3 3 3 
-1 -1 -1 -1 3 3  */
// Why 1 2? >= 0 not >