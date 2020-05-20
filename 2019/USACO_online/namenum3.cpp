/*
ID: wguo6352
TASK: namenum
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string mydict[5003];

int n = 0;
char numlist[20];
int hasans = 0;
// 原来还有一个问题就是没看清楚没有Q!!!
// != numlist[j] if (tmp == '\n') break;
// numlist[i] = tmp;
// n++;
// // }
// freopen("namenum.in", "r", stdin);
// freopen("namenum.out", "w", stdout);
int main()
{
//     freopen("namenum.in", "r", stdin);
// freopen("namenum.out", "w", stdout);
    // ifstream fin;
    // fin.open("dict.txt");
    // cout<<myindex;
    for (int i = 0; true; i++)
    {
        char tmp;
        // cin >> tmp;
        tmp = getchar();
        // cout<<tmp;
        if (tmp == '\n' or tmp=='\r')//原来就是这里要\r
            break;
        numlist[i] = tmp;
        n++;
    }
        int myindex = 0;
    // while (cin >> mydict[myindex])
    // {
        // if (mydict[myindex].length() == n)
        // myindex++;
    // }
    // cout<<n;
    for(int i=0;i<4617;i++) cin >> mydict[i];
    for (int i = 0; i < 4617; i++)//这里不可以继续用index,但是之前上面是有while啊
    {
        string mys;
        mys = mydict[i];
        if (mys.length() != n)
            continue;
        else
        {
            bool ifans = true;
            for (int j = 0; j < n; j++)
            {
                // cout<<mys<<endl;
                if (mys[j] > 'Q')
                {
                    
                    // cout << mys[j] << " " << ((mys[j] - 'A') - 1) / 3 + 2 << " "<<numlist[j]<< endl;
                    if (((mys[j] - 'A') - 1) / 3 + 2 != int(numlist[j] - '0')) //forget the int
                    {
                        ifans = false;
                        break;
                    }
                }
                else
                {
                    // cout << mys[j] << " " << (mys[j] - 'A') / 3 + 2<<endl;
                    // cout << mys[j] << " " << ((mys[j] - 'A') ) / 3 + 2 << " "<<numlist[j]<< endl;

                    if ((mys[j] - 'A') / 3 + 2 != int(numlist[j] - '0'))
                    {
                        ifans = false;

                        break;
                    }
                }

                //place it out side of for ? so the break does not work
            }
            if (ifans)
            {
                cout << mys << endl;
                hasans++;
            }
            // cout << mys.length() << endl;
        }
    }
    // cout<<hasans;
    if (hasans == 0)
        cout << "NONE" << endl;
    return 0;
}