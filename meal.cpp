#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,a,b,c,ans;
 cin>>n>>a>>b>>c;
 int z = min(a,b);
 z = min(z,c);
 if(z==a || z==b || n==1)
  {
   ans = (n-1)*z;
   cout<<ans<<endl;
  }
 else 
   {
   ans = min(a,b) + c*(n-2);
   cout<<ans<<endl;
   }
 return 0;
}
