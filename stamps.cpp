#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,j=0,i;
cin>>t;

 while(t--)
  {
  j++;
   int stamps,no,c=0,flag=0;
   cin>>stamps>>no;
   int a[no];
   for(int i=0 ; i<no ; i++)
    cin>>a[i];
   
   sort(a,a+no);
   int sum=0;
   for(i=no-1 ; i>=0 ; i--)
   {
     
      sum = sum + a[i];
     
      if(sum >= stamps)
       break;
     
     
   } 
   
   if(sum >= stamps)
   {
   cout<<"Scenario #"<<j<<":"<<endl;
   cout<<no-i-1<<endl;
   //cout<<endl;
   
   }
   else
   {
   cout<<"Scenario #"<<j<<":"<<endl;
   cout<<"impossible"<<endl;
  // cout<<endl;
  
   }
   
  }
return 0;
}
