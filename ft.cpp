#include<bits/stdc++.h>
using namespace std;

int dp[10000016];

int solve(int x)
  {
    if(x==0)
      return 1;
    if(dp[x] != -1)
      return dp[x];
    return (dp[x] = x * solve(x-1));    
  }
  
int main()
{
memset(dp,-1,sizeof(dp));
solve(5);
cout<<dp[5];
return 0;
}
