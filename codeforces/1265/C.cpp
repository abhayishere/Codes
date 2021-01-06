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
    vector<int>v;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(mp[a]==0)v.push_back(a);
        mp[a]++;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int g=0,s=0,b=0;
    int i=0;
    if(g==0)g+=mp[v[i]],i++;
    while(i<v.size() && s<=g)
    {
        s+=mp[v[i]];
        i++;
    }
    while(g+s+b<=n/2 && i<v.size())
    {
        b+=mp[v[i]];
        i++;
    }
    if(g+s+b>n/2)
    {
        i--;
        b-=mp[v[i]];
    }
    if(g<s && g<b){
        cout<<g<<" "<<s<<" "<<b<<endl;
    }
    else
    {
        cout<<0<<" "<<0<<" "<<0<<endl;
    }
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