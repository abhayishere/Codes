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
    int n;cin>>n;
    vector<int>hs(n+1);
    for(int i=1;i<=n;i++)cin>>hs[i];
    vector<int>ord[n+1];
    for(int i=1;i<=n;i++)
    {
        ord[hs[i]].push_back(i);
    }
    vector<int>ans;
    int t=ans.size();
    for(int i=0;i<n;i++)
    {
        if(ord[t].size()>0)
        {
            ans.push_back(ord[t].back());
            ord[t].pop_back();
            t++;
        }
        else
        {
            int f=0;
            t-=3;
            while(t>=0)
            {
                if(ord[t].size()>0)
                {
                    ans.push_back(ord[t].back());
                    ord[t].pop_back();
                    t++;
                    f=1;
                    break;
                }
                t-=3;
            }
            if(f==0)
            {
                cout<<"Impossible"<<endl;
                return;
            }
        }
    }
    cout<<"Possible"<<endl;
    for(auto i:ans)cout<<i<<" ";
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