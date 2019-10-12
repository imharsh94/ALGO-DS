//codeforces
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int a[n],z[200]={0};
 for(int i=0; i<n ; i++)
 {
  cin>>a[i];
  z[a[i]]++;
 }
 sort(a,a+n);
 if(z[a[1]] == z[a[n-1]] && (z[a[1]] + z[a[n-1]] == n))
  {
  cout<<"YES\n";
  cout<<a[0]<<" "<<a[n-1]<<endl;
  }
 else
  cout<<"NO\n"; 
return 0;
}
