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
    int n,x,y;
    cin>>n>>x>>y;
    int i=0;
    for(i=1;i<=50;i++)
    {
        if((y-x)%i==0)
        {
            if((y-x)/i+1<=n)
            {
                break;
            }
        }
    }
    int d=i;
    if((y-x)/i+1==n)
    {
        for(int i=x;i<=y;i=i+d)
        cout<<i<<" ";
    }
    else
    {
        int num=n;
        n=n-(y-x)/d-1;
        for(int i=x;i<=y;i=i+d)
        cout<<i<<" ";
        x=x-d;
        while(n>0 && x>0)
        {
            cout<<x<<" ";
            x=x-d;
            n--;
        }
        if(n>0)
        {
            y=y+d;
            while(n>0)
            {
                cout<<y<<" ";
                n--;
                y+=d;
            }
        }
    }
    cout<<endl;
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