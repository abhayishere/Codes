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
	int a,b;
	cin>>a>>b;
	int g=__gcd(a,b);
	vector<int>dd;
	for(int i=1;i*i<=g;i++)
	{
		if(g%i==0)
		{
			dd.push_back(i);
			if(g/i>i)
			dd.push_back(g/i);
		}
	}
	sort(dd.begin(),dd.end());
	int t;
	cin>>t;
	while(t--)
	{
		int l,h;
		cin>>l>>h;
		int ans=-1;
		for(int i=dd.size()-1;i>=0;i--)
		{
			if(dd[i]>=l && dd[i]<=h)
			{
				ans=dd[i];
					break;
			}
		}
		cout<<ans<<endl;
	}
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
	   //cin>>t;
	while(t--)
	{
		solve();
	}
}