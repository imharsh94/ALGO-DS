#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[10050];
ll sum[10050];
int main()
{
    ll t,z=1; cin>>t;
    while(t--)
    {
	int c=0,a;
	memset(arr,0,sizeof(arr));
	memset(sum,0,sizeof(sum));
	
	int n;  cin>>n;
	if(n==0)
	{
	    cout<<"Case "<<z<<": "<<0<<'\n';
	}
	else if(n==1)
	{
	    cin>>a;
	    cout<<"Case "<<z<<": "<<a<<'\n';
	}
	else
	{
	for(int i=0; i<n; i++)
	    cin>>arr[i];
	
	sum[0]=arr[0];sum[1]=max(arr[1],arr[0]);
	
	for(int i=2; i<n;i++)
	{
	       if(arr[i]== 0)
	    {
		sum[i] = max(sum[i-1],sum[i-2]);
		c=i;
	    }
	    else if(c == (i-1))
	    {
		sum[i] = max(sum[i-1],sum[i-2]) + arr[i];
	    }
	    else
		sum[i] = max(arr[i] + sum[i-2],sum[i-1]); 
	}

	    
	   
	cout<<"Case "<<z<<": "<<max(sum[n-1],sum[n-2])<<'\n';
	}
	z++;
    }
    return 0;
}
