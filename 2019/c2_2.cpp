// #include <iostream>
// #include <fstream>
// #include <bits/stdc++.h>
// #include <unordered_set>
// #include <unordered_map>
// using namespace std;

// int N, M;
// int f[100006];
// int s[100006];
// unordered_set<int> maipianleft;
// int what_take_away[1000006];
// int what_we_need_sum[1000006];
// unordered_map<int, int> who_take_it;
// int tmpans[1000006];

// int main(void)
// {
//     freopen("cereal.in", "r", stdin); //wenjianyouwent
//     freopen("cereal.out", "w", stdout);
//     cin >> N >> M;
//     for (int i = 1; i <= N; i++)
//     {
//         scanf("%d%d", &f[i], &s[i]);
//     }
//     int j;
//     int ans = M;
//     for (int _ = 1; _ <= M; _++)
//     {
//         maipianleft.insert(_);
//     }

//     for (j = 1; j <= N; j++)
//     {
//         // cout << ans << endl;
//         tmpans[j] = ans;
//         who_take_it[s[j]] = j;
//         who_take_it[f[j]] = j; //不管实际上拿没拿都记录
//         if (maipianleft.count(f[j]))
//         {
//             maipianleft.erase(f[j]);
//             // ans++;
//         }
//         else
//         {
//             if (maipianleft.count(s[j]))
//             {
//                 maipianleft.erase(s[j]);

//                 // ans++;
//             }
//             else
//             {
//                 ans--;
//             }
//         }
//     }
//     // int ans=M;
//     //基本上放弃了
//     // cout<<ans<<endl;
//     // for(int iii:tmpans) cout<<tmpans<<endl;
//     stack <int> anss;
//     for (int i = N; i >= 1; i--)
//     {
//         if (who_take_it[f[i]] < i)
//         {
//             ans = tmpans[i] + 1;
//         }
//         else
//         {
//             if (who_take_it[s[i]] < i)
//             {
//                 ans = tmpans[i] + 1;
//             }
//             else
//             {
//                 ans = tmpans[i];
//             }
//         }
//         // cout << ans << endl;
//         anss.push(ans);
//     }
//     while(!anss.empty())
//     {
//         cout<<anss.top()<<endl;
//         anss.pop();
//     }
//     return 0;
// }

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int N, M;
int f[100006];
int s[100006];

int main(void)
{
    freopen("cereal.in", "r", stdin);
    freopen("cereal.out", "w", stdout);
    // ios_base::sync_with_stdio(false);
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        // cin >> f[i] >> s[i];
        scanf("%d%d",&f[i],&s[i]);
    }
    int j;
    int ans;
    for (int i = 0; i < N; i++)
    {
        ans = 0;
        unordered_set<int> maipianleft;
        // maipianleft.clear();
        for (int _ = 1; _ <= M; _++)
        {
            maipianleft.insert(_);
        }
        for (j = i + 1; j <= N; j++)
        {
            if (maipianleft.count(f[j]))
            {
                maipianleft.erase(f[j]);
                ans++;
            }
            else
            {
                if (maipianleft.count(s[j]))
                {
                    maipianleft.erase(s[j]);
                    ans++;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}