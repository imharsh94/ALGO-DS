#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--)
 {
   int n;
   cin>>n;
   int a[n+10];
   long long int d[n+10];
   
   memset(d,0,sizeof(int));
   
   for(int i=1; i<=n; i++)
     {
     cin>>a[i];
      }
   int q;
   cin>>q;
   d[1]=a[1];
   for(int i=2; i<=n; i++)
      d[i]= d[i-1]+a[i];
      
    
      
    
   while(q)
   {
    int c,b;
    cin>>c>>b;
    cout<<d[b]-d[c]+a[c]<<'\n';
    q--;
   } 
     
 }
 return 0;
}
