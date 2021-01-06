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
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)cin>>arr[i],mp[arr[i]]=i;
    int l=-1,r=-1;
    string ans="";
    l=mp[1];r=mp[1];
    ans+='1';
    for(int i=2;i<=n;i++)
    {
        if(mp[i]>r)r=mp[i];
        else if(mp[i]<l)l=mp[i];
        if(r-l+1==i)ans+='1';
        else ans+='0';
    }
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