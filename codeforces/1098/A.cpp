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
    vector<int>v(n+1,0ll);
    for(int i=2;i<=n;i++)cin>>v[i];
    vector<int>a(n+1,0ll);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=2;i<=n;i++)
    {
        if(a[i]!=-1)
        {
            if(a[v[i]]==-1)
            a[v[i]]=a[i];
            else
            {
                a[v[i]]=min(a[i],a[v[i]]);
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i]==-1)a[i]=a[v[i]];
        if(a[i]<a[v[i]])
        {
            cout<<-1<<endl;
            return;
        }
    }
    int ans=a[1];
    for(int i=2;i<=n;i++)
    {
        ans+=a[i]-a[v[i]];
    }
    cout<<ans<<endl;
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