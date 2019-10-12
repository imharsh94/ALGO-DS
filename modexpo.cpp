// codeforces hello 2018
#include<bits/stdc++.h>
using namespace std;
#define ll long long



ll expo(ll a,ll n,ll m)
 {
 ll res=1;
 
  while(n)
   {
     if(a > m)
      return m; 
     
     if(n%2 == 1)
       res = (res*a);
     a =(a*a);
     n = n/2;
   }
   return (m%res);
 }


int main()
 {
  ll n,m;
  cin>>n>>m;
  ll ans = expo(2,n,m);
  cout<<ans<<endl;
  return 0;
 }
