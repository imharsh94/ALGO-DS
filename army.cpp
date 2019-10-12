#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
 {
  int a,b;
  cin>>a>>b;
  int g[a],m[b];
  
  for(int i=0;i<a;i++)
   cin>>g[i];
   
  for(int i=0;i<b;i++)
   cin>>m[i];  
  
 
  
  for(int i=0,j=0; ;)
  {
   if(a==0 || b==0)
    break;
    
   if(g[i] >= m[j])
    {
      b--;
      j++;    
    } 
   else
   {
     a--;
     i++;
   } 
  }
   if(a==0)
    cout<<"MechaGodzilla\n";
   else if(b==0)
    cout<<"Godzilla\n";
   else
    cout<<"Uncertain\n";   
 }
return 0;
}
