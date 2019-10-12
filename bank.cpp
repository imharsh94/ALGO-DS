#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,maxi;

   cin>>n;
   maxi = n;

   if(n/10 > maxi)
        maxi = n/10;
   if(n%10 + (n/100)*10 > maxi)
        maxi = n%10 + (n/100)*10 ;
   cout<<maxi<<'\n';
   return 0;
}