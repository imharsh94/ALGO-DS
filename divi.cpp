#include<bits/stdc++.h>
using namespace std;



int main()
{

 int n,k,m;
 cin>>n>>k>>m;
 int a,c[m+10]={0},flag=0,rem;
 vector< int > v[m+10];
 for(int i=0; i<n; i++)
  {
   cin>>a;
   int z = a % m;
   c[z]++;
   v[z].push_back(a);
  }
 
 for(int i=0; i<m ; i++)
 {
  if(c[i] >= k)
   {
   rem =i;
    flag=1;
    break;
   }
 } 
 
 if(flag)
 {
  cout<<"Yes\n";
  for(int i=0; i<k ;i++)
   cout<<v[rem][i]<<" ";
 } 
 else
  cout<<"No\n"; 
  
return 0;
}
