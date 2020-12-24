//karne se hi hota hai ;)
#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
#define fr(i,a,b) for(int i=a;i<b;i++)
#define sortv(a) sort(a.begin(),a.end())
#define sorta(a,n) sort(a,a+n)
#define bgnd(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define inf 1e16
#define lb lower_bound  //THIS GIVES THE ITR TO THE ELEMENT IN RANGE [SI,EI) THAT IS >= OUR VALUE 
#define ub upper_bound  //THIS GIVES THE ITR TO THE ELEMENT IN RANGE [SI,EI) THAT IS > OUR VALUE 
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
    vector<int>v,av;
    map<int,int>r,ans;
    fr(i,0,n)
    {
        int a,b;
        cin>>a>>b;
        v.pb(a);
        av.pb(a);
        ans[a]=-1;
        r[a]=b;
    }
    sortv(v);
    int m;
    cin>>m;
    int aa=0;
    fr(i,1,m+1)
    {
        int x,y;
        cin>>x>>y;
        auto it=lower_bound(bgnd(v),x)-v.begin();
        //cout<<i<<" "<<it<<endl;
        // if(i==3)
        // {
        //     cout<<x<<" "<<v[it]<<" "<<y<<endl;
        //     cout<<pow(x-v[it],2)+y*y<<" "<<pow(r[v[it]],2)<<endl;
        // }
            if(it!=n && (pow(x-v[it],2)+y*y<=pow(r[v[it]],2)) && ans[v[it]]==-1){
                ans[v[it]]=i;
                aa++;
            }
            if( it!=0 && pow(x-v[it-1],2)+y*y<=pow(r[v[it-1]],2) && ans[v[it-1]]==-1){
                ans[v[it-1]]=i;
                aa++;
            }
    }
    cout<<aa<<endl;
    for(auto i:av)cout<<ans[i]<<" ";
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while(t--)
    {
        solve();
    }
}