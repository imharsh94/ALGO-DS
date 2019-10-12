#include<bits/stdc++.h>
using namespace std;

int main()
{ 
  string s,p;
  int c1=0,c2=1;
  cin>>s;
  for(int i=0;i<(s.length()/2);i++)
   {
     if(s[i] != s[s.length()-i-1])
       c1++;
   }
   
  p=s+s[0]; 
  for(int i=0;i<(p.length()/2);i++)
   {
     if(s[i] != p[p.length()-i-1])
       c2++;
   }
   
   int ans = min(c1,c2);
   cout<<ans<<endl;
return 0;
}
