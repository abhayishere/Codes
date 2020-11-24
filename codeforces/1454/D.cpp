#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
#define form(i, n) for(int i = 0; i <n ;i++) 
#define mp make_pair
#define pb push_back
#define sortvec(v) sort(v.begin(),v.end());
#define sortarr(a,n) sort(a,a+n);
typedef pair<int, int> pt;
map<int,int>m;
void primeFactors(int n)  
{  
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        m[2]++;
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            m[i]++;
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        m[n]++;
}  

void solve()
{
    int n;
    cin>>n;
    vector<int>fact;
    primeFactors(n);
    int k=0,mm=0;
    for(auto i:m){
        if(i.second>k)
        {
            k=i.second;
            mm=i.first;
        }
    }
    cout<<k<<endl;
    for(int i=0;i<k-1;i++)n=n/mm,cout<<mm<<" ";
    cout<<n<<endl;
    m.clear();
}	

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
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