// unbounded knapsack
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int W=8;
    int val[]={10,40,50,70};
    int wt[]={1,3,4,5};
    int n = sizeof(wt)/sizeof(wt[0]);

    int dp[W+1];
    memset(dp,0,sizeof(dp));

    for(int i=1; i<=W; i++){
        for(int j=0; j<n; j++){
            if(wt[j]<= i){
                dp[i] = max(val[j]+dp[i-wt[j]],dp[i]);
            }
        }
    }
    cout<<dp[W]<<'\n';
    return 0;
}