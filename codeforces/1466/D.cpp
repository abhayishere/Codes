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
    vector<pair<int,int>>v;
    int sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
        v.push_back({a,i+1});
    }
    map<int,int>s;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        s[a]++;s[b]++;
    }
    for(int i=1;i<=n;i++)s[i]--;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    vector<pair<int,int>>g;
    int k=0;
    cout<<sum<<" ";
    for(int i=2;i<n;i++)
    {
        int t=v[k].second;
        //cout<<v[k].first<<" "<<v[k].second<<" "<<s[t]<<" "<<k<<endl;
        if(s[t]>0)
        {
            s[t]--;
            sum+=v[k].first;
        }
        else
        {
            while(s[v[k].second]<=0)
            {
                k++;
            }
            sum+=v[k].first;
            s[v[k].second]--;
        }
        cout<<sum<<" ";
    }
    cout<<endl;
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
    cin>>t;
    while(t--)
    {
        solve();
    }
}