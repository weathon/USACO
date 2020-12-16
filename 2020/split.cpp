#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

#define FOR(n) for (int i = 0; i < n; i++)

int cowsx[50005];
int cowsy[50005];

int N;
int main()
{
    freopen("split.in", "r", stdin);
    // freopen("split.out","w",stdout);
    cin >> N;
    FOR(N)
    {
        cin >> cowsx[i] >> cowsy[i];
    }

    sort(cowsx, cowsx + N);
    sort(cowsy, cowsy + N);

    int maxdifferx = -1;
    int maxdiffery = -1;
    int x1, x2, y1, y2;
    for (int i = 1; i < N; i++)
    {
        // maxdifferx = max(cowsx[i] - cowsx[i - 1], maxdifferx);
        // maxdiffery = max(cowsy[i] - cowsy[i - 1], maxdiffery);
        if (cowsx[i] - cowsx[i - 1] > maxdifferx)
        {
            maxdifferx = cowsx[i] - cowsx[i - 1];
            x1 = cowsx[i - 1];
            x2 = cowsx[i];
        }
        if (cowsy[i] - cowsy[i - 1] > maxdiffery)
        {
            maxdiffery = cowsy[i] - cowsy[i - 1];
            y1 = cowsy[i - 1];
            y2 = cowsy[i];
        }
    }
    int full = (cowsx[N - 1] - cowsx[0]) * (cowsy[N - 1] - cowsy[0]);
    int after = (x1-cowsx[0])*(y1-cowsy[0])+(cowsx[N-1]-x1)*(cowsy[N-1]-y1);
    printf("%d %d %d %d\n",x1,x2,y1,y2);
    cout << after << endl;
    return 0;
}