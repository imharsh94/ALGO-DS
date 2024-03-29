#include<bits/stdc++.h>
#define ll  long long 
#define MOD (int)1e9 
using namespace std;

void power(ll F[2][2], ll n);
 void multiply(ll F[2][2], ll M[2][2]);

ll fib(ll n)
{
ll F[2][2]={{1,1},{1,0}};
if(n==0)
 return 0;
power(F,n-1);
return F[0][0]; 
}

void power(ll F[2][2], ll n)
 {
   if(n==0 || n==1)
    return;
   ll M[2][2]={{1,1},{1,0}};
   
   power(F,n/2);
   multiply(F,F);
   
   if(n%2 != 0)
    multiply(F,M); 
 }
 
 void multiply(ll F[2][2], ll M[2][2])
 {
   int x = F[0][0]*M[0][0] + F[0][1]*M[1][0];
   int y= F[0][0]*M[0][1] + F[0][1]*M[1][1];
   int z = F[1][0]*M[0][0] + F[1][1]*M[1][0];
   int w = F[1][0] *M[0][1] + F[1][1]*M[1][1];
   
   F[0][0] = x % MOD;
   F[0][1] = y % MOD;
   F[1][0] = z % MOD;
   F[1][1] = w % MOD;
   
 }

int main()
{
ll t;
cin>>t;
while(t--)
{
ll k;
cin>>k;
cout<<fib(k+2)<<endl;
}
return 0;
}
