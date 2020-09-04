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
vector<int>grapj[100005];
bool vis[100005];
void solve()
{
    int a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    int k=a,l=b,nn=n;
    int ans1=0,ans2=0;
    {
        if(b-y>=n)
        {
            ans1=a*(b-n);
        }
        else
        {
            n=n-(b-y);
            b=y;
            if(a-x>=n)
            ans1=b*(a-n);
            else ans1=x*(y);
        }
        
    }
    n=nn,a=k,b=l;
    {
        if(a-x>=n)
        ans2=b*(a-n);
        else
        {
            n=n-(a-x);
            a=x;
            if(b-y>=n)
            ans2=a*(b-n);
            else ans2=a*(y);
        }
    }
    cout<<min(ans1,ans2)<<endl;
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