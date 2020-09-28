/*	[]__________[][][][]____[][][][][]__{}__[][][][]____[][][][][]__[][][][]
	[]__________[]______________[]__________[]__________[]__________[]____[]
	[]__________[][][][]________[]__________[][][][]____[]__________[]____[]
	[]__________[]______________[]________________[]____[]__[][][]__[]____[]
	[]__________[]______________[]________________[]____[]______[]__[]____[]
	[][][][]____[][][][]________[]__________[][][][]____[][][][][]__[][][][]
*/
#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
bool prime[100005]; 
void Sieve(int n) {
	memset(prime, true, sizeof(prime)); 
  
	for (int p=2; p*p<=n; p++) 
	{ 
		if (prime[p] == true) 
		{ 
			for (int i=p*p; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 
  
} 
vector<int>grapj[100005];
bool vis[100005];
void solve()
{
	int n;
	cin>>n;
	map<int,int>arr;
	for(int i=1;i<=n;i++)cin>>arr[i];
	map<int,int>f,ans,last;
	for(int i=1;i<=n;i++)
	{	
		ans[i]=-1;
		last[i]=0;
		f[i]=0;
	}
	for(int i=1;i<=n;i++)
	{
		int x=arr[i];
		f[x]=max(f[x],i-last[x]);
		last[x]=i;
	}
	for(int x=1;x<=n;x++)
	{
		f[x]=max(f[x],n+1-last[x]);
		for(int i=f[x];i<=n && ans[i]==-1;i++)
		{
			ans[i]=x;
		}
	}
	for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
	cout<<endl;
}	
signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
	   cin>>t;
	while(t--)
	{
		solve();
	}
}