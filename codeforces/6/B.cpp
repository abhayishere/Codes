/*	[]__________[][][][]____[][][][][]__{}__[][][][]____[][][][][]__[][][][]
	[]__________[]______________[]__________[]__________[]__________[]____[]
	[]__________[][][][]________[]__________[][][][]____[]__________[]____[]
	[]__________[]______________[]________________[]____[]__[][][]__[]____[]
	[]__________[]______________[]________________[]____[]______[]__[]____[]
	[][][][]____[][][][]________[]__________[][][][]____[][][][][]__[][][][]
*/
#include <bits/stdc++.h>
#define ll long long int
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
	int n,m;
	cin>>n>>m;
	char p;
	cin>>p;
	string s[n];
	for(int i=0;i<n;i++)
	cin>>s[i];
	int ans=0;
	map<char,int>mp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(s[i][j]==p)
			{
				if(i>=1)
				{
					if(s[i-1][j]!=p && s[i-1][j]!='.')
					mp[s[i-1][j]]++;
				}
				if(i<n-1)
				{
					if(s[i+1][j]!=p && s[i+1][j]!='.')
					mp[s[i+1][j]]++;
				}
				if(j>=1)
				{
					if(s[i][j-1]!=p && s[i][j-1]!='.')
					mp[s[i][j-1]]++;
				}
				if(j<m-1)
				{
					if(s[i][j+1]!=p && s[i][j+1]!='.')
					mp[s[i][j+1]];
				}
			}
		}
	}
	cout<<mp.size()<<endl;
}	
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
	  // cin>>t;
	while(t--)
	{
		solve();
	}
}