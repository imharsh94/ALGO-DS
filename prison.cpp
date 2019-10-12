#include<bits/stdc++.h>
using namespace std;
int a[21][21], m[21][21];

int t,n,temp, cnt;
int ox[4] = {0,0,-1,1};
int oy[4] = {-1,1,0,0};

inline int ok(int x,int y)
{
	return(x>=0 && y>=0 && x<n && y<n && !a[x][y]);
}

void dfs(int x,int y)
{
	if(x == n-1 && x == y)
		cnt++;
	else
	{
		for(int i=0 ; i< 4 ;i++)
		{
			if(ok(x+ox[i], y+oy[i]) && !m[x+ox[i]][y+oy[i]])
			{
				m[x+ox[i]][y+oy[i]] = 1;
			    dfs(x+ox[i], y+oy[i]);
			    m[x+ox[i]][y+oy[i]] = 0;
			}
		}
	}
}

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				scanf("%d",&temp);
				a[i][j] = temp;
				m[i][j] = 0;
			}

		}
		
		cnt =0;
		m[0][0] = 1;
		dfs(0,0);
		printf("%d\n",cnt);
	}
	return 0;
}

