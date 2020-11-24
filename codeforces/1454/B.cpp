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
    int n;
    cin>>n;
    int arr[n];
    map<int,int>m,m2;
    for(int i=0;i<n;i++)cin>>arr[i],m[arr[i]]++,m2[arr[i]]=i+1;
    int ans=INT_MAX,f=-1;
    for(auto i:m)
    {
        if(i.second==1)
        {
            if(i.first<ans)
            {
                ans=i.first;
            }
        }
    }
    if(ans==INT_MAX)cout<<-1<<endl;
    else cout<<m2[ans]<<endl;
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