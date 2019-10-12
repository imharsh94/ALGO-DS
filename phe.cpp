//codeforces 439 b
#include<bits/stdc++.h>
using namespace std;

int main()
 {
  long long a,b,k,d,mlt=1;
  cin>>a>>b;
  k=b-a;
  if(k>=10)
   cout<<"0\n";
  else
   {
    while(k--)
    {
     d = b%10;
     mlt = mlt * d;
     b--;
    }
    mlt = mlt % 10;
    cout<<mlt<<endl;
   } 
  return 0;
 }
