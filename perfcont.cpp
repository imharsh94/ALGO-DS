//codechef
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 
 while(t--)
  {
    int n,p,a,cakewk=0,hard=0;
    cin>>n>>p;
    
    for(int i=0 ; i<n; i++)
     {
       cin>>a;
       if(a >= (p/2))
        cakewk++;
       else if(a <= (p/10))
        hard++; 
     }
     
     if(cakewk==1 && hard == 2)
       cout<<"yes\n";
      else
       cout<<"no\n"; 
  }
  
  return 0;
}
