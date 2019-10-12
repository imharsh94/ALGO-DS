// hackerearth tree mirror image
#include<bits/stdc++.h>
using namespace std;

int main()
{
 map< int ,string > m1;
 map< string , int > m2;
 m1[1]="";
 m2[""]=1;
 
 int n,q;
 cin>>n>>q;
 
 for(int i=0; i<n-1; i++)
  {
    int p,c;
    string s;
    cin>>p>>c>>s;
    m1[c] = m1[p]+s;
    m2[m1[p]+s] = c;
  }
  
  for(int i=0; i<q; i++)
   {
     int x;
     cin>>x;
     string sf = m1[x];
     
     for(int i=0; i<sf.size(); i++)
      {
        if(sf[i] == 'L')
         sf[i] = 'R';
        else
         sf[i] = 'L'; 
      }
      
      if(m2.find(sf) != m2.end())
        cout<<m2[sf]<<'\n';
       else
       cout<<"-1"<<'\n';        
            
   }
return 0;
} 
