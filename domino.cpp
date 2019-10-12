#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,x,y,s=0,X=0,f=0;

   cin>>n;

   for(;n--;)
   {
       cin>>x>>y;
       s^=x^y;
       X^=y;
       f|=(x&1) != (y&1);
   }

   if((s&1) || (X&1)&&!f)
        cout<<-1<<'\n';
   else
        cout<<(X&1)<<'\n';
    return 0;
}