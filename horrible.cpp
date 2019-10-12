#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll tree[400040],lazy[400040];
ll arr[100010];

void build(ll node,ll s,ll e)
{
    if(s == e)
	tree[node] = arr[s];
    else
    {
	ll mid = (s+e)/2;
	build(2*node,s,mid);
	build(2*node+1,mid+1,e);
	tree[node]= tree[2*node] + tree[2*node+1];
    }
}

void update(ll node,ll s,ll e,ll l,ll r,ll val)
{
    if(lazy[node] != 0)
    {
	tree[node] += (e-s+1)*lazy[node];
	if(s != e)
	{
	    lazy[node*2] += lazy[node];
	    lazy[node*2+1] += lazy[node];
	}
	lazy[node]=0;
    }

    if(s>e || s>r || e<l)
	return;

    if(s>=l && e<=r)
    {
	tree[node] += (e-s+1)*val;
	if(s != e)
	{
	    lazy[node*2] += val;
	    lazy[node*2+1] += val;
	}
	return ;
    }
    
    ll mid = (s+e)/2;
    update(2*node,s,mid,l,r,val);
    update(2*node+1,mid+1,e,l,r,val);
    tree[node] = tree[node*2] + tree[2*node+1];
    
}

ll  query(ll node,ll s,ll e,ll l,ll r)
{
    if(s>e || s>r || e<l)
	return 0;

    if(lazy[node] != 0)
    {
	tree[node] += (e-s+1)*lazy[node];
	if(s != e)
	{
	    lazy[node*2] += lazy[node];
	    lazy[2*node+1] += lazy[node];
	}
	lazy[node] = 0;
    }
    if(s>=l && e<= r)
	return tree[node];

    ll mid = (s+e)/2;
    ll p1 = query(2*node,s,mid,l,r);
    ll p2 = query(2*node+1,mid+1,e,l,r);
    return (p1+p2);
}




int main()
{
    ll t,n,c,x,y,z,val;
    cin>>t;
    while(t--)
    {
	cin>>n>>c;
	memset(arr,0,sizeof(arr));
	memset(tree,0,sizeof(tree));
	memset(lazy,0,sizeof(lazy));
	build(1,0,n-1);
	while(c--)
	{
	    cin>>x;
	    if(x==0)
	    {
		cin>>y>>z>>val;
		update(1,0,n-1,y-1,z-1,val);
	    }
	    else
	    {
		cin>>y>>z;
		cout<<query(1,0,n-1,y-1,z-1)<<'\n';
	    }
	}
	
    }
    return 0;
}
