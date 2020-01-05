#include <iostream>
// #include<string>
using namespace std;

int data[300000];
char ans2[300000];
int ans1[300000];
int ansfree = 1;
int myleft, myright; //表示左边和右边的位置

int main(void)
{
    for (int i = 0; i < 300000; i++)
        ans1[i] = -1;
    for (int i = 0; i < 300000; i++)
        ans2[i] = 'c';
    ans1[0] = -8;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> data[i];
    myleft = 0;
    myright = n - 1;
    int len=0;
    while (1)//为什么会多一个6？在结尾-1后面,宠幸调试又没有了,6只是长度，没有换行
    {
        if (myleft == myright)
            break;
        else if (data[myleft] < ans1[ansfree - 1] and data[myright] < ans1[ansfree - 1])
            break;
        else if (data[myleft] > ans1[ansfree - 1] and data[myright] < ans1[ansfree - 1]) //左边比现在大，右边比现在小
        {
            //取左边
            ans1[ansfree] = data[myleft];
            ans2[ansfree] = 'L';
            ansfree++;
            myleft++;
            len++;
        }
        else if (data[myleft] < ans1[ansfree - 1] and data[myright] > ans1[ansfree - 1]) //左边比现在小,右边比现在大
        {
            //取右边
            ans1[ansfree] = data[myright];
            ans2[ansfree] = 'R';
            ansfree++;
            myright--;
            len++;
        }
        else if (data[myleft] < data[myright] and data[myleft] > ans1[ansfree - 1]) //左边比右边小，同时左边比现在的数字大
        {
            //取左边
            ans1[ansfree] = data[myleft];
            ans2[ansfree] = 'L';
            ansfree++;
            myleft++;
            len++;
        }
        else if (data[myleft] > data[myright] and data[myright] > ans1[ansfree - 1]) //左边比右边大，同时右边比现在的数字大
        {
            //取右边
            ans1[ansfree] = data[myright];
            ans2[ansfree] = 'R';
            ansfree++;
            myright--;
            len++;
        }
    }
    cout << len << endl;
    for (int i = 1; i < 300000; i++)
    {
        if (ans2[i] == 'c')
            break;
        // cout<<" "<<ans1[i];
        cout << ans2[i];
    }
    return 0;
}