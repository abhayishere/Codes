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
template<class T> auto matrix( int r, int c, T v ){ return vector<vector<T>>( r, vector<T>( c, v ) ) ; }
template<class T> auto matrix( int o1, int o2, int o3, T v ){ return vector<vector<vector<T>>>( o1, vector<vector<T>>( o2, vector<T>( o3, v ) ) ) ; }
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
int v1,v2,T,d;
const int mxn = 5000 ;
auto dp = matrix<int>(mxn+1, mxn+1, -1) ;
int solve(int t,int v)
{
    if(v<0)return -1e18;
    if(t==T)
    {
        if(v!=v2)
        {
            return -1e18;
        }
        else 
        {
            return dp[t][v]=v;
        }
    }
    if(dp[t][v]!=-1)return dp[t][v];
    int ans=INT_MIN;
    for(int i=-d;i<=d;i++)
    {
        ans=max(ans,v+solve(t+1,v+i));
    }
    return dp[t][v]=ans;
}
void solve()
{
    cin>>v1>>v2>>T>>d;
    cout<<solve(1,v1);
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