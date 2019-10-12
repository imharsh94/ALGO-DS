#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll base(ll n)
  {
    if(n<9)
     return n;
    else
     {
       return (n%9 + 10*base(n/9));
     } 
     
  }
  
 int main()
  {
   string str;
   ll n;
   while(getline(cin,str))
     {
      n = strtoll(str.c_str(),NULL,0);
      cout<<base(n)<<endl;
     }
   return 0;
  } 
