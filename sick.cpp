//codeforces
#include<bits/stdc++.h>
using namespace std;

int main()
 {
  int a,b,n;
  cin>>n;
  cin>>a>>b;
  int ans = a;
  for(int i =0 ; i<n-1 ; i++)
   {
    cin>>a>>b;
    while(a <= ans)
      {
        a = a+ b;
        
      }
      ans = a;
   }
   cout<<ans<<endl;
  return 0;
 }
