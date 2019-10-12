#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll expo(ll n)
{
    ll ans=1,c=2;
    while(n!=0) {
        if(n&1)
            ans=(ans*c)%100000;
        c=(c*c)%100000;
        n>>=1;
    }
    return ans;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll ans = expo(n);
        cout<<(ans-1+100000)%100000<<'\n';
    }
    return 0;
}