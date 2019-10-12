// maximum value obtained by cutting a rod 

#include<bits/stdc++.h>
using namespace std;

int cutRod(int arr[], int n)
{
    if(n <= 0)
        return 0;

    int maxval = INT_MIN;
    for(int i=0 ; i<n; i++)
        maxval = max(maxval, arr[i] + cutRod(arr, n - i -1));
    
    return maxval;
}

int main()
{
    int arr[] = {1,5,8,9,10,17,17,20};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<cutRod(arr,size)<<endl;
    return 0;
}