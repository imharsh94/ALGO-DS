#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007

int sum(ll x)
 {
   int sum = 0;
   while(x)
    {
      sum += x%10;
      x /= 10;
    }
    return sum;
 }

int F(ll x)
 {
   if(x<10)
    {
      return x;
      
    }
   else
    {
     return F(sum(x));
    } 
 }

int solve(ll a, ll n)
 {
   ll res =1;
   while(n)
   {
     if(n%2 == 1)
      {
       res = res*F(a);
       res = F(res);
      }
      a = F(F(a)*F(a));
      n /= 2;
   }
   return res;
 }
 
 int main()
 {
  int t;
  cin>>t;
  ll a,n;
  while(t--)
  {
   cin>>a>>n;
   cout<<solve(a,n)<<endl;
  }
  return 0;
 }





















