#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
#define form(i, n) for(int i = 0; i <n ;i++)
#define pb push_back
#define sortvec(v) sort(v.begin(),v.end());
#define sortarr(a,n) sort(a,a+n);
typedef pair<int, int> pt;

void solve()
{
    string x,y,z;
    cin>>x>>y>>z;
    map<char,int>mp;
    if(x[1]=='>')
    {
        mp[x[0]]++;
    }
    else mp[x[2]]++;
    if(y[1]=='>')
    mp[y[0]]++;
    else 
    mp[y[2]]++;
    if(z[1]=='>')
    mp[z[0]]++;
    else 
    mp[z[2]]++;

    if(mp['A']==mp['B'] || mp['B']==mp['C'] || mp['A']==mp['C'])
    {
        cout<<"Impossible"<<endl;
    }
    else
    {
        vector<pair<int,char>>v;
        for(auto i:mp)
        {
            v.pb(make_pair(i.second,i.first));
        }
        sortvec(v);
        for(auto i:v)
        cout<<i.second;
    }
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
    while(t--)
    {
        solve();
    }
}