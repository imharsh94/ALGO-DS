#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,i,d,w,c;
    cin>>n>>k;

   d = n/((k+1)*2);
   c=k*d;
   w = c+d;
    cout<<d<<" "<<c<<" "<<(n-w);
    return 0;
}