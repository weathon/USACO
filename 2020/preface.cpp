/*
ID: wguo6352
TASK: preface
LANG: C++14                 
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int N;
int count = 0;
// int tong[10];
map<char, int> tong;
char tong_key[10] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
// I   1     L   50    M  1000
// V   5     C  100
// X  10     D  500

// 1 10 100 1000
// 5 50 500
// 这样清晰很多

void counts(int);
int digs(int num)
{
    if (num < 10)
        return 1;
    else if (num < 100)
        return 2;
    else if (num < 1000)
        return 3;
    else if (num < 1000)
        return 4;
}

vector<int> number_in_the_form_of_array;

int main(void)
{
    // freopen("preface.in", "r", stdin);
    // freopen("preface.out","w",stdout);
    int N;
    cin >> N; //forget
    for (int i = 0; i < 7; i++)
    {
        // tong.insert(tong_key[i],0);
        tong[tong_key[i]] = 0;
    }

    for (int _ = 1; _ <= N; _++)
    {
        counts(_);
    }
    // cout<<count<<endl;
    for (int i = 0; i < 7; i++)
    {
        if (tong[tong_key[i]] == 0)
            continue;
        cout << tong_key[i] << " " << tong[tong_key[i]] << endl;
    }
    return 0;
}

char dig1sign[10] = {'I', 'X', 'C', 'M'};
char dig5sign[10] = {'V', 'L', 'D'};

void counts(int n)
{
    number_in_the_form_of_array.clear();
    //Dig by dit
    while (1)
    {
        // cout<<n<<endl;
        if (n == 0)
            break;
        int thisdig = n % 10;
        n = n / 10;
        number_in_the_form_of_array.push_back(thisdig);
    }
    // cout<<number_in_the_form_of_array.size(); 提醒要clear
    // for (int ii = number_in_the_form_of_array.size() - 1; ii >= 0; ii--)
    for (int ii = 0; ii < number_in_the_form_of_array.size(); ii++)
    {
        if (number_in_the_form_of_array[ii] == 0)
            continue;
        else if (number_in_the_form_of_array[ii] < 4)
            tong[dig1sign[ii]] += number_in_the_form_of_array[ii]; //+=number_in_the_form_of_array[ii]
        else if (number_in_the_form_of_array[ii] == 4)
        {
            tong[dig1sign[ii]]++;
            tong[dig5sign[ii]]++;
        }
        else if (number_in_the_form_of_array[ii] == 5)
            tong[dig5sign[ii]]++;
        else if (number_in_the_form_of_array[ii] <= 8)
        {
            tong[dig5sign[ii]]++;
            tong[dig1sign[ii]] += number_in_the_form_of_array[ii] - 5;
        }
        else if (number_in_the_form_of_array[ii] == 9)
        {
            tong[dig1sign[ii]]++;
            tong[dig1sign[ii+1]]++;
        }
    }
}