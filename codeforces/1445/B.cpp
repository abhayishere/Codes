
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
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
        int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(a+b,c+d)<<endl;
    }
}