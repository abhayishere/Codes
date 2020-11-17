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
    int n,x,y,h;
    cin>>n>>x>>y>>h;
    string s;
    cin>>s;

        int ans=0;
    if(x+h<y)
    {
        for(auto i:s)
        {
            if(i=='0')ans+=x;
            else ans+=x+h;
        }
    }
    else if(y+h<x)
    {
        for(auto i:s)
        {
            if(i=='1')ans+=y;
            else ans+=y+h;
        }
    }
    else
    {
        for(auto i:s)
        {
            if(i=='1')ans+=y;
            else ans+=x;
        }
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
    cin>>t;
    while(t--)
    {
        solve();
    }
}