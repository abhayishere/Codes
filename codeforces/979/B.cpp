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
    int N;
    int n;
    cin>>n;
    int ans[3]={0};
    for(int i=0;i<3;i++)
    {
        string s;
        cin>>s;
        N=s.length();
        map<char,int>m;
        for(auto j:s)m[j]++;
        int mx=0;
        for(auto j:m)mx=max(mx,j.second);
        ans[i]=mx;
    }
    for(int i=0;i<3;i++)
    {
        if(ans[i]==N && n==1)ans[i]--;
        else ans[i]=min(ans[i]+n,N);
    }
    if(((ans[0]==ans[1] || ans[0]==ans[2]) && ans[0]==max({ans[0],ans[1],ans[2]}))||((ans[1]==ans[0] || ans[1]==ans[2]) && ans[1]==max({ans[0],ans[1],ans[2]}))||((ans[2]==ans[1] || ans[0]==ans[2]) && ans[2]==max({ans[0],ans[1],ans[2]})))
    {
        cout<<"Draw"<<endl;
        return;
    }
    if(ans[0]==max({ans[0],ans[1],ans[2]}))cout<<"Kuro";
    else if(ans[1]==max({ans[0],ans[1],ans[2]}))cout<<"Shiro";
    else if(ans[2]==max({ans[0],ans[1],ans[2]}))cout<<"Katie";
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
    while(t--)
    {
        solve();
    }
}