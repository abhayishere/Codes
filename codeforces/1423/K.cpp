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
bool prime[1000006]; 
int ans[1000006];
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
    ans[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
            ans[i]++;
            if(i*i<n)
            {
                ans[i*i]--;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        ans[i]+=ans[i-1];
    }
} 
void solve()
{
    int n;
    cin>>n;
    cout<<ans[n]<<endl;
}	
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Sieve(1000006);
    int t=1;
       cin>>t;
    while(t--)
    {
        solve();
    }
}