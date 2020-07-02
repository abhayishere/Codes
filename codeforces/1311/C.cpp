#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int p[m];
        vector<int>pref(n);
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            ++pref[a-1];
        }
        map<char,int>mp;
        for(int i=n-1;i>0;i--)
        {
            pref[i-1]+=pref[i];
        }
        vector<int>ans(26);
        for(int i=0;i<n;i++)
        {
            ans[s[i]-'a']+=pref[i];
            ++ans[s[i]-'a'];
        }
        for(int i=0;i<26;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}