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
int LAS(int arr[], int n)
{
 
    // "inc" and "dec" intialized as 1
    // as single element is still LAS
    int inc = 1;
    int dec = 1;
 
    // Iterate from second element
    for (int i = 1; i < n; i++) 
    {
 
        if (arr[i] > arr[i - 1]) 
        {
 
            // "inc" changes iff "dec" 
            // changes
            inc = dec + 1;
        }
 
        else if (arr[i] < arr[i - 1]) 
        {
 
            // "dec" changes iff "inc" 
            // changes
            dec = inc + 1;
        }
    }
 
    // Return the maximum length
    return max(inc, dec);
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0;
    for(auto i:s)
    {
        if(i=='1')x++;
        else y++;
    }if(x==0 || y==0)
    {
        if(n>2)cout<<3<<endl;
        else cout<<n<<endl;
        return;
    }

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
        if(z+1>2){
            ans+=2;
        }
        if(o+1>2)ans+=2;
        if(i<n)
        f.push_back(s[i]);
    }
    
    int size=f.size();
    ans+=size;
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
    cout<<ans<<endl;
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