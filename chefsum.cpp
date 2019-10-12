#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
  {
    int n;
    cin>>n;
    int a[n+100]={0},sum[n+100]={0},rsum[n+100]={0};
    cin>>a[1];
    sum[1]=a[1];
   
    for(int i=2;i<=n;i++)
    {
      cin>>a[i];
      sum[i] = sum[i-1]+ a[i] ;
    }
    rsum[n]=a[n];
    for(int i=n-1 ; i>=1; i--)
    {
      rsum[i] = rsum[i+1]+a[i];
    }
    int index,t=sum[n]+rsum[1];
    for(int i=1;i<=n;i++)
    {
      int temp = sum[i] + rsum[i];
      if(temp < t)
      {
       t = temp;
       index = i;
      }
    }
    cout<<index<<endl;
  }
return 0;
}
