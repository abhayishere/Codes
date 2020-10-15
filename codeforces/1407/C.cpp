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
int ask(int a,int b)
{
    cout<<"? "<<a+1<<" "<<b+1<<endl;
    int z;
    cin>>z;
    return z;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n+1,-1);
    int i=0;
    for(int j=1;j<n;j++)
    {
        int a=ask(i,j);
        int b=ask(j,i);
        if(a>b)
        {
            v[i]=a;
            i=j;
        }
        else
        {
            v[j]=b;
        }
    }
    v[i]=n;
    cout<<"! ";
    for(auto i:v)
    cout<<i<<" ";
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