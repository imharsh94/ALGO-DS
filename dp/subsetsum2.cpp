// bottom up approach 
#include<bits/stdc++.h>
using namespace std;

bool dp[6][10];

int main()
{
   int arr[] = {1,2,3,4};
   int n = sizeof(arr)/sizeof(arr[0]);
   int sum=0;

   for(int i=0 ; i<n ; i++)
    sum += arr[i];

   if(sum % 2 != 0){
       cout<<"false\n";
       return 0;
   }

   
    sum = sum/2;
    cout<<dp[3][3]<<'\n';

    for(int i=0 ; i<n; i++)
        dp[i][0] = true;

    for(int i=1; i<=sum ; i++)
    {
        if( i == arr[0])
            dp[0][i] = true;
    }

   
    for(int i=1 ; i<n; i++)
    {
        for(int j=1; j<=sum; j++)
        {
            if(dp[i-1][j])
                dp[i][j] = dp[i-1][j];
            else if(j >= arr[i])
            {
                dp[i][j] = dp[i-1][j - arr[i]];
            }
        }
    }
    if(dp[n-1][sum])
        cout<<"Yes\n";
    else
    {
        cout<<"No\n";
    }
    

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0; j<=sum; j++)
        {
            cout<<dp[i][j]<<"  ";

        }
        cout<<endl;
    }

   return 0;
}