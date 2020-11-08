#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
#define form(i, n) for(int i = 0; i <n ;i++) 
#define mp make_pair
#define pb push_back
#define sortvec(v) sort(v.begin(),v.end());
#define sortarr(a,n) sort(a,a+n);
typedef pair<int, int> pt;

void solve()
{
    int n,m;
    cin>>n>>m;
    map<int,int>w,b;
    int ans=0;
    for(int i=1;i<=n;i++)cin>>w[i];
    for(int i=1;i<=m;i++)cin>>b[i];
    for(int i=1;i<=m;i++)
    {
        map<int,int>vis;
        for(int j=i-1;j>=1;j--)
        {
            if(b[i]==b[j])break;
            if(vis[b[j]]==1)continue;
            vis[b[j]]=1;
            ans+=w[b[j]];
        }
    }
    cout<<ans<<endl;
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