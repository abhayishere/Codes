//Kaamyaab hone ke liye nahin, Kaabil hone ke liye padho!
#include <bits/stdc++.h>
#define int long long int
#define mod 998244353
#define endl '\n'
#define inf 1e16
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
int power(int x, unsigned int y, int p)  
{  
    int res = 1;     // Initialize result  
  
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  
void solve()
{
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int c=0,ans=0;
    for(int i=0;i<m;i++)
    {
        if(i<n)
        {
            if(a[i ]=='1')
            c+=power(2,i,mod);
            c%=mod;
        }
        if(b[i]=='1')
        {
            (ans+=c%mod)%mod;
        }
        //cout<<c<<endl;
    }
    cout<<ans%mod;
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