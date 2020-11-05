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

int n;
const int N=60004;
vector<int>x(N,0),v(N,0);

bool calc(double t)
{
    double l=-1e9,r=1e9;
    form(i,n)
    {
        l=max(l,x[i]-v[i]*t);
        r=min(r,x[i]+v[i]*t);
        if(l>r)
        return false;
    }
    return true;
}

void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++)cin>>v[i];
    double l=0,r=1e9;
    int k=100;
    double ans=0;
    double m;
    while(k--)
    {
        m=(l+r)/2.0;
        if(calc(m))
        {
            ans=m;
            r=m;
        }
        else
        {
            l=m;
        }
    }
    decimal(6);
    cout<<m<<endl;
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
        