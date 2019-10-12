#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,a,c=0,flag=0;
 cin>>n;
 vector< int > v[1005];
 
 for(int i=2 ; i<=n ; i++)
  {
    cin>>a;
    v[a].push_back(i);
  }
  
  for(int i=1 ; i<n ; i++)
    {
    if(v[i].size()==0)
      continue;
    for(int j=0 ; j<v[i].size(); j++)
     {
       if(v[v[i][j]].size() == 0)
        c++;
     }
     if(c<3)
      {flag=1;break;}
     c=0; 
    }
    
   if(flag)
    cout<<"No"<<endl;
   else
    cout<<"Yes"<<endl;  
return 0;
}
