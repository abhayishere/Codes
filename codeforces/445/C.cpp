//karne se hi hota hai ;)
#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
#define fr(i,a,b) for(int i=a;i<b;i++)
#define sortv(a) sort(a.begin(),a.end())
#define sorta(a,n) sort(a,a+n)
#define bgnd(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define inf 1e16
#define lb lower_bound  //THIS GIVES THE ITR TO THE ELEMENT IN RANGE [SI,EI) THAT IS >= OUR VALUE 
#define ub upper_bound  //THIS GIVES THE ITR TO THE ELEMENT IN RANGE [SI,EI) THAT IS > OUR VALUE 
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
double g[505][505];
double v[505];
void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>v[i+1];
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        cin>>g[a][b];
        g[b][a]=g[a][b];
    }
    double ans=0.0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(g[i][j]==0)continue;
            ans=max(ans,(1.0*(v[i]+v[j]))/g[i][j]);
        }
    }
    decimal(10)
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
    while(t--)
    {
        solve();
    }
}