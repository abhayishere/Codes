#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
void solve()
{
    ll n,d;
    cin>>n>>d;
    vector<ll> arr(n,0);
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    ll beg=0,ans=0;
    while(beg<n-2)
    {
        ll t=upper_bound(arr.begin(),arr.end(),arr[beg]+d)-arr.begin()-1;
        if(t-beg<2)
        {
            beg++;
            continue;
        }
        t=t-beg;
        beg++;
        ans+=t*(t-1)/2;
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
}