// recursive solution to find subset partition(Top down approach)
#include<bits/stdc++.h>
using namespace std;

bool dp[10][10];

int  issubset( int arr[], int n, int sum)
{
    if(sum == 0 )
        return true;
    if(n ==0 && sum != 0)
        return false;

     if(dp[n-1][sum] == true)
        return dp[n-1][sum];
        

    if(arr[n-1] > sum)
        return  dp[n-1][sum] = issubset(arr,n-1,sum);

    return (dp[n-1][sum] = (issubset(arr,n-1,sum-arr[n-1]) || issubset(arr,n-1,sum)) );
}



int main()
{
    
    cout<<dp[3][3]<<'\n';
    int arr[] = {2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0 ; i<n;i++)
        sum += arr[i];

    if(sum % 2 != 0)
    {
        cout<<"false\n";
        return 0;
    }

    
    cout<<dp[3][3]<<'\n';

    bool b = issubset(arr,n,sum/2) ;

    for(int i=0 ; i<3; i++)
    {
        for(int j=0 ; j<=8 ; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    
    if(b == false)
        cout<<"No\n";
    else 
    {
        cout<<"Yes\n";
    }
    
    return 0;
}