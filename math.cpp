#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll  c,n,cc,nn=INT_MAX;

ll f(ll x)
{
    for(ll i=1; i<x ; i++)
    {
        ll z = (ll)sqrt(x*i)*sqrt(x*i);
        if( z == x*i)
           {
            
            if(i==1)
                c++;
            else
                c+=2;
            cout<<x<<" "<<i<<'\n';
           // n = sqrt(x*i);
           f(sqrt(x*i));
           if(i==1)
                c--;
            else
                c-=2;
           }
    }
    if(x < nn)
        {
            nn = x;
            cc = c;

        }
}

int main()
{
     
    cin>>n;
    f(n);

    cout<<nn<<" "<<cc<<'\n';
    return 0;
}