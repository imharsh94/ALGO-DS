//spoj girls and boys
// pigeon hole principle
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int g,b;
 cin>>g>>b;
 while((g != -1) && (b != -1))
  {
   int max1 = max(g,b);
   int min1 = min(g,b);
   if(min1 == 0)
    cout<<max1<<endl;
   else if(min1 == max1)
    cout<<"1\n";
   else
   {
   min1++;
    int d = max1/min1;
    if(max1 % min1 == 0)
     cout<<d<<endl;
    else
      cout<<d+1<<endl;  
   } 
     
    
    cin>>g>>b;
  }
return 0;
}
