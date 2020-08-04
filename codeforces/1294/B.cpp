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
	vector<int>adj[1005];
	int maxx=0;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		maxx=max(x,maxx);
	}
	for(int i=0;i<=maxx;i++)
		sort(adj[i].begin(),adj[i].end());
	string ans="";
	int curx=0,cury=0;
	for(int i=0;i<=maxx;i++)
	{
		if(adj[i].size()>0)
		{
			int m=0;
			m=adj[i].back();
			for(auto j:adj[i])
			{
				if(j<cury)
				{
					cout<<"NO"<<endl;
					return;
				}
			}
			ans+=string(m-cury,'U');
			cury=m;
		}
		if(i==maxx)
			break;
		ans+='R';
	}
	cout<<"YES"<<endl;
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
    int t=1;
   cin>>t;
    while(t--)
    {
    	solve();
    }
}
/*
1 2 3 4 5 6 7
1 3 5 7 4 6 2
*/