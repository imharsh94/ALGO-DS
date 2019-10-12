// 14 july 2018 spoj philosophers stone
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
     int m,n; cin>>m>>n;
     int a[m+4][n+4];
     memset(a,0,sizeof(a));
     int dp[m+4][n+4];
     memset(dp,0,sizeof(dp));

     for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];

     for(int i=1;i<=n;i++)
        dp[1][i] = a[1][i];
     
     for(int i=2;i<=m;i++)
     {
         for(int j=1; j<=n; j++)
            dp[i][j] = a[i][j] + max(max(dp[i-1][j],dp[i-1][j-1]),dp[i-1][j+1]);
     }

     int ans=0;
     for(int i=1;i<=n;i++)
         ans = max(ans,dp[m][i]);

       //
     cout<<ans<<'\n';
    }
    return 0;
}
