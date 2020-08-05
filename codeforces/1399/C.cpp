#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
#define hackercup(x) cout<<"Case #"<<x<<": ";
void solve()
{
    ll n,m,k,z;
    cin>>n;
    map<int,int>mp;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int s=arr[i]+arr[j];
            int c=1;
            vector<int>visited(n,0);
            for(int x=i+1;x<n-1;x++)
            {
                if(x==j)
                continue;
                for(int y=x+1;y<n;y++)
                {
                    if(y==x || y==i || y==j)
                    continue;
                    if(arr[x]+arr[y]==s && visited[x]==0 && visited[y]==0)
                    {
                        c++;
                        visited[x]=1;
                        visited[y]=1;
                        break;
                    }
                }
            }
            ans=max(ans,c);
        }
    }
    cout<<ans<<endl;
}
int main()
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