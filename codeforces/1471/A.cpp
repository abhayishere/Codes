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
    int a=0,b=0;
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        a+=ceil(1.0*s/x);
        b+=s;
    }
    b=ceil(1.0*b/x);
    cout<<min(a,b)<<" "<<max(a,b)<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
//Life is a race … If you don’t run fast… you will be like a broken andaa…