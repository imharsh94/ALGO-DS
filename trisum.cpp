// ! maximum triangle sum - - EXECUTED BY POINTERS
// ! BOTTOM UP APPROACH
#include<bits/stdc++.h>
using namespace std;


int trimax(int *arr,int m,int n,int z)
{


    for(int i=m-1; i>=0 ; i--)
    {
        for(int j=0 ; j<=i; j++)
        {
           if(arr[(i+1)*z + j] > arr[(i+1)*z + j+1])
                arr[i*z + j] += arr[(i+1)*z + j];
           else
                arr[i*z + j] += arr[(i+1)*z + j+1];

        }
    }

    return arr[0 + 0]; 
}

int main()
{
    int n,z=0;
    cin>>n;
    int arr[n][n];

    for(int i=0 ; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            cin>>arr[i][j];z++;
        }

        for(int k=z; k<n; k++)
        {
            arr[i][k] = 0;
        }
        z=0;

    }

    int ans = trimax((int *)arr,n-1,n-1,n);
    cout<<ans<<'\n';


    return 0;
}