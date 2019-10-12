#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,a[12010],b[12010],d;
cin>>t;
d=0;
for(int i=0;i<12000;i+=2)
 {
  a[i]=i+d;
  a[i+1]=i+1+d;
  d=d+2;  
 }
d=0; 
for(int i=2;i<12000;i+=2)
 {
  b[i] = i +d;
  b[i+1] = i+1 +d;
  d+=2;
 } 
 
while(t--)
 {
  int x,y;
  cin>>x>>y;
  
  if(x==y)
   cout<<a[x]<<endl;
  else if((x-y)==2)
   cout<<b[x]<<endl;
  else
   cout<<"No Number"<<endl;  
 } 
 return 0;
}
