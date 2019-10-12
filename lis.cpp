#include<bits/stdc++.h>
using namespace std;

int _lis(int arr[], int n,int *max_ref)
{
	if(n == 1)
		return 1;
	int res,max_ending_here=1;

	/* Recursive solution*/
	for(int =1; i<n ; i++)
	{
		res  = _lis(arr,i,max_ref);
		
	}
}

int lis(int arr[], int n)
{
	int max = 1;
	_lis(arr,n,&max);
	return max;
}

int main()
{
	int arr[] = {10,22,9,31,21,50};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Length of lis is %d \n",lis(arr,n));
	return 0;
}