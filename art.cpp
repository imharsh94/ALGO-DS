//codeforces A-439
#include<bits/stdc++.h>
using namespace std;

int main()
 {
  int n;
  cin>>n;
  int a[n],b[n];
  
  set< int > s;
  
  for(int i=0; i<n ; i++)
   {
    cin>>a[i];
    s.insert(a[i]);
   }
   
   for(int i=0; i<n ; i++)
   {
    cin>>b[i];
    s.insert(b[i]);
   }
  
  int z,c=0;
  
  for(int i=0 ; i<n ; i++)
   {
    for(int j=0 ; j<n ;j++)
     {
       z = a[i] ^ b[j];
       if(s.count(z) )
        c++;
     }
   }
   
   if(c%2 == 0)
    cout<<"Karen\n";
   else
     cout<<"Koyomi\n";
  return 0;
 }
