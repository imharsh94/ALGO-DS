// codechef march long challenge
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
		{
			int n,x=1,y=1;
			cin>>n;
			int f[n],g[n];
			memset(f,0,sizeof(f));
			memset(g,0,sizeof(g));

			for (int i = 0; i < n; ++i)
				cin>>f[i];

			for(int i=0 ; i<n ; ++i)
				cin>>g[i];

			for(int i=0; i<n ; i++)
			{
				if(f[i] <= g[i])
					continue;
				else
				{
					x=0;break;
				}
			}


			for(int i=0; i<n ; i++)
			{
				if(f[i] <= g[n-i-1])
					continue;
				else
				{
					y=0;break;
				}
			}


			if(x+y == 2)
				cout<<"both\n";
			else if(x==1)
				cout<<"front\n";
			else if(y== 1)
				cout<<"back\n";
			else
				cout<<"none\n";


		}
	return 0;
}