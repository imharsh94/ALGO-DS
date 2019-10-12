// codechef lunchtime
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int pow9(ll b, ll k)
{
  ll ret =1;
  ll p2 = b%9;
    while(k)
     {
       if(k%2)
         {
           ret *= p2;
           ret %= 9;
         }
        p2 *= p2;
        p2 %= 9;
        k/=2; 
     }
     return ret;
}


int main()
{
int t;
cin>>t;
while(t--)
{
ll a,n;
cin>>a>>n;
int ans = pow9(a,n);
if(ans == 0)
 ans =9;
printf("%d\n",ans); }
return 0;
}
