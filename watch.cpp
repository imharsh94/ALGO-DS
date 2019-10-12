#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,c=0;
cin>>n;
set< int > s;
set < int >:: iterator it;
for(int i=1 ; i<=n ; i++)
  {
    int temp=i,sum=0;
    while(temp>0)
     {
       int rem = temp %10;
       sum = sum + rem;
       temp/=10;
     }
     if((i+sum) == n)
     {
      c++;
      s.insert(i);
     }
  }
  
  if(c)
   {
    cout<<c<<endl;
    for(it= s.begin() ; it != s.end() ; ++it)
      cout<<*it<<endl;
   }
  else
   cout<<0<<endl; 
   
return 0;
}
