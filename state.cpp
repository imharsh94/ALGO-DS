// tabulation 
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int dp[50];
 dp[0]=dp[1]=dp[2]=1;dp[3]=2;
 for(int i=4; i<=10 ; i++)
  dp[i] = dp[i-1] + dp[i-3] +dp[i-4];
  cout<<dp[4]<<" "<<dp[5];
return 0;
}
