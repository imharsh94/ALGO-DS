#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int tree[400020];


void build(int node,int s,int e)
{
    if(s == e)
	tree[node] = arr[s];
    else
    {
	int mid = (s+e)/2;
	build(node*2,s,mid);
	build(2*node+1,mid+1,e);
	tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}

void update(int node,int s,int e,int idx,int val)
{
    if(s == e)
    {
	tree[node]=val;
	arr[idx] = val;
    }

    else
    {
	int mid = (s+e)/2;
	if(s<=idx && idx<=mid)
	    update(2*node,s,mid,idx,val);
	else
	    update(2*node+1,mid+1,e,idx,val);
	tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}


int query(int node,int s,int e,int l,int r)
{
    if(s>r || e<l)
	return INT_MAX;
    if(s>=l && e<=r)
	return tree[node];

    int mid = (s+e)/2;
    int p1 = query(2*node,s,mid,l,r);
    int p2 = query(2*node+1,mid+1,e,l,r);
    return min(p2,p1);
}

int main()
{
    int n,q,a,b;
    cin>>n>>q;
    char c;
    for(int i=0; i<n; i++)
	cin>>arr[i];

    build(1,0,n-1);

    while(q--)
    {
	cin>>c;
	cin>>a>>b;

	if(c == 'q')
	    cout<<query(1,0,n-1,a-1,b-1)<<'\n';
	else
	    update(1,0,n-1,a-1,b);
		
    }
    return 0;
}
