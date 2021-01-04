#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
#define inf 1e16
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
struct classcomp {
  bool operator() (const int& lhs, const int& rhs) const
  {return lhs>rhs;}
};

void solve()
{
    //ashishgup's code
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
		cin>>arr[i];
    set<pair<int,int>>a,s;
	for(int l=1;l<=n;l++)
	{
		int r=l;
		while(r+1<=n && arr[r+1]==arr[l])
			r++;
		a.insert({l, r-l+1});
		s.insert({-(r-l+1), l});
		l=r;
	}
    int ans=0;
    while(s.size())
	{		
		ans++;
		auto it=*s.begin();
		int idx=it.second;
		s.erase(it);
		auto it2=a.lower_bound(make_pair(idx, 0));
		auto L=it2, R=it2;
		if(L!=a.begin() && R!=a.end())
		{
			L--;
			R++;
			if(R!=a.end())
			{
				if(arr[L->first]==arr[R->first])
				{
					s.erase({-L->second, L->first});
					s.erase({-R->second, R->first});
					pair<int, int> cur={L->first, L->second + R->second};
					a.erase(L);
					a.erase(R);
					a.insert(cur);
					s.insert({-cur.second, cur.first});
				}
			}
		}
		a.erase(it2);
	}
	cout<<ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while(t--)
    {
        solve();
    }
}