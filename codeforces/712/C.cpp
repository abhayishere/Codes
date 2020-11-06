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
    int a,b;
    cin>>a>>b;
    int x=b,y=b,z=b;
    int ans=0;
    int k=100;
    while((x!=a || y!=a || z!=a) && k--)
    {
        x=min(a,y+z-1);
        ans++;
        if(x==a && y==a && z==a)
        break;
        y=min(a,z+x-1);
        ans++;
        if(x==a && y==a && z==a)
        break;
        z=min(a,x+y-1);
        ans++;
        if(x==a && y==a && z==a)
        break;
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