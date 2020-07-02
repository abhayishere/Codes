#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    int m=ceil((1.0*(n+1))/2);
    int x=0;int y=1;
    cout<<m<<endl;
    for(int i=0;i<n;i++)
    {
        if(i<m)
        cout<<++x<<" "<<y;
        else
        {
            cout<<x<<" "<<++y;
        }
        cout<<endl;
    }
}
//(ciel(root of n)^2)