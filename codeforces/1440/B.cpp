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
    int n,k;
    cin>>n>>k;
    int arr[n*k];
    for(int i=0;i<n*k;i++)cin>>arr[i];
    sort(arr,arr+n);
    int sum=0;
    int t=(n+1)/2-1;
    t+=n*k-n;
    n=(n-(n+1)/2+1);
    while(t>=0 && k--)
    {
        sum+=arr[t];
        t-=(n);
    }
    cout<<sum<<endl;
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