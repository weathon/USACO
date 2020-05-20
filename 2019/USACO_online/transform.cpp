/*
ID: wguo6352
TASK: transform
LANG: C++14                 
*/

char A[15][15];
char B[15][15];
char tmp[15][15];

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void)
{
    freopen("transform.in", "r", stdin);
    freopen("transform.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> A[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> B[i][j];

    int count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (B[i][j] == A[n + 1 - j][i])
                count++;
    if (count == n * n)
    {
        cout << 1 << endl;
        return 0;
    }

    count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (B[i][j] == A[n + 1 - i][n + 1 - j])
                count++;
    if (count == n * n)
    {
        cout << 2 << endl;
        return 0;
    }

    count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (B[i][j] == A[j][n + 1 - i])
                count++;
    if (count == n * n)
    {
        cout << 3 << endl;
        return 0;
    }

    count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (B[i][j] == A[i][n + 1 - j]) //x and y issue
                count++;
    if (count == n * n)
    {
        cout << 4 << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            tmp[i][j] = A[i][n + 1 - j];

    count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (B[i][j] == tmp[n + 1 - j][i])
                count++;
    if (count == n * n)
    {
        cout << 5 << endl;
        return 0;
    }

    count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (B[i][j] == tmp[n + 1 - i][n + 1 - j])
                count++;
    if (count == n * n)
    {
        cout << 5 << endl;
        return 0;
    }

    count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (B[i][j] == tmp[j][n + 1 - i])
                count++;
    if (count == n * n)
    {
        cout << 5 << endl;
        return 0;
    }

    count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (B[i][j] == A[i][j])
                count++;
    if (count == n * n)
    {
        cout << 6 << endl;
        return 0;
    }

    cout << 7 << endl;
    return 0;
}