#include<bits/stdc++.h>
using namespace std;
int bs[100010],n,u,q;

void update(int x,int val)
{
    while(x<=n)
    {
	bs[x] += val;
	x += x&-x;
    }
}

int query(int k)
{
    int sum=0;
    while(k>0)
    {
	sum += bs[k];
	k -= k & -k;
    }
    return sum;
}


int main()
{

    int t,l,r,v,x; cin>>t;
    while(t--)
    {
	scanf("%d%d",&n,&u);

	memset(bs,0,sizeof(bs));
	
	while(u--)
	{
	    scanf("%d%d%d",&l,&r,&v);
	    update(l+1,v);
	    update(r+2,-v);
	}
	scanf("%d",&q);
	while(q--)
	{
	    scanf("%d",&x);
	    cout<<query(x+1)<<'\n';
	}
    }
    return 0;
}
