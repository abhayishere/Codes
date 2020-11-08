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

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'|| s[i]=='y')
        {
            char ch=s[i];
            int c=0;
            while(i<n && s[i]==ch)
            {
                i++;
                c++;
            }
            i--;
            if(c==2)
            {
                if(ch=='e'||ch=='o')
                ans=ans+ch+ch;
                else ans+=ch;
            }
            else
            {
                ans+=ch;
            }
        }
        else ans+=s[i];
    }
    cout<<ans<<endl;
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
    //cin>>t;
    while(t--)
    {
        solve();
    }
}