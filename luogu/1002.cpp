#include <iostream>
using namespace std;

struct mylong
{
    bool nonegitive1=true;
    int 
};


mylong checkerboard[32][32];
// long long count;

int main()
{
    int Bx, By, Mx, My;
    // for(int i=0;i<30;i++)
    //     for(int j=0;j<30;j++)
    //         checkerboard[i][j]=0;

    cin >> Bx >> By >> Mx >> My;
    checkerboard[Bx+1][By].setnum(1);
    // checkerboard[Bx][By+1]=0;
    
    // 不知道怎么写循环
    checkerboard[Mx][My].nonegitive1=false;
    checkerboard[Mx - 2][My - 1].nonegitive1=false;
    checkerboard[Mx - 1][My - 2].nonegitive1=false;
    checkerboard[Mx - 1][My + 2].nonegitive1=false;
    checkerboard[Mx - 2][My + 1].nonegitive1=false;
    checkerboard[Mx + 1][My + 2].nonegitive1=false;
    checkerboard[Mx + 2][My + 1].nonegitive1=false;
    checkerboard[Mx + 1][My - 2].nonegitive1=false;
    checkerboard[Mx + 2][My - 1].nonegitive1=false;
    for (int i = Bx; i >= 0; i--)
    {
        for (int j = By; j >= 0; j--)
        {
            if(checkerboard[i][j].nonegitive1)
            {
                int right,down;
                right=down=0;
                if(checkerboard[i+1][j].nonegitive1) right=checkerboard[i+1][j];
                if(checkerboard[i][j+1].nonegitive1) down=checkerboard[i][j+1];
                checkerboard[i][j]=down+right;
                cout<<i<<" "<<j<<" "<<checkerboard[i][j]<<endl;
            }
        }
    }
    cout<<checkerboard[0][0]<<endl;
    return 0;
}