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

int kk=0;


void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m],b[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char ch;
            cin>>ch;
            arr[i][j]=ch-'0';
            b[i][j]=arr[i][j];
        }
    }
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                c++;
                arr[i][j]=0;
                if(j!=m-1)
                {
                    if(arr[i+1][j]==1)arr[i+1][j]=0;
                    else arr[i+1][j]=1;
                    if(arr[i+1][j+1]==1)arr[i+1][j+1]=0;
                    else arr[i+1][j+1]=1;
                }
                else
                {
                    if(arr[i+1][j]==1)arr[i+1][j]=0;
                    else arr[i+1][j]=1;
                    if(arr[i+1][j-1]==1)arr[i+1][j-1]=0;
                    else arr[i+1][j-1]=1;
                }
            }
        }
    }
    int i=n-1;
    for(int j=0;j<m;j++)
    {
        if(arr[i][j]==1 && j<m-1)
        {
            if(arr[i][j+1]==1)
            {
                c+=2;
                arr[i][j]=0;
                arr[i][j+1]=0;
            }
            else
            {
                arr[i][j]=0;
                arr[i][j+1]=1;
                c+=2;
            }
        }
    }
    
    if(arr[i][m-1]==1)
    {
        int j=m-1;
        c+=3;
    }
    cout<<c<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[i][j]==1)
            {
                c++;
                b[i][j]=0;
                cout<<i+1<<" "<<j+1<<" ";
                if(j!=m-1)
                {
                    cout<<i+1+1<<" "<<j+1<<" "<<i+1+1<<" "<<j+1+1<<endl;
                    if(b[i+1][j]==1)b[i+1][j]=0;
                    else b[i+1][j]=1;
                    if(b[i+1][j+1]==1)b[i+1][j+1]=0;
                    else b[i+1][j+1]=1;
                }
                else
                {
                    cout<<i+1+1<<" "<<j+1<<" "<<i+1+1<<" "<<j-1+1<<endl;
                    if(b[i+1][j]==1)b[i+1][j]=0;
                    else b[i+1][j]=1;
                    if(b[i+1][j-1]==1)b[i+1][j-1]=0;
                    else b[i+1][j-1]=1;
                }
            }
        }
    }
    i=n-1;
    for(int j=0;j<m-1;j++)
    {
        if(b[i][j]==1 && j<m-1)
        {
            if(b[i][j+1]==1)
            {
                cout<<i+1<<" "<<j+1+1<<" "<<i-1+1<<" "<<j+1+1<<" "<<i-1+1<<" "<<j+1<<endl;
                cout<<i+1<<" "<<j+1<<" "<<i-1+1<<" "<<j+1+1<<" "<<i-1+1<<" "<<j+1<<endl;
                b[i][j]=0;
                b[i][j+1]=0;
            }
            else
            {
                b[i][j]=0;
                b[i][j+1]=1;
                cout<<i+1<<" "<<j+1+1<<" "<<i-1+1<<" "<<j+1+1<<" "<<i-1+1<<" "<<j+1<<endl;
                cout<<i+1<<" "<<j+1<<" "<<i-1+1<<" "<<j+1+1<<" "<<i-1+1<<" "<<j+1<<endl;
            }
        }
    }
    if(b[i][m-1]==1)
    {
        int j=m-1;
        cout<<i+1<<" "<<j+1<<" "<<i-1+1<<" "<<j+1<<" "<<i-1+1<<" "<<j-1+1<<endl;
        cout<<i-1+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j-1+1<<endl;
        cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j-1+1<<" "<<i-1+1<<" "<<j-1+1<<endl;
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
    int n=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}