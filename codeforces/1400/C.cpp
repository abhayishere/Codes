
#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl '\n'
using namespace std;
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
	string s;int x;
	cin>>s>>x;
	string w=string(s.length(),'1');
	for(int i=0;i<s.length();i++){
		if(s[i]=='0')
		{
			if(i-x>=0)
			w[i-x]='0';
			if(i+x<s.length())
			w[i+x]='0';
		}
	}
	int f=1;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			if(i-x>=0 && w[i-x]=='1')
			continue;
			if(i+x<s.length() && w[i+x]=='1')
			continue;
			f=-1;
		}
	}
	if(f==-1)
	cout<<-1<<endl;
	else
	{
		cout<<w<<endl;
	}
	
	
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