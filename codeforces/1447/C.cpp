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
    int n,w;
    cin>>n>>w;
    vector<pt> a(n);
    int sum=0;
    for(int i=0;i<n;i++)cin>>a[i].first,a[i].second=i+1,sum+=a[i].first;
    sortvec(a);
    int i=0,j=0;
    if(sum<(w/2+w%2) || a[0].first>w)
    {
        cout<<-1<<endl;
        return;
    }
    sum=0;
    while(i<n)
    {
        if(sum<(w/2 +w%2) && j<n)
        {
            sum+=a[j].first;
            j++;
        }
        else if(sum>w && i<n-1)
        {
            sum-=a[i].first;
            i++;
        }
        else
        {
            break;
        }
    }
    if(sum>=(w/2 +w%2) && sum<=w)
    {
        cout<<j-i<<endl;
        for(int t=i;t<j;t++)
        cout<<a[t].second<<" ";
        cout<<endl;
    }
    else
    {
        cout<<-1<<endl;
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
    cin>>t;
    while(t--)
    {
        solve();
    }
}