#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int x=-1,y=-1,i;
    for(i=0;i<=(n/a);i++)
    {
        if((n-i*a)%b==0)
        {
            x=i;
            y=(n-i*a)/b;
            break;
        }
    }
    if(x!=-1 && y!=-1)
    {
        cout<<"YES"<<endl;
        cout<<i<<" "<<(n-i*a)/b;
    }
    else
    {
        cout<<"NO";
    }
    
    cout<<endl;
}
//x*a+y*b=n