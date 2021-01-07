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
    int n,k;
    cin>>n>>k;
    vector<int>v[100005];
    int m=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        m=max(m,a);
        v[a].push_back(i+1);
    }
    if(v[0].size()>1){
        cout<<-1<<endl;
        return;
    }
    if(v[1].size()>k*v[0].size()){
        cout<<-1<<endl;
        //cout<<'g';
        return;
    }
    for(int i=2;i<=m;i++)
    {
        if(v[i].size()>(k-1)*v[i-1].size()){
            cout<<-1<<endl;
            //cout<<i;
            return;
        }
    }
    vector<pair<int,int>>ans;
    for(int i=0;i<m;i++)
    {
        int kk=k;
        int j=0;
        int l=0;
        if(i!=0)kk--;
        while(j<v[i+1].size())
        {
            while(kk>0 && j<v[i+1].size())
            {
                //cout<<v[i][l]<<" "<<v[i+1][j]<<" "<<l<<" "<<j<<" "<<kk<<endl;
                ans.push_back({v[i][l],v[i+1][j]});
                j++;
                kk--;
            }
            l++;
            kk=k-2;
        }
    }
    //cout<<'g';
    if(ans.size()==0)cout<<-1<<endl;
    else {
        cout<<ans.size()<<endl;
        for(auto i:ans){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
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