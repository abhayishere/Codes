//Kaamyaab hone ke liye nahin, Kaabil hone ke liye padho!
#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
#define inf 1e16
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
int k;
int dp[100005],sum[100005];
void help()
{
    // for k=2
    // 0 1     2           3       4 5
    // 1 1 1+(dp[2-2]) 2+dp[3-2] 
    dp[0]=1;
    for(int i=1;i<100005;i++)
    {
        if(i<k)dp[i]=dp[i-1];
        else
        {
            dp[i]=(dp[i-1]+dp[i-k])%mod;
        }
        dp[i]%=mod;
    }
    sum[0]=dp[0];
    for(int i=1;i<100005;i++)
    {
        sum[i]=(sum[i-1]%mod+dp[i]%mod)%mod;
    }
}
void solve()
{
    int a,b;
    cin>>a>>b;
    int ans=(sum[b]-sum[a-1]+mod)%mod;
    cout<<ans%mod<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t>>k;
    help();
    while(t--)
    {
        solve();
    }
}
//Life is a race … If you don’t run fast… you will be like a broken andaa…