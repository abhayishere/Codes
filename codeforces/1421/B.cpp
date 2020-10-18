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
void doit()
{

}
void solve()
{
    int n;
    cin>>n;
    char c[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)cin>>c[i][j];
    }
    if(c[1][2]==c[2][1])
    {
        if(c[n][n-1]==c[n-1][n])
        {
            if(c[1][2]==c[n][n-1])
            {
                cout<<2<<endl;
                cout<<n<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            cout<<1<<endl;
            if(c[1][2]==c[n][n-1])
            cout<<n<<" "<<n-1<<endl;
            else
            {
                cout<<n-1<<" "<<n<<endl;
            }
        }
    }
    else
    {
        if(c[n][n-1]==c[n-1][n])
        {
            cout<<1<<endl;
            if(c[1][2]==c[n][n-1])
            cout<<1<<" "<<2<<endl;
            else
            {
                cout<<2<<" "<<1<<endl;
            }
        }
        else
        {
            cout<<2<<endl;
            if(c[1][2]=='1')
            cout<<1<<" "<<2<<endl;
            if(c[2][1]=='1')
            cout<<2<<" "<<1<<endl;
            if(c[n][n-1]=='0')
            cout<<n<<" "<<n-1<<endl;
            if(c[n-1][n]=='0')
            cout<<n-1<<" "<<n<<endl;
        }
    }
    
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