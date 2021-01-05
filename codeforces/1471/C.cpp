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
    int n,m;
    cin>>n>>m;
    int k[n],c[m];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>k[i];
        mp[k[i]]++;
    }
    for(int i=0;i<m;i++)cin>>c[i];
    int temp=1;
    for(int i=m;i>0;i--)
    {
        while(temp<(i+1) && mp[i])
        {
            mp[temp]++;
            mp[i]--;
            temp++;
        }
    }
    int ans=0;
    for(int i=0;i<m;i++)ans+=c[i]*mp[i+1];
    cout<<ans<<endl;
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