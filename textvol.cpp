#include<bits/stdc++.h>
using namespace std;

int main()
 {
   int n,c=0,ans=0,d=0;
   cin>>n;
   cin.ignore();
   string s;
   getline(cin,s);
   
   for(int i=0;i<s.length();i++)
    {
      if(s[i]>='A' && s[i]<='Z')
       {c++;}
      else if(s[i]==' ')
      {
      d++;
      ans = max(ans,c);
      c=0;
      } 
    }
    if(d)
     cout<<ans<<endl;
     else
     cout<<c<<endl;
 
 return 0;
 }
