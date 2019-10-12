#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,d;
cin>>a>>d;

while(a!=0 && d!=0)
 {
  int a1[a],d1[d];
  
  for(int i=0 ; i<a ; i++)
   cin>>a1[i];
   
  sort(a1,a1+a);
  
  for(int i=0 ; i<d ; i++)
   cin>>d1[i];
   
  sort(d1,d1+d);
  
  if(a1[0] < d1[1])
    cout<<"Y\n";
  else
    cout<<"N\n";
    
   cin>>a>>d;     
 }
return 0;
}
