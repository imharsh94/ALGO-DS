//spoj
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,caset=0;
double r,s;
cin>>t;
while(t--)
 {
  caset++;
  cin>>r;
  s = 0.25 + 4*r*r;
  printf("Case %d: %0.2lf\n",caset,s);
 }
return 0;
}
