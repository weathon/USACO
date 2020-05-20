#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAXN 100000
 
int N,M,K;
int l[100],r[100];
int p[MAXN];
int cc[MAXN];
int pos[MAXN];
vector<int> A[MAXN+1];
int ans[MAXN];
 
int main() {
	freopen("swap.in","r",stdin);
	freopen("swap.out","w",stdout);
	cin >> N >> M >> K;
	for(int i=0;i<M;i++) {
		cin >> l[i] >> r[i];
		l[i]--,r[i]--;
	}
	for(int i=0;i<N;i++) {
		p[i] = i;
		for(int j=0;j<M;j++)
			if(p[i] >= l[j] && p[i] <= r[j])
				p[i] = r[j] + l[j] - p[i];
	}
	int C = 1;
	for(int i=0;i<N;i++) if(!cc[i]) {
		cc[i] = C;
		A[C].push_back(i);
		int j = p[i];
		if(j != i) pos[j] = 1;
		while(j != i) {
			A[C].push_back(j);
			cc[j] = C;
			if(p[j]!=i) pos[p[j]] = 1 + pos[j];
			j = p[j];
		}
		C++;
	}
	for(int i=0;i<N;i++)
		ans[A[cc[i]][(pos[i] + K)%A[cc[i]].size()]] = i;
	for(int i=0;i<N;i++)
		cout << ans[i]+1 << '\n';
} 