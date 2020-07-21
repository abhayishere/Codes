#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define decimal(x) cout<<fixed<<setprecision(x);
void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<int>ans;
    int c=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]!=b[i])
        {
            if(i==0)
            {
                c++;
                ans.push_back(1);
            }
            else
            {
                if(a[0]==b[i])
                {
                    c++;
                    ans.push_back(1);
                    if(b[i]=='1')
                    a[0]='0';
                    else a[0]='1';
                }
                c++;
                ans.push_back(i+1);
                string temp=a.substr(0,i+1);
                reverse(temp.begin(),temp.end());
                for(int j=0;j<=i;j++)
                {
                    if(temp[j]=='1')
                    temp[j]='0';
                    else temp[j]='1';
                }
                for(int j=0;j<=i;j++)
                a[j]=temp[j];
            }
        }
    }
    cout<<ans.size()<<" ";
    for(auto i:ans)
    cout<<i<<" ";
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}