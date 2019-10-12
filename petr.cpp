#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll k,l,a,i=0;
    cin>>k>>l;
    a=k;
    while(a<l)
    {
        a = a*k;
        i++;
    }

    if(a == l)
    {
        cout<<"YES\n";
        cout<<i<<'\n';
    }
    else
        cout<<"NO\n";
    return 0;
}