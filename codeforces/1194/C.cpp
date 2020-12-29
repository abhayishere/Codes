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
    string s,t,p;
    cin>>s>>t>>p;
    map<char,int>a,b;
    for(auto i:t)a[i]++;
    for(auto i:p)b[i]++;
    int i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]!=t[i])
        {
            if(b[t[i]]>0)
            {
                b[t[i]]--;
                s=s.substr(0,i)+t[i]+s.substr(i,s.length());
            }
            else
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    if(i!=t.length())
    {
        while(i<t.length())
        {
            if(b[t[i]]>0)
            {
                b[t[i]]--;
                s+=t[i];
            }
            else
            {
                cout<<"NO"<<endl;
                return;
            }
            i++;
        }
    }
    cout<<"YES"<<endl;
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