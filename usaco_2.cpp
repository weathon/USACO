#include<iostream>
// #include<string>
using namespace std;

char substring_set[110][110];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    // From ios_base::sync_with_stdio(false); cin.tie(0) make io faster
    freopen("whereami.in","r",stdin);
    freopen("whereami.out","w",stdout);
    // The two line up here is from https://www.cnblogs.com/hjslovewcl/archive/2011/01/10/2314356.html
    // string mystr;
    int N;
    char mystr[103];
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>mystr[i];
    }
    for(int n=0;n<N;n++)//len of substring
    {
        int substring_index=0;
        // char substring[n];
        for(int i=0;i<(N-n)+1;i++){//the begining point of substring
            for(int l=0;l<n;l++){//遍历子串

                //在此处就检查是否重叠，节省时间
                // int ifadd=0
                // for(int scan_index=0;scan_index<substring_index;scan_index++)//可能出错
                // {

                // }
                // if(ifadd)
                // {
                //     substring_set[]
                // }
            }
            substring_index++;
        }
    }
    
}