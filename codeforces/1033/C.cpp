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
    int arr[n+1];
    map<int,int>mp;
    for(int i=1;i<=n;i++)cin>>arr[i],mp[arr[i]]=i;
    int ans[n+1]={0};
    ans[mp[n]]=2;
    for(int i=n-1;i>=1;i--)
    {
        int idx=mp[i];
        int ok=0;
        for(int d=idx+i;d<=n;d+=i)
        {
            if(arr[d]>i && ans[idx]!=1)
            {
                    if(ans[d]==2){
                        ok=1;
                        ans[idx]=1;break;
                    }
            }
        }
        for(int d=idx-i;d>=1;d-=i)
        {
            if(arr[d]>i && ans[idx]!=1)
            {
                    if(ans[d]==2){
                        ok=1;
                        ans[idx]=1;break;
                    }
            }
        }
        if(ok==0){
            ans[idx]=2;
        }
    }
    for(int i=1;i<=n;i++){
        if(ans[i]==2)cout<<"B";
        else cout<<"A";
    }
    cout<<endl;
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