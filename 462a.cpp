#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n,m;
	ll temp1,temp2,ans;
	temp1=temp2 = INT_MIN;

	cin>>n>>m;
	ll x[n],z[m];

	for(int i=0;i<n; i++)
		cin>>x[i];

	for (int i = 0; i < m; ++i)
		cin>>z[i];
    ll a = *max_element(x,x+n);
    ll b = *max_element(z,z+m);

    ll c = *min_element(x,x+n);
    ll d = *min_element(z,z+m);

    if(a*b > c*d)
    {
    	ans = a*b;
    	for (int i = 0; i < n; ++i)
    	{
    		if(x[i] == a)
    		{
    			x[i]=0;break;
    		}
    		
    	}
    }
    else
    	ans = c*d;

   
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(x[i]*z[j] > temp1 && (x[i]*z[j] != ans ))
			{
				
				temp1 = x[i]*z[j];
			}
		}
	}


	cout<<temp1<<endl;
	return 0;
}