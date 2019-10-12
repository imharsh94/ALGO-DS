#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
int main()
{
    int t; cin>>t;
    while(t--)
    {
    ll n; cin>>n;
    ll sum = (((n-1)%MOD)*(n%MOD))%MOD;
    sum = (sum+n)%MOD;
    cout<<sum<<'\n';
    }
    return 0;
}