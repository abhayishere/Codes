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
    int n,d;
    cin>>n>>d;
    int arr[n];
    int f=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>d)f=1;
    }
    sort(arr,arr+n);
    if(f==0){
        cout<<"YES";
    }
    else if(arr[0]<d && arr[1]<d && arr[0]+arr[1]<=d){
        cout<<"YES";
    }
    else cout<<"NO";
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