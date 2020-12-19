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
const int N=1e5+5;
 
double dp[N][2];
void solve()
{
    decimal(9)
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==i+1)cnt++;
        else break;
    }
    int req=n-cnt;
    vector<double>p;
    for(int i=0;i<m;i++)
    {
        int a;double b;
        cin>>a>>b;
        if(a>=req)p.push_back(b);
    }
    if(req==0)cout<<"1.0"<<endl;
    else {
        int k=p.size();
        dp[0][0]=1;
        for(int i=1;i<=k;i++)
        {
            dp[i][0]=dp[i-1][0]*(1-p[i-1]);
            dp[i][1]=dp[i-1][1]+dp[i-1][0]*(p[i-1]);
        }
        cout<<dp[k][1]<<endl;
    }
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