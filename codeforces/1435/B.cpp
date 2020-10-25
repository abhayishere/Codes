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
    int n,m;
    cin>>n>>m;
    int arr1[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>arr1[i][j];
    }
    int arr2[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)cin>>arr2[i][j];
    }
    for(int i=0;i<n;i++)
    {
        int k=arr2[0][i];
        int f=1;
        for(int j=0;j<n;j++)
        {
            for(int l=0;l<m;l++)
            {
                if(arr1[j][l]==k)
                {
                    for(int y=0;y<m;y++)
                    cout<<arr1[j][y]<<" ";
                    cout<<endl;
                    f=-1;
                    break;
                }
            }
            if(f==-1)
            break;
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