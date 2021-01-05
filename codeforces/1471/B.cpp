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
    int n,x;
    cin>>n>>x;
    vector<int>v;
    int e[n];
    int s=0;
    int m=inf,m2=inf;
    int idx=inf;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        int c=1;
        while(a%x==0)
        {
            c++;
            a=a/x;
        }
        e[i]=c;
            if(c<m)
            {
                idx=i;
                m=min(m,c);
            }
        m2=min(m2,c);
    }
    int sum=0;
    m=min(e[0],m);
    for(int i=0;i<n;i++)
    {
        if(i<idx)
        {
            e[i]=min(e[i],m+1);
            sum+=e[i]*v[i];
        }
        else
        {
            e[i]=min(e[i],m);
            sum+=v[i]*e[i];
        }
        
    }
    cout<<sum<<endl;
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