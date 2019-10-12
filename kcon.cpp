//codechef january challenge K-Concatenation
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MX = 100000;
int a[MX];


int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);

		for (int i = 0; i < n; ++i)
		   scanf("%d", a+i);

		ll ans = *max_element(a,a+n), sum=0;

		for (int i = 0; i < n; ++i)
		{
			sum += a[i];
			if(sum <0)
				sum = 0;
			else
				ans = max(ans,sum);

		}

		if(k > 1)
		{
			ll p=0,s=0,pref=0,suff=0;
			for (int i = 0; i < n; ++i)
			{
				p += a[i];
				s += a[n-i-1];
				pref = max(pref,p);
				suff = max(suff,s);
			}

			if(pref+suff > 0)
			{
				ll sum = max(accumulate(a,a+n,0ll),0ll);
				ans = max(pref + suff + (k-2)*sum,ans);
			}
		}

		printf("%lld\n",ans);
	}
	return 0;
}