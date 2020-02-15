/*
ID: wguo6352
TASK: crypt1
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
using namespace std;

int N;
int numlist[20];

bool ifinnumlist(int a)
{
    for (int i = 0; i < N; i++)
    {
        if (a == numlist[i])
            return true;
    }
    return false;
}

int main(void)
{
    freopen("crypt1.in", "r", stdin);
    freopen("crypt1.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> numlist[i];
    }
    int count = 0;
    for (int _ = 0; _ < N; _++)
    {
        int a = numlist[_];
        for (int __ = 0; __ < N; __++)
        {
            int b = numlist[__];

            for (int ___ = 0; ___ < N; ___++)
            {
                int c = numlist[___];

                for (int ____ = 0; ____ < N; ____++)
                {
                    int d = numlist[____];

                    for (int _____ = 0; _____ < N; _____++)

                    {
                        int h = 0, g = 0, f = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0;
                        int e = numlist[_____];
                        h+=(c*e)%10;
                        g+=(c*e)/10;
                        g+=(b*e);
                        f=g/10;
                        g=g%10;
                        f+=a*e;
                        if(f>=10) continue;
                        k+=c*d;
                        j=k/10;
                        k=k%10;
                        j+=b*d;
                        i=j/10;
                        j=j%10;
                        i+=a*d;
                        if(i>=10) continue;
                        // h = (c * e) % 10;
                        // g = ((b * e) + (c / e) / 10) % 10;
                        // f = ((a * e) + (((b * e) + (c / e)/ 10) ) / 10);
                        // if (f >= 10)
                        // {
                        //     // break;
                        //     continue;
                        // }
                        // k = (d * c) % 10;
                        // j = ((b * d) + (d * c) / 10) % 10;
                        // i = ((a * d) + (((b * d) + (d * c)/ 10) ) / 10);
                        // if (i >= 10)
                        // {
                        //     // break;
                        //     continue;
                        // }
                        // o += h;
                        // n = (g + k) % 10;
                        // m = ((f + j) + (g + k) / 10) % 10;
                        // l = (i + (f + j) + (g + k) / 10) / 10;
                        o=h;
                        n+=g+k;
                        m+=n/10;
                        n=n%10;
                        m+=f+j;
                        l+=m/10;
                        m=m%10;
                        l+=i;
                        if (l >= 10)
                        {
                            // break;
                            continue;
                        }
                        int mylist[11] = {h, g, f, i, j, k, l, m, n, o};
                        bool ifbreak75 = false;
                        for (int testnum = 0; testnum < 10; testnum++)
                        {
                            if (not ifinnumlist(mylist[testnum]))
                            // else{
                            {
                                ifbreak75 = true;
                                break;
                            } //Didn't break the outer one
                            // }
                        }
                        if (ifbreak75)
                        {
                            continue;
                        }
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}