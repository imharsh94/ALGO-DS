#include<bits/stdc++.h>
using namespace std;
int dp[11111][11111];
string s;
int solve(int i,int j)
{
    if( i>=j)
	return 0;     
    if(dp[i][j]) return dp[i][j];
    
    if(s[i] == s[j])
	return dp[i][j]=solve(i+1,j-1);
    else
	return dp[i][j] = 1+min(solve(i+1,j),solve(i,j-1));
}

int main()
{
    int t; cin>>t;
    while(t--)
    {

	cin>>s;
	memset(dp,0,sizeof(dp));

	cout<<solve(0,s.length()-1)<<'\n';
    }
    return 0;
}
