/*
ID: wguo6352
TASK: beads
LANG: C++14                 
*/

#include <iostream>
#include <fstream>
using namespace std;

char chain[400];
char chainx3[1200];

int main()
{
	freopen("beads.in", "r", stdin);
	freopen("beads.out","w",stdout);
	int N;
	cin >> N;
	// getchar(); //remove the return
	// for (int i = 0; i < N; i++)
	int ii=0;
	while(cin>>chain[ii]) ii++;
	// for(int i=0;i<N;i++)
	// 	cout<<chain[i];
	for (int i = 0; i <= 3 * N - 3; i++)
		chainx3[i] = chain[i % N];
	int maxans = 0;
	// 没有理解题意，看翻译跳过了解释
	for (int i = N; i <= 2 * N; i++)
	{
		int thisans = 0;
		char myleft = chainx3[i];
		char myright = chainx3[i + 1];
		if (myleft == 'w')
		{
			for (int _ = i; _>N; _--)
			{
				if (chainx3[_] != 'w')
				{
					myleft = chainx3[_];
					break;
				}
			}
		}
		int p0;
		if (myright == 'w')
		{
			for (int _ = i+1; _<2*N; _++)
			{
				if (chainx3[_] != 'w')
				{
					myleft = chainx3[_];
					break;
				}
			}
		}
		p0=i-N-1;
		for (int p = i; p >= i-N; p--)//same as 68
		{
			if (chainx3[p] == myleft or chainx3[p] == 'w')
			{
				thisans++;
			}
			else
			{
				p0=i;	
				break;
			}
		}
		int p1=i-p0;
		for (int p = i + 1; p <= i+(N-p1) ; p++)//NO 2N (2*N) but i+N did before? NO,p1
		{
			if (chainx3[p] == myright or chainx3[p] == 'w')
			{
				thisans++;
			}
			else
			{
				break;
			}
		}
		if (thisans > maxans)
			maxans = thisans;
	}
	// maxans+=2;
	if(maxans>N) maxans=N;//toulan
	cout << maxans<<endl;
	return 0;
}