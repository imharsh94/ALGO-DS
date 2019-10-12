#include<bits/stdc++.h>
using namespace std;
int tree[100];
int lazy[100];
int arr[30];

void updateRange(int node,int s,int e,int l,int r,int val)
{
    if(lazy[node] != 0)
    {
	tree[node] += (e-s+1)*lazy[node];
	if(s != e)
	{
	    lazy[2*node] += lazy[node];
	    lazy[node*2+1] += lazy[node];
	}

	lazy[node]=0;
    }

    if(s>e || s>r ||e<l)
	return;

    if(s>=l && e<=r)
    {
	tree[node] += (e-s+1)*val;
	if(s != e)
	{
	    lazy[node*2] += val;
	    lazy[node*2+1] += val;
	}

	return;
    }
    int mid = (s+e)/2;
    updateRange(node*2,s,mid,l,r,val);
    updateRange(node*2+1,mid+1,e,l,r,val);
     tree[node] = tree[node*2] + tree[node*2+1];
    // tree[node]+=val*(min(e,r)-max(s,l)+1);
}

int queryRange(int node,int s,int e,int l,int r)
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
	lazy[node]=0;
    }

    if(s>=l && e<=r)
	return tree[node];

    int mid = (s+e)/2;
    int p1 = queryRange(node*2,s,mid,l,r);
    int p2 = queryRange(node*2+1,mid+1,e,l,r);
    return (p1+p2);
}


void build(int node,int s,int e)
{
    if(s == e)
	tree[node] = arr[s];
    else
    {
	int mid = (s+e)/2;

	build(2*node,s,mid);

	build(2*node+1,mid+1,e);

	tree[node] = tree[2*node] + tree[2*node+1];
    }
}

int main()
{
   
    int n; cin>>n;
    for(int i=0;i<n;i++)
	cin>>arr[i];
    build(1,0,n-1);
    cout<<queryRange(1,0,n-1,1,3)<<'\n';

    updateRange(1,0,n-1,1,3,2);
     cout<<queryRange(1,0,n-1,1,3)<<'\n';

     // for(int i=1; i<=20; i++)
//	cout<<tree[i]<<" ";
    return 0;
}


