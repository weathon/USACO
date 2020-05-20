#include <iostream>
#include <fstream>
using namespace std;

int N;
int pointesX[110];
int pointesY[110];

int main()
{
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out","w",stdout);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> pointesX[i] >> pointesY[i];
    }
    int maxans = 0;
    for (int i = 0; i < N; i++)
    { //遍历直角顶点
        int maxx = 0;
        for (int x = 0; x < N; x++)
        {
            if (pointesY[x] == pointesY[i])
            {
                if (abs(pointesX[x] - pointesX[i]) > maxx)
                    maxx = abs(pointesX[x] - pointesX[i]);
            }
        }
        int maxy = 0;
        for (int y = 0; y < N; y++)
        {
            if (pointesX[y] == pointesX[i])
            {
                if (abs(pointesY[y] - pointesY[i]) > maxy)
                    maxy = abs(pointesY[y] - pointesY[i]);
            }
        }
        //不是循环内嵌套？
        int tmpans = maxx * maxy;
        if (tmpans > maxans)
            maxans = tmpans;
    }
    cout<<maxans<<endl;
    return 0;
}