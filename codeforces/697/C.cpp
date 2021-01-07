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
map<pair<int,int>,int>edge;
void solve()
{
    int x;
    cin>>x;
    if(x==1)
    {
        int u,v,w;
        cin>>v>>u>>w;
        int flag=0;
        if(v>u)swap(v,u);
        while((int)log2(v)!=(int)log2(u))
        {
            edge[{u,u/2}]+=w;
            u/=2;
        }
        while(u!=v)
        {
            if(u>1)
            {
                edge[{u,u/2}]+=w;
                u/=2;
            }
        //cout<<u<<" "<<v<<endl;
            if(u==v)break;
            if(v>1)
            {
                edge[{v,v/2}]+=w;
                v/=2;
            }
        //cout<<u<<" "<<v<<endl;
            if(u==v)break;
        }
    }
    else
    {
        int v,u;
        cin>>v>>u;
        int ans=0;
        int flag=0;
        if(v>u)swap(v,u);
        while((int)log2(v)!=(int)log2(u))
        {
            ans+=edge[{u,u/2}];
            u/=2;
        }
        //cout<<u<<"   "<<v<<endl;
        while(u!=v)
        {
            if(u>1)
            {
                ans+=edge[{u,u/2}];
                u/=2;
            }
            if(u==v)break;
            if(v>1)
            {
                ans+=edge[{v,v/2}];
                v/=2;
            }
            if(u==v)break;
        }
        cout<<ans<<endl;
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