//karne se hi hota hai ;)
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
void solve()
{
    int n,m;
    cin>>n>>m;
    char s[n][m];
    int ans=0;
    vector<vector<int>>dp(n+1,vector<int>(m+1));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>s[i][j];
            if(s[i][j]=='*')
            dp[i][j]=1;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=1;j--)
        {
            if(dp[i][j]==1)
            {
                dp[i][j]+=min({dp[i+1][j-1],dp[i+1][j],dp[i+1][j+1]});
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)ans+=dp[i][j];
    }
    cout<<ans<<endl;
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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