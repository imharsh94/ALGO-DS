#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,x,k;
		cin>>n>>m>>x>>k;
		long long int ew=0,ow=0,em=0,om=0,work=0;
		string s;
		cin>>s;

		for (int i = 0; i < k; ++i)
		{
			if(s[i]=='E')
				ew++;
			else
				ow++;
		}
		em = m/2;
		om = m-em;

		while(em && ew>0)
		{
			if(ew >= x)
			{
				work += x;
				ew = ew - x; 
			}
			else
			{
				work = work + ew;
				ew=0;
			}
			em--;
		}

		while(om && ow>0)
		{
			if(ow >= x)
			{
				work += x;
				ow = ow - x; 
			}
			else
			{
				work = work + ow;
				ow=0;
			}
			om--;
		}


		if(n-work <= 0)
			cout<<"yes\n";
		else
			cout<<"no\n";

	}
	
	return 0;
}