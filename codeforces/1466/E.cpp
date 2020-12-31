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
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int help[61]={0};
    for(int c=0;c<60;c++)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]>>c&1)
            {
                help[c]++;
            }
        }
    }
    int x=0;
    int ans_or=0,ans_and=0;
    int a[n]={0},b[n]={0};
    for(int i=0;i<n;i++)
    {
        ans_and=0;
        for(int c=0;c<60;c++)
        {
            if(arr[i]>>c&1)
            {
                (ans_and+=(1ll<<c)%mod*help[c])%mod;
            }
        }
        ans_and%=mod;
        (a[i]=(ans_and)%mod)%mod;
    }
    // when then bit is 0
    //n-(1-0)x(summation of 1(==n)-help[c])
    // n-1x(n-help[c]);
    //n-n+help[c]=help[c];
    //when the bit is 1 then it will be n only
    for(int i=0;i<n;i++)
    {
        ans_or=0;
        for(int c=0;c<60;c++)
        {
            if(arr[i]>>c&1)
            {
                (ans_or+=(1ll<<c)%mod*n)%mod;
            }
            else
            {
                (ans_or+=(1ll<<c)%mod*help[c])%mod;
            }
        }
        ans_or%=mod;
        (b[i]=ans_or%mod)%mod;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        (ans+=1ll*a[i]*b[i])%mod;
        ans%=mod;
    }
    cout<<ans%mod<<endl;
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