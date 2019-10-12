#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long nint n,k,ans=0;
		cin>>n>>k;
		long long int c[n],dp[n];
		for(int i=0;i<n;i++)
			cin>>c[i];
   		memset(dp,0,sizeof(dp));

         if(c[0]<= k) dp[0]=c[0];

		for(int i=1;i<n;i++)
		{
 			if(c[i] <= k)
 				dp[i] = dp[i-1]+c[i];
 			else
 				dp[i]=0;
		}

		for(int i=0;i<n;i++)
         {
         	if(dp[i] > ans)
         		ans = dp[i];
         }

         cout<<ans<<endl;
	}
	return 0;
}