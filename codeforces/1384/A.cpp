#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
#define hackerboi(x) cout<<"Case #"<<x<<": ";
#include <bits/stdc++.h> 
using namespace std; 
vector<int>org,ind;

void solve()
{
	int n;
	cin>>n;
	int d[n];
	string s[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>d[i];
	}
	s[0]=string(51,'a');
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<51;j++)
		{
			if(j<d[i])
			{
				s[i+1]=s[i+1]+s[i][j];
			}
			else
			{
				if(s[i][j]=='a')
					s[i+1]+='b';
				else
					s[i+1]+='a';
			}
		}
	}
	for(int i=0;i<=n;i++)
		cout<<s[i]<<endl;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int n=t;
    while(t--)
    {
    	solve();
    }
}