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
    string s;
    cin>>s;
    if(s.length()==1)
    {
        cout<<0<<endl;
        return;
    }
    string f=s;
    char ch='A';
    int ans=0;
    for(int i=1;i<s.length();i++)
    {
        if(i>0 && f[i-1]==f[i])
        {
            f[i]=ch;
            ch++;
            ans++;
        }
        if(i>1 && f[i]==f[i-2])
        {
            f[i]=ch;
            ch++;
            ans++;
        }
        if(ch=='Z')ch='A';
    }
    f=s;
    int ans2=0;
    ch='A';
    for(int i=s.length()-2;i>=0;i--)
    {
        if(f[i+1]==f[i] )
        {
            f[i]=ch;
            ch++;
            ans2++;
        }
        if(i<s.length()-2 && f[i+2]==f[i])
        {
            f[i]=ch;
            ch++;
            ans2++;
        }
        if(ch=='Z')ch='A';
    }
    cout<<min(ans,ans2)<<endl;
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