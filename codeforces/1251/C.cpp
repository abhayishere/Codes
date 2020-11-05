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
#define revec(v) reverse(v.begin(),v.end());
#define sortarr(a,n) sort(a,a+n);
typedef pair<int, int> pt;

void solve()
{
    string s;
    cin>>s;
    vector<int>odd,even;
    for(auto i:s)
    {
        int t=i-'0';
        if(t%2==0)even.push_back(t);
        else odd.push_back(t);
    }
    revec(even);revec(odd);
    int c=0;
    while(c<s.length())
    {
        c++;
        if(even.size()>0 && odd.size()>0)
        {
            if(even.back()<odd.back())
            {
                cout<<even.back();
                even.pop_back();
            }
            else
            {
                cout<<odd.back();
                odd.pop_back();
            }
        }
        else if(even.size()>0)
        {
            cout<<even.back();
            even.pop_back();
        }
        else
        {
            cout<<odd.back();
            odd.pop_back();
        }
    }
    cout<<endl;
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