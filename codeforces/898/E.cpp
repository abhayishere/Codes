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

class hehe{
    public:
    int fr,ba,m;
};

bool bySize(const hehe &t1, const hehe &t2) {
	return t1.m < t2.m;
}

void solve()
{
    int n;
    cin>>n;
    hehe arr[n];
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[i].m=a;
    }
    sort(arr,arr+n,bySize);
    for(int i=0;i<n;i++){
        int a=arr[i].m;
        double t=sqrt(a);
        int tt=sqrt(a);
        if(t==tt){
            arr[i].fr=tt;
            arr[i].ba=t;
        }
        else
        {
            arr[i].ba=t;
            arr[i].fr=t+1;
        }
    }
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int a=arr[i].m,b=arr[i].fr,c=arr[i].ba;
        b=b*b;c=c*c;
        ans.push_back(min(abs(a-b),abs(c-a)));
    }
    sortvec(ans);
    int af=0;
    for(int i=0;i<n/2;i++)af+=ans[i];
    for(int i=n/2;i<n;i++)
    {
        if(ans[i]==0)
        {
            if(arr[i].m==0)af+=2;
            else af++;
        }
    }
    cout<<af<<endl;
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