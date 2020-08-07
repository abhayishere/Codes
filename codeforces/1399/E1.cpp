#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
#define hackercup(x) cout<<"Case #"<<x<<": ";
#define mp map<int,int>mp;
ll sum;
struct cmp
{
	bool operator()(pair<ll,ll>a,pair<ll,ll>b)
	{
		return ((a.first-a.first/2)*a.second)>((b.first-b.first/2)*b.second);
	}
};
multiset<pair<ll,ll>,cmp>s;
vector<pair<ll,ll>>v[100005];
ll dfs(ll x,ll last)
{
	ll ans=0;
	for(pair<ll,ll> i:v[x])
	{
		if(i.first==last)
		continue;
		ll t=dfs(i.first,x);
		s.insert({i.second,t});
		sum+=t*i.second;
		ans+=t;
	}
	if(!ans)
	ans=1;
	return ans;
}

void solve()
{
	ll n,w;
	sum=0;
	s.clear();
	cin>>n>>w;
	for(ll i=1;i<n+1;i++)
	v[i].clear();
	for(ll i=1;i<n;i++)
	{
		ll x,y,z;
		cin>>x>>y>>z;
		v[x].push_back({y,z});
		v[y].push_back({x,z});
	}
	dfs(1,0);
	ll ans=0;
	while(sum>w)
	{
		pair<ll,ll> t=*s.begin();
		s.erase(s.begin());
		sum-=t.first*t.second;
		t.first=t.first/2;
		if(t.first)
		{
			sum+=t.first*t.second;
			s.insert(t);
		}
		ans++;
	}
	cout<<ans<<endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
}