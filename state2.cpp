//memoization state
#include<bits/stdc++.h>
using namespace std;

int dp[100];

int solve(int n)
{
 if(n<0)
  return 0;
 if(n==0)
  return 1;
 if(dp[n] != -1)
  return dp[n];
 return (dp[n] = solve(n-1)+solve(n-3)+solve(n-7));   
}


int main()
{
memset(dp,-1,sizeof(dp));
solve(5);
cout<<dp[5];
return 0;
}
