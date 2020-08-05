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
    int n,m,k,a,b,c,x,y,z;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n-1;i++)
    if(v[i+1]-v[i]<=1)
    ans++;
    if(ans==0)
    cout<<1<<endl;
    else if(ans>=1)
    cout<<2<<endl;
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