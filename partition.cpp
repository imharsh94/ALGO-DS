#include<bits/stdc++.h>
using namespace std;

const int MX = 1000000;
char ans[MX+1];
int n,x;


bool dfs(int k,long long l=0,long long r=0)
{
	if(k == 0) return l == r;
	if(k == x) return dfs(k-1,l,r);

	if(l<r)
	{
		ans[k-1] = '0';
		if(dfs(k-1,l+k,r)) return true;

		ans[k-1] = '1';
		if(dfs(k-1,l,r+k)) return true;
	}
	else
	{
		ans[k-1] = '1';
		if(dfs(k-1,l,k+r)) return true;

		ans[k-1] = '0';
		if(dfs(k-1,l+k,r)) return true;
	}
	return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		scanf("%d %d",&x,&n);

		long long sum = n*(n + 1ll)/2 - x;
		if(sum % 2 == 1 || dfs(n) == false)
		{
			cout<<"impossible\n";
			continue;
		}
		ans[n] = 0;
		ans[x-1] = '2';
		printf("%s\n", ans);
	}
	

	return 0;
}