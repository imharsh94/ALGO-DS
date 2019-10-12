#include<bits/stdc++.h>
using namespace std;

void miss(int arr[], int n,int low,int high )
{
    sort(arr,arr+n);

    int *ptr = lower_bound(arr,arr+n,low) ;
      int index = ptr - arr;

      cout<<*ptr<<endl;
      
    int i=index,x=low;
    while(i<n && x<=high)
    {
	if(arr[i] != x)
	    cout<<x<<" ";
	else
	    i++;
	x++;
    }
    while(x<= high)
	cout<<x++<<" ";
}



int main()
{
    int arr[] = {1,14,11,51,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 50,high=55;
    
    miss(arr,n,low,high);
    
    return 0;
}


