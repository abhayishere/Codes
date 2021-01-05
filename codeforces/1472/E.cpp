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
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({max(a,b),min(a,b),i});
    }
    sort(v.begin(),v.end());
    int ans[n]={0};
    int minw=inf,temp=inf,idx=0,d=0;
    for(int i=0;i<n;i++)
    {
        if(i>0 && v[i][0]>v[i-1][0])
        {
            if(temp<minw)
            {
                minw=temp;
                idx=d;
            }
        }
        if(v[i][1]>minw)
        {
            ans[v[i][2]]=idx+1;
        }
        if(v[i][1]<temp)
        {
            temp=v[i][1];
            d=v[i][2];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(ans[i]==0)ans[i]=-1;
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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