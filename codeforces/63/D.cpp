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
    int a,b,c,d,n;
    cin>>a>>b>>c>>d>>n;
    char ch[max(b,d)][a+c];
    int area[n];
    for(int i=0;i<n;i++)
    {
        cin>>area[i];
    }
    for(int i=0;i<max(b,d);i++)
    {
        for(int j=0;j<a+c;j++)
        {
            ch[i][j]='.';
        }
    }
    int k=0;
    {
        for(int i=0;i<a;i++)
        {
            if(a%2==i%2)
            {
                for(int j=0;j<b;j++)
                {
                    if(area[k]>0){
                        area[k]--;
                        ch[j][i]=char('a'+k);
                    }
                    else
                    {
                        while(area[k]==0)k++;
                        area[k]--;
                        ch[j][i]=char('a'+k);
                    }
                }
            }
            else
            {
                for(int j=b-1;j>=0;j--)
                {
                    if(area[k]>0){
                        area[k]--;
                        ch[j][i]=char('a'+k);
                    }
                    else
                    {
                        while(area[k]==0)k++;
                        area[k]--;
                        ch[j][i]=char('a'+k);
                    }
                }
            }
        }
        for(int i=a;i<a+c;i++)
        {
            if(a%2==i%2)
            {    
                for(int j=0;j<d;j++)
                {
                    if(area[k]>0)
                    {
                        area[k]--;
                        ch[j][i]=char('a'+k);
                    }
                    else
                    {
                        while(area[k]==0)k++;
                        area[k]--;
                        ch[j][i]=char('a'+k);
                    }
                }
            }
            else
            {
                for(int j=d-1;j>=0;j--)
                {
                    if(area[k]>0)
                    {
                        area[k]--;
                        ch[j][i]=char('a'+k);
                    }
                    else
                    {
                        while(area[k]==0)k++;
                        area[k]--;
                        ch[j][i]=char('a'+k);
                    }
                }
            }
            
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<max(b,d);i++)
    {
        for(int j=0;j<a+c;j++)
        {
            cout<<ch[i][j]<<"";
        }
        cout<<endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while(t--)
    {
        solve();
    }
}
//Life is a race … If you don’t run fast… you will be like a broken andaa…