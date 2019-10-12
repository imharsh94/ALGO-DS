#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t; cin>>t;
 while(t--)
 {
 int n;
 cin>>n;
 long long s,max=0,min=0;
 int arr[100100];
 memset(arr,0,sizeof(arr));
 for(int i=0;i<n;i++)
   cin>> arr[i];
   
 sort(arr,arr+n); 
 for(int i=0;i<n/2;i++)
  {
    max += abs(arr[n-i-1] - arr[i]);
  } 
  
  for(int i=0;i<n;i+=2)
  {
    min += abs(arr[i+1] - arr[i]);
  }
  cout<<min<<" "<<max<<endl; 
  }
 return 0;
}
