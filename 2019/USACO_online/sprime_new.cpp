/*
ID: wguo6352
TASK: sprime
LANG: C++14                 
*/
int N;

inline int ifprime(int num)
{
    if (num % 2 == 0 and num != 2) //漏了！=2，这个通过去掉一的限制找出
        return 0;
    if (num == 1 or num == 4 or num == 6)
        return 0;
    sroot = sqrt(num);
    for (k = 3; k <= num; k += 2) //这里改成2之后不用o2反而更慢了
    {
        if (num % (k) == 0 and k != num) //忘记了and后面的
        {
            return 0;
        }
    }
    return 1;
}

void dfs(int deepth)
{
    if(deepth==N)
    {
        cout<<
        return;
    }
}

int main()
{
    freopen("sprime.in", "r", stdin);
    freopen("sprime.out", "w", stdout);
    cin>>N;
    dfs(0);
    return 0;
}