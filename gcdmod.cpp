#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;


ll gcd(ll x,ll z)
{
    if(z==0)
	return x;
    else
	return gcd(z,x%z);
}

ll power(ll a,ll n)
{
    ll res = 1;
    while(n>0)
    {
    if(n%2 == 1)
	res = (res*a)%MOD;
    a=(a*a)%MOD;
    n>>=1;
    }
    return res;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
    ll a,b,n;
    cin>>a>>b>>n;

    ll x = power(a,n);
    ll y = power(b,n);

    // cout<<x<<" "<<y<<'\n';
    x = (x+y)%MOD;
    ll z = abs(a-b)%MOD;
    
    ll ans = gcd(x,z);
    cout<<ans<<'\n';
    }
    return 0;
}
