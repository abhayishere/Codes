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
    int n;long double f;
    cin>>n>>f;
    map<int,int>arr;
    for(int i=0;i<n;i++)cin>>arr[i];
    long double d1=0.0,d2=(long double)f;
    int x=0,y=n-1;
    long double t=0;
    int v1=1,v2=1;
    while(x<=y)
    {
        long double t1=(arr[x]-d1)/(long double)v1;
        long double t2=(d2-arr[y])/(long double)v2;
        t+=min(t1,t2);
        if(t1<t2)
        {
            d1=arr[x];
            d2-=t1*v2;
            x++;
            v1++;
        }
        else if(t1==t2)
        {
            d1=arr[x];
            d2=arr[y];
            v1++;
            v2++;
            x++;
            y--;
        }
        else
        {
            d2=arr[y];
            d1+=t2*v1;
            y--;
            v2++;
        }
    }
    t+=(d2-d1)/(long double)(v1+v2);
    decimal(10);
    cout<<t<<endl;
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