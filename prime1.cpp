#include<bits/stdc++.h>
#define ll long long
using namespace std;

void cal_primes(vector< int >& prime)
 {
  prime[0]=0;
  prime[1]=0;
  ll i,j,temp;
  
  for(i=2 ; i<=32000; i++)
  {
   j=i;
   temp = j*i;
   while(temp<= 32000)
    {
    prime[temp] = 0;
    j++;
    temp = j*i;
    }
  }
 }


int main()
{
 vector< int > prime(32000,1);
 cal_primes(prime);
 int cases;
 cin>>cases;
  
  for(int t=0; t<cases ; t++)
   {
    ll m,n,i,j;
    cin>>m>>n;
    vector< int > seive(n-m+1,1);
    for(i=2 ;i<32000 ; i++)
    {
     if(prime[i] == 1)
     { 
       if(m%i == 0)
         j=m/i;
       else
         j= m/i +1;
       
       if(j < i)
        j=i;
        
       ll temp = j*i;
       while(temp <= n)
        {
          seive[temp-m]=0;
          j++;
          temp = j*i;
        }     
     }
  
  }
  
  if(m == 1)
   {
    seive[0] = 0;
   }
   
   for(i=0;i<n-m+1;i++)
   {
     if(seive[i] == 1)
      printf("%lld\n",m+i);
   }
  
 } 
 return 0;
}

