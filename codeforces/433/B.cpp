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
void solve()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int a[n]={0},b[n]={0},c[n];
	a[0]=arr[0];
	b[0]=arr[0];
	c[0]=arr[0];
	for(int i=1;i<n;i++)a[i]=a[i-1]+arr[i],b[i]=arr[i],c[i]=arr[i];
	sort(b,b+n);
	sort(c,c+n);
	for(int i=1;i<n;i++)b[i]=b[i]+b[i-1];
	int t;
	cin>>t;
	while(t--)
	{
		int x,l,r;
		cin>>x>>l>>r;
		if(x==1)
		{
			cout<<a[r-1]-a[l-1]+arr[l-1]<<endl;
		}
		else
		{
			cout<<b[r-1]-b[l-1]+c[l-1]<<endl;
		}
		
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
	   //cin>>t;
	while(t--)
	{
		solve();
	}
}