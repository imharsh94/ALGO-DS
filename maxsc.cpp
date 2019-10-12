//codechef january long 2018
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=0;
		cin>>n;

		long long int e[n],a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}

		sort(a[n-1],a[n-1]+n);
		e[n-1] = *max_element(a[n-1],a[n-1]+n);

		//cout<<e[n-1];

		int64_t sum = e[n-1];

		for (int i = n-2; i>= 0 ; --i)
		{
			e[i] = -1;
			for(int j=0 ; j<n ; j++)
			{
				if(a[i][j] < e[i+1])
				{
					e[i] = max(e[i], a[i][j]);
					
				}
			}

			if(e[i] == -1)
			{
				cout<<-1<<'\n';
				flag = 1;break;
			}
			sum = sum + e[i];
		
		}
		if(flag==0)
			cout<< sum <<endl;

	}
	return 0;
}