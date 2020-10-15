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
    int h1,a1,c1;
    cin>>h1>>a1>>c1;
    int h2,a2;
    cin>>h2>>a2;
    vector<string>ans;
    int turn=1;
    while(h2>0)
    {
        if(h2-a1<=0)
        {
            ans.push_back("STRIKE");
            break;
        }
        if(h1-a2>0)
        {
            ans.push_back("STRIKE");
            h2-=a1;
        }
        else
        {
            ans.push_back("HEAL");
            h1+=c1;
        }
        h1-=a2;
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)
    cout<<i<<endl;
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