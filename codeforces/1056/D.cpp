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

const int N=100005;
int arr[N],a[N];

void solve()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        a[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        arr[i]--;
        a[arr[i]]=0;
    }
    for(int i=n-1;i>0;i--)
    {
        a[arr[i]]+=a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
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
    //cin>>t;
    while(t--)
    {
        solve();
    }
}