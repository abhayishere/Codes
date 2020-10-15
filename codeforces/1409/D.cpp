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
int sum(int n)
{
    int res=0;
    while(n>0)
    {
        res+=n%10;
        n=n/10;
    }
    return res;
}
void solve()
{
    int n,s;
    cin>>n>>s;
    if(sum(n)<=s)
    {
        cout<<0<<endl;
        return;
    }
    int p=1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int d=(n/p)%10;
        n+=p*((10-d)%10);
        ans+=p*((10-d)%10);
        if(sum(n)<=s)
        break;
        p=p*10;
    }
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
       cin>>t;
    while(t--)
    {
        solve();
    }
}