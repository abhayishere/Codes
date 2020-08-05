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
    int arr[n+1];
    for(int i=1;i<=n;i++)cin>>arr[i];
    int ans[n+1];
    for(int i=1;i<=n;i++)
    {
        int c=1;
        int t=i;
        while(arr[t]!=i)
        {
            t=arr[t];
            c++;
        }
        ans[i]=c;
    }
    for(int i=1;i<=n;i++)
    cout<<ans[i]<<" ";
    cout<<endl;
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