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

vector<int>g[100005];
bool vis[100005];
int dp[100005];

int dfs(int i)
{
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    dp[i]=1;
    int m=1;
    for(auto x:g[i])
    {
        if(x<i)
        m=max(m,1+dfs(x));
    }
    return dp[i]=m;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int ans=0;
    for(int i=n;i>=1;i--)
    {
        dfs(i);
    }
    for(int i=1;i<=n;i++){
        int t=1ll*dp[i]*g[i].size();
        ans=max(ans,t);
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
    while(t--)
    {
        solve();
    }
}