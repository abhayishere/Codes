/*	[]__________[][][][]____[][][][][]__{}__[][][][]____[][][][][]__[][][][]
    []__________[]______________[]__________[]__________[]__________[]____[]
    []__________[][][][]________[]__________[][][][]____[]__________[]____[]
    []__________[]______________[]________________[]____[]__[][][]__[]____[]
    []__________[]______________[]________________[]____[]______[]__[]____[]
    [][][][]____[][][][]________[]__________[][][][]____[][][][][]__[][][][]
*/
#include <bits/stdc++.h>
#define ll long long int
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
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>mat[i][j];
    }
    int m;
    cin>>m;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=mat[i][i];
    }
    while(m--)
    {
        int a;
        cin>>a;
        if(a==3)
        cout<<ans%2;
        if(a==1)
        {
            int b;
            cin>>b;
            b--;
            if(mat[b][b]==1)
            {
                ans--;
                mat[b][b]=0;
            }
            else if(mat[b][b]==0)
            {
                mat[b][b]=1;
                ans++;
            }
        }
        if(a==2)
        {
            int b;
            cin>>b;
            b--;
            if(mat[b][b]==1)
            {
                ans--;
                mat[b][b]=0;
            }
            else if(mat[b][b]==0)
            {
                mat[b][b]=1;
                ans++;
            }
        }
    }
}	
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
      // cin>>t;
    while(t--)
    {
        solve();
    }
}