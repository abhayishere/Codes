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
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int j=0;j<m;j++)cin>>b[j];
    for(int A=0;A<pow(2,9);A++)
    {
        bool ans=1;
        for(int i=0;i<n;i++)
        {bool flag=0;
            for(int j=0;j<m;j++)
            {
                int c=a[i]&b[j];
                if(((a[i] & b[j]) & A) == (a[i] & b[j]))
                {
                    flag=1;
                }
            }
            if(!flag)
            {
                ans=0;
                break;
            }
        }
        if(ans)
        {
            cout<<A<<endl;
            return;
        }
    }

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
    while(t--)
    {
        solve();
    }
}