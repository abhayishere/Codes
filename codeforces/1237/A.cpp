#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
map<ll,ll>mp;
void primeFactors(ll n)  
{  
    while (n % 2 == 0)  
    {  
        mp[2]++;
        n = n/2;  
    }  
    for (ll i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            mp[i]++;  
            n = n/i;  
        }  
    }  
    mp[n]++; 
}  
int main()  
{  
    int t;
    cin>>t;
    int f=-1;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2!=0)
        {
            if(f==1)
            cout<<(n-1)/2;
            else
            {
                cout<<(n+1)/2;
            }
            f=f*-1;
        }
        else cout<<n/2;
        cout<<endl;
    }
} 