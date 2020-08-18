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
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    if(k%2==0)
    {
        ll m=1e17;
        for(ll i=0;i<n;i++)
        m=min(m,arr[i]);
        for(ll i=0;i<n;i++)
        cout<<arr[i]-m<<" ";
        cout<<endl;
    }
    else
    {
        ll m=INT_MIN;
        for(ll i=0;i<n;i++)
        m=max(m,arr[i]);
        for(ll i=0;i<n;i++)
        cout<<m-arr[i]<<" ";
        cout<<endl;
    }
    
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