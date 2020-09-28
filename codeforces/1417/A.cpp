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
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	if(arr[n-1]>k)
	{
		cout<<0<<endl;
		return;
	}
	else
	{
		int a=0;
		for(int i=1;i<n;i++)
		{
			a+=(k-arr[i])/arr[0];
		}
	cout<<a<<endl;
	}
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