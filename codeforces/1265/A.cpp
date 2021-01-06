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
void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    if(s[0]=='?')
    {
    	if(s.size()==1||s[1]=='b'||s[1]=='c')s[0]='a';
    	else s[0]='b';
    }
    set<char>p;
    p.insert('a');p.insert('b');p.insert('c');
    for(int i=1;i<n;i++)
    {
    	if(s[i]=='?')
        {
    		set<char>t=p;
    		t.erase(s[i-1]);
    		if(i!=n-1)
            t.erase(s[i+1]);
    		s[i]=*(t.begin());
    	}
    }
    int k=1;
    for(int i=1;i<n;i++)
    {
    	if(s[i]==s[i-1])
        {
            cout<<"-1"<<endl;
            return;
    	}
    }
    cout<<s<<endl;
    
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