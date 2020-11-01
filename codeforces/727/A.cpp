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
    int a,b;
    cin>>a>>b;
    int k=10;
    vector<int>ans;
    ans.push_back(b);
    while(b>a)
    {
        while((b%10)%2==0 && b>a)
        {
            b=b/2;
            ans.push_back(b);
        }
        if(b%10!=1 && b!=a)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(b/10<a)
        break;
        b=b/10;
        ans.push_back(b);
    }
    if(a!=b)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        sort(ans.begin(),ans.end());
        for(auto i:ans)
        cout<<i<<" ";
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
       //cin>>t;
    while(t--)
    {
        solve();
    }
}