//  ways to sum to n using distinct array elements with
//  repetition allowed dp recursively order matters

#include<bits/stdc++.h>
using namespace std;

int arr[10];
int m;
int dp[10];

int count( int n)
{
    int res = 0;
    if(n == 0)
        return 1;

    if(n < 0)
        return 0;

    if(dp[n])
        return dp[n];

    for(int i=0 ; i<m; i++)
         dp[n] += count(n - arr[i]);

    return dp[n];
}


int main()
{
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    dp[0]=1;
    
    m = 3;

    int N = 7;
    cout<<count(4)<<'\n';
    cout<<count(N)<<'\n';
    cout<<count(6)<<'\n';
    return 0;
}