//codechef march long challenge
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		double cost,items,discount,tot=0.0,inc=0.0,cp;
		int n;
		cin>>n;
		while(n--)
		{
			cin>>cost>>items>>discount;
			cp = cost;
			cost = cost + (discount/100.00*cost);
			cost = cost - (discount/100.00*cost);
			tot = tot + ((cp - cost)*items);

		}

		printf("%0.8lf\n",tot);
	}
	return 0;
}