//karne se hi hota hai ;)
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
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char>f;
    int ans=0;
    int zf=0,of=0;
    for(int i=0;i<n;i++)
    {
        int z=0,o=0;
        while(i<n && f.size()>0 && s[i]==f.back()){
            i++;
            if(s[i]=='0')z++;
            else o++;
        }
        if(z+1>=2)zf++;
        if(o+1>=2)of++;
        if(i<n)
        f.push_back(s[i]);
    }
    int size=f.size();
    //cout<<zf<<" "<<of<<endl;
    if((zf>=1 && of>=1) || (zf>=2 || of>=2)){
        cout<<size+2<<endl;
    }
    else if(zf>=1 || of>=1)
    {

        if((s[0]==s[1] && s[1]==s[2]) || (s[n-3]==s[n-2] && s[n-2]==s[n-1]))cout<<size+2<<endl;
        else
        cout<<size+1<<endl;
    }
    else
    cout<<size<<endl;
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