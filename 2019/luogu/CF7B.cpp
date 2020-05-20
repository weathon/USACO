#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

int t, m;
int memory[200]; //0是未分配，其他的是标号
string commond;
int x;
int id = 1;
// int tong_id_and_size[300];

int main()
{
    freopen("CF7B.in","r",stdin);
    cin >> t >> m;
    for (int __ = 0; __ < t; __++)
    {
        cin >> commond;
        if (commond == "alloc")
        {
            cin >> x;
            bool found = false;
            int count = 0;
            for (int i = 0; i < m; i++)
            {
                if (memory[i] == 0)
                    count++;
                else
                    count = 0;
                if (count == x)
                {
                    found = true;
                    id++;
                    for (int _ = i; _ > i - x; _--)//不是i++?
                        memory[_] = id - 1;
                    cout << id-1 << endl;//加了一个-1就很多null?
                    break;//忘了
                }
            }
            if (found == false)
            {
                cout << "NULL" << endl;
            }
        }
        else if (commond == "erase")
        {
            cin >> x;
            bool found = false;
            //不能单独比较空余，因为序号不是连续的
            for (int i = 0; i < m; i++)
            {
                if (memory[i] == x)
                {
                    found = true;
                    for (int j = i; memory[j] == x; j++)
                    {
                        memory[j] = 0;
                    }
                }
                if (found == true)
                    break;
            }
            if (!found)
                cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
        }
        else
        {
            int emptycount = 0;
            for (int i = 0; i < m; i++)
            {
                if (memory[i] == 0)
                    emptycount++;
                else
                {
                    for (int j = i - 1; j >= i - emptycount; j--) //先把前面的填上
                    {
                        memory[j] = memory[i];
                    }
                    int k;
                    for (k = i; memory[k] == memory[i]; k++)//条件没弄清楚
                        ;
                    for(int j=k;j>k-emptycount;j--) memory[j]=0;
                    // i=; 这只是优化，可以先不做
                    emptycount = 0;
                }
            }
        }
    }
    return 0;
}