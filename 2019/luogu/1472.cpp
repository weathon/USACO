#include <iostream>
using namespace std;

const int Mod = 9901;
int n, k;
long long f[210][210];

int main()
{
    cin >> n >> k;
    // for (int i = 0; i < 210; i++)
    // {
    //     f[0][i] = 1;
    //     f[1][i] =1;//???Will not affect because the n of this is not enough?
    // }
    f[1][1] = 1;                    //Still that questions, do we need to fill in all them 1?(The first column?)
    for (int i = 3; i <= n; i += 2) //The start point  was i=3?
    {
        for (int j = 2; j <= k; j++) //num of   i is from 3
        {
            for (int myleft = 1; myleft < i; myleft += 2) //At least at myleft, but this n is not the root problem's n, also need -1 (Itself)
            {                                             //Cannot myleft<=i, if "=" then it self is 0?
                // int myright=n-myleft-1;//not n, because it is not set yet
                int myright = i - myleft - 1; //Father problem's value ans sub-
                //Num of ways, not the max!
                //All with depth x-1
                f[i][j] += (f[myleft][j - 1] * f[myright][j - 1]) % Mod;
                //myleft is x-1, y is anything
                if (myleft != myright)
                {
                    long long mymax = 0;
                    for (int o = 1; o <j; o++) //Just take the last one?  Not <=j
                    {
                        // if (f[myright][o] > mymax)
                            mymax += f[myright][o]%Mod;
                    }
                    f[i][j] += (f[myleft][j - 1] * mymax) % Mod;

                    //The other way
                    mymax = 0;
                    for (int o = 1; o < j ; o++) //Just take the last one?
                    {
                        // if(f[myleft][o]>mymax) mymax=f[myright][o];
                        // if (f[myleft][o] > mymax)
                            mymax += f[myleft][o]%Mod;
                    }
                    // f[i][j]+=(f[myleft][j-1]*mymax)%Mod;
                    f[i][j] += (f[myright][j - 1] * mymax) % Mod;//Wrong Mod way
                    f[i][j]=f[i][j]%Mod;
                }
            }
        }
    }

    //Debug, at last var?
    cout << f[n][k]<< endl; //By debug, f[n][k] and f[n][k-1] is both 2, that makes it 0
    // My ans is 21610, no mod?
    return 0;
}