#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m,x,y,z; cin>>n>>m;
    ll ma,mi=0;
    x= n - (m-1);
    ma = x*(x-1)/2;

    x = n/m;
    y = n%m;
    z = m-y;
    mi = y*x*(x+1)/2;
    mi += z*x*(x-1)/2;
	
    
    cout<<mi<<" "<<ma<<'\n';
    return 0;
}
