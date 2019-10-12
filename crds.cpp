//spoj cards
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
  long long int l;
  cin>>l;
  long long int y=0,ans=0;
   y = (2*l*(l+1)/2 + ((l-1)*(l))/2);
 //  z = (l-1)*(l)/2;
   
    ans =y % 1000007;
   cout<<ans<<endl;
 }
 
return 0;
}
