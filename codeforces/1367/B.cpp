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
    int n;
    cin>>n;
    int arr[n];
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0 && i%2==1)
        e++;
        if(arr[i]%2==1 && i%2==0)
        o++;
    }
    if(e==o)
    cout<<e<<endl;
    else
    {
        cout<<-1<<endl;
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