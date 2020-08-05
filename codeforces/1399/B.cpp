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
void solve()
{
    ll n,m,k,c,z;
    cin>>n;
    ll x=mod,y=mod;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    cin>>a[i],x=min(x,a[i]);
    for(ll i=0;i<n;i++)
    cin>>b[i],y=min(y,b[i]);
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ll aa=a[i]-x;
        ll bb=b[i]-y;
        ans+=min(aa,bb);
        ans+=max(aa,bb)-min(aa,bb);
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
    int t=1;
       cin>>t;
    while(t--)
    {
        solve();
    }
}