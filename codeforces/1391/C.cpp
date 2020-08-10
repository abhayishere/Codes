#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
#define hackercup(x) cout<<"Case #"<<x<<": ";
void solve()
{
	int n;
	cin>>n;
	ll f=1, p2=1;
	for(int i=2; i<=n; ++i) {
		f=f*i%mod;
		p2=p2*2%mod;
	}
	cout<<(f-p2+mod)%mod<<endl;
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