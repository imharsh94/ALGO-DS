#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int dp[100000];
int coins(int n)
{
    if(n<0)
	return 0;
    if(dp[n])
	return dp[n];
    
    return dp[n]= max(arr[n]+coins(n-2),coins(n-1));
}


int main()
{
    int t,n,i=1; cin>>t;
    while(t--)
    {
	memset(dp,0,sizeof(dp));
	int n; cin>>n;
	for(int i=0 ; i<n; i++)
	    cin>>arr[i];
	cout<<"Case "<<i<<": " <<coins(n-1)<<'\n';
	i++;
    }
    return 0;
}
