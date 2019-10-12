//spoj
#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int n,c=0,flag=0;
cin>>n;
set<long long int > s;
long long int rem,temp,sq=0;
 while(n>0)
  {
   sq=0;
   c++;
   temp = n;
   
    if(s.count(n))
   {
    break;
   }
   
   s.insert(n);
   
   
   while(temp>0)
    {
     rem = temp % 10;
     sq = sq + rem*rem;
     temp/=10;
    
    }
   
     if(sq == 1)
     {flag=1;break;}
     
    n=sq;
  }
  if(flag)
   cout<<c<<endl;
  else
   cout<<-1<<endl; 
   
return 0;
}
