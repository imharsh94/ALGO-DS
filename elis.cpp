#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int lis[20],a[20];
 for(int i=0;i<n;i++)
  lis[i]=1;
 for(int i=0;i<n;i++)
   cin>>a[i];
 
 for(int i=1;i<n;i++)
 {
  for(int j=0;j<i;j++)
   {
  if(a[i]>a[j] )
   lis[i]=lis[j]+1;
   }
 }
 int tmp=0;
 for(int i=0;i<n;i++)
 {
  if(tmp<lis[i])
    tmp=lis[i];
 }
 cout<<tmp<<'\n';
return 0;
}
