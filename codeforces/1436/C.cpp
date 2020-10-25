/*	[]__________[][][][]____[][][][][]__{}__[][][][]____[][][][][]__[][][][]
    []__________[]______________[]__________[]__________[]__________[]____[]
    []__________[][][][]________[]__________[][][][]____[]__________[]____[]
    []__________[]______________[]________________[]____[]__[][][]__[]____[]
    []__________[]______________[]________________[]____[]______[]__[]____[]
    [][][][]____[][][][]________[]__________[][][][]____[][][][][]__[][][][]
*/
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
int modFact(int n, int p) 
{ 
    if (n >= p) 
        return 0; 
  
    int result = 1; 
    for (int i = 1; i <= n; i++) 
        result = (result * i) % p; 
  
    return result%mod; 
}
void solve()
{
    int n,x,p;
    cin>>n>>x>>p;
    int l=0,r=n;
    int ans=1;
	int k=n;
	int less=x-1,grt=n-x;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(mid==p)
        {
            l=mid+1;
        }
        else if(mid<p)
        {
            ans=ans*less;
			ans=ans%mod;
            l=mid+1;
			less--;
        }
        else
        {
            ans*=grt; 
			ans=ans%mod;
            r=mid;
			grt--;
        }
        k--;
    }
	ans=(ans*modFact(k,mod))%mod;
	cout<<ans<<endl;
}	
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
       //cin>>t;
    while(t--)
    {
        solve();
    }
}