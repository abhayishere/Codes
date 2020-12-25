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
    int n,t;cin>>n>>t;
    string a,b;
    cin>>a>>b;
    int s=0,d=0;
    for(int i=0;i<n;i++)
    {
        s+=(a[i]==b[i]);
        d+=(a[i]!=b[i]);
    }
    if(t<(d+1)/2)
    {
        cout<<-1<<endl;
        return;
    }
    int x=max(n-t-s,0ll);
    int y=max(n-t-s,0ll);
    t=n-t;
    string ans="";
    int turn=0;
    // cout<<t<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            if(t>0)
            {
                t--;
                ans+=a[i];
            }
            else
            {
                for(char ch='a';ch<='z';ch++)
                {
                    if(ch!=a[i] && ch!=b[i])
                    {
                        ans+=ch;
                        // cout<<ch<<" "<<a[i]<<" "<<b[i]<<endl;
                        break;
                    }
                }
            }
        }
        else
        {
            if(x>0)
            {
                ans+=a[i];
                x--;
            }
            else if(y>0)
            {
                ans+=b[i];
                y--;
            }
            else
            {
                for(char ch='a';ch<='z';ch++)
                {
                    if(ch!=a[i] && ch!=b[i])
                    {
                        ans+=ch;
                        break;
                    }
                }
            }
        }
        // cout<<ans<<endl;
    }
    cout<<ans;
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