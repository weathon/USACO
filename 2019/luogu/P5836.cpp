#include <bits/stdc++.h>
using namespace std;

int N, M;
char which_kind_of_cows_i_like[100005];
char which_kind_of_cows_farm_i_has[100005];
int A[100005];
int B[100005];
int mytree[100005];
int tmp1, tmp2;
// vector<int> asatring;
int the_number_where_it_got_different = -1;
int myroot;
vector<int> astring;
vector<int> bstring;

int main()
{
    // freopen("P5836.in", "r", stdin); //原来是这个
    cin >> N >> M;
    for (int i = 1; i <= N; i++) //还是弄错
    {
        cin >> which_kind_of_cows_farm_i_has[i];
    }
    for (int i = 0; i < N - 1; i++)
    {
        cin >> tmp1 >> tmp2;
        mytree[tmp2] = tmp1;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i] >> which_kind_of_cows_i_like[i];
    }
    int pointer = A[0];

    while (pointer != 0) //0相当于NULL
    {
        pointer = mytree[pointer];
        myroot = pointer;
    }
    for (int i = 0; i < M; i++)
    {
        if (A[i] == B[i])
        //不一定是完全相等，有可能是 0，1，2和0，1，2，3，4 眼睛辣
        {
            if (which_kind_of_cows_farm_i_has[A[i]] == which_kind_of_cows_i_like[i])
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
            continue;
        }

        astring.clear();
        bstring.clear();

        // cout<<myroot<<endl; 第一次root为1,第二次为0,看错输出而已，这个不用每次都做所以TLE?
        pointer = A[i];
        while (pointer != myroot)
        {
            astring.push_back(pointer); //分不清A和mytree
            pointer = mytree[pointer];  //把pointer携程A[i] 警告
        }
        astring.push_back(myroot);
        pointer = B[i];
        while (pointer != myroot)
        {
            bstring.push_back(pointer); //分不清A和mytree
            pointer = mytree[pointer];  //把pointer携程A[i] 警告
        }
        bstring.push_back(myroot);
        reverse(astring.begin(), astring.end());
        reverse(bstring.begin(), bstring.end());
        the_number_where_it_got_different = -1;

        for (int ii = 0; ii < min(astring.size(), bstring.size()); ii++) //<= or <
        {
            if (astring[ii] != bstring[ii])
            {
                // the_number_where_it_got_different = astring[ii - 1];
                the_number_where_it_got_different = ii - 1; //还是分不清index和value
            }
        }
        if (the_number_where_it_got_different == -1)
        {
            bool ians = 0;

            //0,1,2,3 and 0,1,2,3,4,5
            if (astring.size() > bstring.size()) //代码自己都看不懂了，查找整个路径是不是同色即可
            {
                for (int _ = the_number_where_it_got_different; _ < astring.size(); _++)
                {
                    if (which_kind_of_cows_i_like[i] == which_kind_of_cows_farm_i_has[astring[_]])
                        ; //index
                    {
                        // cout << 1;
                        ians = 1;
                        break;
                    }
                }
                cout << ians;
                continue;
            }
            else
            {
                for (int _ = the_number_where_it_got_different; _ < astring.size(); _++)
                {
                    if (which_kind_of_cows_i_like[i] == which_kind_of_cows_farm_i_has[bstring[_]])
                    {
                        ians = 1;
                        break;
                    }
                }
                cout << ians;
                continue;
            }
        }
        // cout<<"error";
        // return -1;//去掉这个反而AC了一个点
        bool mystart = false;
        int ans = 0;
        int myindex = 0;
        for (auto ii : astring)
        {
            if (myindex == the_number_where_it_got_different)
                mystart = true;
            if (mystart)
            {
                if (which_kind_of_cows_farm_i_has[ii] == which_kind_of_cows_i_like[i])
                // cout << "1";
                {
                    ans = 1;
                    break;
                }
                // continue;
            }
            myindex++;
        }
        mystart = false;
        myindex = 0;
        for (auto ii : bstring) //被ii混了？
        {
            if (myindex == the_number_where_it_got_different) //index and value
                /*
                (gdb) p ii
                $12 = 3
                (gdb) p the_number_where_it_got_different 
                $13 = 2
                */
                mystart = true;
            if (mystart)
            {
                if (which_kind_of_cows_farm_i_has[ii] == which_kind_of_cows_i_like[i])
                {
                    ans = 1;
                    break;
                }
                // continue;
            }
            myindex++;
        }
        cout << ans;
    }
    return 0;
}