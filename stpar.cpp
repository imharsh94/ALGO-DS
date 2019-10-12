//spoj
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
 while(n)
 {
 int k=1,a;
 
 stack< int > s;
 queue< int > q;
 
 for(int i=1 ; i<=n ; i++)
  {
   cin>>a;
   q.push(a);
  }
  while(k <= n)
   {
   if(!q.empty() && q.front() == k)
    {
      k++;
      q.pop();
    }
    else if(!s.empty() && s.top() == k)
     {
      s.pop();
      k++;
     }
    else if(q.empty() && !s.empty() && s.top() != k)
     break; 
    else 
    {
     int z = q.front();
     q.pop();
     s.push(z);
    }
     
   }
  if(k == n+1)
   cout<<"yes\n";
  else
   cout<<"no\n";  
   cin>>n;
 }
return 0;
}
