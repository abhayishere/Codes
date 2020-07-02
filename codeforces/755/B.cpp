#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int x,y;
    cin>>x>>y;
    map<string,int>mp;
    for(int i=0;i<x+y;i++)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    int t=0;
    for(auto i:mp)
    {
        if(i.second>1)
        t++;
    }
    x=x-t;
    y=y-t;
    int i=0;
    for(;;i++)
    {
        if(i%2==0)
        {
            if(t>0)
            t--;
            else if(x>0)
            x--;
            else
            {
                cout<<"NO";
                break;
            }
            
        }
        else
        {
            if(t>0)
            t--;
            else if(y>0)
            y--;
            else
            {
                cout<<"YES";   
                break;             
            }
        }
    }
}