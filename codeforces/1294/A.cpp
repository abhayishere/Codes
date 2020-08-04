#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
#define hackercup(x) cout<<"Case #"<<x<<": ";
void solve()
{
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	int k=max(a,max(b,c));
	int t=abs(k-a)+abs(k-b)+abs(k-c);
	if(t>n)
	{
			cout<<"NO"<<endl;
			return;
	}
	n=n-t;
	if(n%3==0)
		cout<<"YES";
	else
		cout<<"NO";
	cout<<endl;
}
int main()
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
/*
1 2 3 4 5 6 7
1 3 5 7 4 6 2
*/