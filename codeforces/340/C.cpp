//Kaamyaab hone ke liye nahin, Kaabil hone ke liye padho!
#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
#define inf 1e16
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
void solve()
{
    int n;
    cin>>n;
    int dat[n];
    for(int i=0;i<n;i++)
        cin>>dat[i];
    sort(dat,dat+n);
    int lsum=0,rsum=0;
    for(int i=0;i<n;i++)
        rsum+=dat[i];
    int ans=0;
    ans+=rsum;
    for(int i=0;i<n;i++)
    {
        ans+=dat[i]*i-lsum;
        rsum-=dat[i];
        lsum+=dat[i];
        ans+=rsum-dat[i]*(n-i-1);
    }
    int an=__gcd(ans,n);
    cout<<ans/an<<' '<<n/an<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while(t--)
    {
        solve();
    }
}
//Life is a race … If you don’t run fast… you will be like a broken andaa…