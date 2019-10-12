#include<bits/stdc++.h>
using namespace std;

int maxsum(int arr[], int n, int k)
{
  if(n < k)
  {
    cout<<"Invalid\n";
    return -1;
  }

  int max_sum = 0;
  for(int i=0 ; i<k; i++)
  {
    max_sum += arr[i];
  }

  int sum = max_sum ;
  for(int i=k ; i<n; i++)
  {
    sum = sum +  (arr[i] - arr[i-k]);

    if(sum > max_sum)
      max_sum = sum ;

  }

  return max_sum ;
}

int main()
{
  int arr[] = {1,4,8,-3,6,5,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k=4;
  
  cout<<maxsum(arr, n, k)<<endl;
  return 0;
}
