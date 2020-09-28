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
	void solve()
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		map<int,int>mp,mp2,vis;
		for(int i=0;i<n;i++)
		cin>>arr[i],mp[arr[i]]++;
		for(int i=0;i<n;i++)
		{
			if(arr[i]*2!=k && vis[arr[i]]==0)
			{
				mp2[arr[i]]=0;
				mp2[k-arr[i]]=1;
				vis[k-arr[i]]=1;
			}
		}
		int c=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]*2==k)
			{
				c++;
				if(c%2==0)
				cout<<0<<" ";
				else cout<<1<<" ";
			}
			else
			{
				cout<<mp2[arr[i]]<<" ";
			}
			
		}
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