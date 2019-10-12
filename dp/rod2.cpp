// maximum value obtained by cutting a rod 
// bottom up dp

#include<bits/stdc++.h>
using namespace std;

int cutRod(int arr[], int n)
{
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    

    for(int i=1; i<=n; i++)
    {
        int maxval = INT_MIN;
        for(int j=0; j<i; j++)
        {
            maxval = max(maxval , arr[j] + dp[i - j - 1]);
        }
        dp[i] = maxval;
    }

    return dp[n];
}

int main()
{
    int arr[] = {1,5,8,9,10,17,17,20};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<cutRod(arr,5)<<endl;
    return 0;
}