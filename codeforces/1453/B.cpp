#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
#define form(i, n) for(int i = 0; i <n ;i++) 
#define mp make_pair
#define pb push_back
#define sortvec(v) sort(v.begin(),v.end());
#define sortarr(a,n) sort(a,a+n);
typedef pair<int, int> pt;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans=0;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]!=arr[i+1])
        {
            ans+=abs(arr[i]-arr[i+1]);
        }
    }
    int f=1e18;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            f=min(f,ans-abs(arr[0]-arr[1]));
        }
        else if(i==n-1)
        {
            f=min(f,ans-abs(arr[n-2]-arr[n-1]));
        }
        else
        {
            f=min(f,ans-abs(arr[i-1]-arr[i])-abs(arr[i]-arr[i+1])+abs(arr[i-1]-arr[i+1]));
        }
    }
    cout<<f<<endl;
}	

signed main()
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