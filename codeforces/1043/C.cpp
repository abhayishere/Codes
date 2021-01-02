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
    string s;
    cin>>s;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]!=s[i-1])
        {
            cout<<1<<" ";
            string a=s.substr(0,i);
            reverse(a.begin(),a.end());
            a+=s.substr(i,s.length());
            s=a;
        }
        else
        {
            cout<<0<<" ";
        }
    }
    string t=s;
    reverse(s.begin(),s.end());
    if(t<s)cout<<0;
    else cout<<1;
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