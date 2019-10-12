#include<bits/stdc++.h>
using namespace std;

bool prime[50001];

void seive()
 {
   
   memset(prime,true,sizeof(prime));
   
   for(int i=2; i*i<= 50000 ; i++)
    {
      if(prime[2] == true)
       {
         for(int j=i*2; j<=50000 ;j+=i)
          prime[j] = false ;
       }
    }
   return ;
 }


int main()
{ 
 int n;
 cin>>n;
 int a[n][n];
 for(int i=0 ; i<n ; i++)
   for(int j=0; j<n ; j++)
     cin>>a[i][j];
   int x1=0,x2=0,x3=0,x4=0,c=0,ans;
   seive();  
 for(int i=0 ; i<n;i++)
  for(int j=0 ; j<n; j++)
     {
       if(j+1 < n)
        x1 = a[i][j+1];
       else
        x1=0; 
       if(i+1 < n)
        x2 = a[i+1][j];
       else
        x2=0; 
       if(i-1 >= 0)
        x3 = a[i-1][j];
       else
        x3=0; 
       if(j-1 >= 0)
        x4 = a[i][j-1];
       else
        x4=0; 
        
        ans = x1+x2+x3+x4;
        if(prime[ans])
         c++;  
      
     } 
      
     cout<<c<<endl;
 return 0;
}
