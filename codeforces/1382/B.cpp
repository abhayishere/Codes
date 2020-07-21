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
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];
    ll t=0,o=0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=2)
        break;
        o++;
    }
    string ans="";
    if(o%2==0)
    {
        if(i!=n)
            ans="First";
            else
            {
                ans="Second";
            }
    }
    else
    {
        if(i!=n)
        ans="Second";
        else
        {
            ans="First";
        }
        
    }
    
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}