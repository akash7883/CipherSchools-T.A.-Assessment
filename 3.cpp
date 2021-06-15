#include<bits/stdc++.h>
#define watch(x) cout<<#x<<" : "<<x<<endl
#define all(x) x.begin(), x.end()
#define rep(i, a, n) for(int i = a; i < n; i++)
#define rep0(i, n) for(int i = 0; i < n; i++)
#define rep1(i, n) for(int i = 1; i <= n; i++)
#define pb push_back
#define out(x) cout<<x<<endl
#define outs(x) cout<<x<<" "
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
#define V_SUM_MAX 1000
#define N_MAX 100
#define W_MAX 10000000


int akash[V_SUM_MAX + 1][N_MAX];
bool v[V_SUM_MAX + 1][N_MAX];


int solveakash(int r, int i, int* w, int* val, int n)
{
	
	if (r <= 0)
		return 0;
	if (i == n)
		return W_MAX;
	if (v[r][i])
		return akash[r][i];
	v[r][i] = 1;
	akash[r][i]
		= min(solveakash(r, i + 1, w, val, n),
			w[i] + solveakash(r - val[i],
							i + 1, w, val, n));
	return akash[r][i];
}
int mw(int* w, int* val, int n, int c)
{
	for (int i = V_SUM_MAX; i >= 0; i--) {
		if (solveakash(i, 0, w, val, n) <= c) {
			return i;
		}
	}
	return 0;
}


int main()
{
    int n,k;
    cin>>n;
    int w[n];
    for(int i=0;i<n;i++)cin>>w[i];
    cin>>k;
    int val[k];
    for(int i=0;i<n;i++)cin>>val[i];
	int C;
    cin>>C;

	cout << mw(w, val, n, C);

	return 0;
}
