#include<bits/stdc++.h>
using namespace std;
int arr[5];
int tree[20];

void update(int node,int s,int e,int idx,int val)
{
    if(s==e)
    {
	arr[idx] += val;
	tree[node] += val;
    }
    else
    {
	int mid = (s+e)/2;
	if(s<=idx && idx<=mid)
	    update(2*node,s,mid,idx,val);
	else
	    update(2*node+1,mid+1,e,idx,val);
	tree[node] = tree[2*node] + tree[2*node+1];
    }
    
}

int query(int node,int s,int e,int l,int r)
{
    if(r<s || e<l)
	return 0;

    if(l <= s && e<=r)
	return tree[node];

    int mid = (s+e)/2;
    int p1 = query(2*node,s,mid,l,r);
    int p2 = query(2*node+1,mid+1,e,l,r);
    return p1+p2;
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
    cout<<query(1,0,n-1,1,3)<<'\n';

    //  update(1,0,3,2,5);
    // cout<<query(1,0,n-1,1,3)<<'\n';

    for(int i=1; i<=20; i++)
	cout<<tree[i]<<" ";
    return 0;
}
