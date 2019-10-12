#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll  a[200100],b[200100], bit[200100];

ll read(ll x)
{
    ll sum=0;
    while(x>0)
    {
	sum += bit[x];
	x -= x&-x;
    }
    return sum;
}

void update(ll x,ll n)
{
    while(x<=n)
    {
	bit[x] += 1;
	x += x&-x;
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
	ll  n,cnt=0; cin>>n;
	memset(bit,0,sizeof(bit));
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));

	for(ll i=1; i<=n; i++)
	{ cin>>a[i]; b[i]=a[i];}
	sort(a+1,a+n+1);

	for(ll i=1; i<=n; i++)
	{
	    int idx = int(lower_bound(a+1,a+n+1,b[i]) - (a+1));
	   
	    b[i] = idx+1;
    	}

       
	for(ll i=n; i>=1; i--)
	{
	    
	    cnt += read(b[i]-1);
	    update(b[i],n);
	}

	cout<<cnt<<endl;
    }
    return 0;
}
