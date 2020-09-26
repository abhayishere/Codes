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
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(n%2==0)
	{
		int flag=0;
		for(int i=1;i<n;i=i+2)
		{
			if((s[i]-'0')%2==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<1<<endl;
		}
		else
			cout<<2<<endl;
	}
	else
	{
		int flag=0;
		for(int i=0;i<n;i=i+2)
		{
			if((s[i]-'0')%2==1)
			{
				flag=1;
			}
		}
		if(flag==1)
			cout<<1<<endl;
		else
			cout<<2<<endl;
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
	cin>>t;
	while(t--)
	{
		solve();
	}
}