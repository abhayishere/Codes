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
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int nn=0;
    int aa=INT_MAX;
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]<0)nn++;
            if(a[i][j]<0)
            {
                aa=min(aa,0-a[i][j]);
                s+=(0-a[i][j]);
            }
            else
            {
                aa=min(aa,a[i][j]);
                s+=a[i][j];
            }
            
        }
    }
    if(nn%2==0)cout<<s<<endl;
    else 
    {
        cout<<s-2*aa<<endl;
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