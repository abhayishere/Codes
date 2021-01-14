//Kaamyaab hone ke liye nahin, Kaabil hone ke liye padho!
#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define endl '\n'
#define inf 1e16
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
string help(string str)
{
    int letters[26] = {0}, min = 10000, len=0;
    int lent = str.size();
    for(int i=0; i<lent; i++)
        letters[(int)str[i]-97]++;
    for(int i=0; i<26; i++)
    {
        if(letters[i]>0)
        {
            if(letters[i]<min)min=letters[i];
        }
    }
    for(int i=0; i<26; i++)
    {
        len+= letters[i]/min;
    }
    string ans="";
    for(int i=0; i<len; i++)
        ans+=str[i];
    return ans;
}
void solve()
{
    string a,b;
    cin>>a>>b;
    int t=(a.length()*b.length())/(__gcd(a.length(),b.length()));
    string x="",y="";
    for(int i=0;i<t/a.length();i++){
        x+=a;
    }
    for(int i=0;i<t/b.length();i++){
        y+=b;
    }
    if(x!=y)cout<<"-1";
    else cout<<x;
    cout<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
//Life is a race … If you don’t run fast… you will be like a broken andaa…