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
    bool comp(const pair<int,string>& v1, const pair<int,string>& v2)
    { 
        if(v1.first==v2.first)return v1.second<v2.second;
        else return v1.first>v2.first;
    }
void solve()
{
    string x;
    cin>>x;
    int n;
    cin>>n;
    map<string,int>m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        string a;
        cin>>a;
        if(a[0]=='p')
        {
            cin>>a;cin>>a;
            a=a.substr(0,a.length()-2);
            if(m[s]==0)m[s]=0;
            if(m[a]==0)m[a]=0;
            if(a==x || s==x)m[a]+=15,m[s]+=15;
            cin>>a;
        }
        if(a[0]=='c')
        {
            cin>>a;cin>>a;
            a=a.substr(0,a.length()-2);
            if(a==x || s==x)m[a]+=10,m[s]+=10;
            if(m[s]==0)m[s]=0;
            if(m[a]==0)m[a]=0;
            cin>>a;
        }
        if(a[0]=='l')
        {
            cin>>a;
            a=a.substr(0,a.length()-2);
            if(a==x || s==x)m[a]+=5,m[s]+=5;
            if(m[s]==0)m[s]=0;
            if(m[a]==0)m[a]=0;
            cin>>a;
        }
    }
    vector<pair<int,string>>v;
    for(auto i:m)
    {
        v.push_back({i.second,i.first});
    }
    sort(v.begin(),v.end(),comp);
    for(auto i:v)
    {
        if(i.second!=x)
        cout<<i.second<<endl;
    }
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