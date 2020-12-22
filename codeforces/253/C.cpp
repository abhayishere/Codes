//karne se hi hota hai ;)
#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
bool prime[100005]; 
void Sieve(int n) {
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
} 
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i],arr[i]++;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int x=min(i+1,min(a,c)),y=max(i+1,max(a,c));
        int t=b;
        for(int j=x-1;j<y;j++)t=min(t,arr[j]);
        ans=min(ans,abs(t-d)+abs(i+1-a)+abs(i+1-c));
        //cout<<i+1<<" "<<x<<" "<<y<<" "<<t<<" "<<abs(t-d)<<" "<<abs(i+1-a)<<" "<<abs(i+1-c)<<endl;
    }
    cout<<ans<<endl;
}
signed main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while(t--)
    {
        solve();
    }
}