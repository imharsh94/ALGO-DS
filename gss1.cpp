#include<bits/stdc++.h>
using namespace std;

struct node
{
    int sum,prefixsum,suffixsum,maxsum;
};

int arr[50010];
node  tree[4*50010];

void build(int index,int s,int e)
{
    if(s==e)
    {
	tree[index].sum=arr[s];
	tree[index].prefixsum = arr[s];
	tree[index].suffixsum = arr[s];
	tree[index].maxsum = arr[s];
    }
    else
    {
	int mid = (s+e)/2;


	
	build(2*index+1,s,mid);
	build(2*index+2,mid+1,e);

	tree[index].sum = tree[2*index+1].sum + tree[2*index+2].sum;
	tree[index].prefixsum = max(tree[2*index+1].prefixsum,
				    tree[2*index+2].prefixsum+tree[2*index+1].sum);
	tree[index].suffixsum = max(tree[2*index+2].suffixsum,
				    tree[2*index+2].sum+ tree[2*index+1].suffixsum);
	tree[index].maxsum = max(max(tree[2*index+1].maxsum,tree[2*index+2].maxsum),
				 tree[2*index+1].suffixsum + tree[2*index+2].prefixsum);
    }
}

node query(int index,int s,int e,int l,int r)
{
    node result;
    result.sum = result.prefixsum = -999999;
    result.suffixsum = result.maxsum = -999999;

    if(s>r || e<l)
	return result;
    
    if(l<=s && e<=r)
	return tree[index];

    int mid = (s+e)/2;

    	if(l>mid)
	    return query(2*index+2,mid+1,e,l,r);
	if(r<= mid)
	    return query(2*index+1,s,mid,l,r);
	
    node left = query(2*index+1,s,mid,l,r);
    node right = query(2*index+2,mid+1,e,l,r);

    result.sum = left.sum + right.sum;
    result.prefixsum = max(left.prefixsum, left.sum + right.prefixsum);
    result.suffixsum = max(right.suffixsum, right.sum+ left.suffixsum);
    result.maxsum = max(max(left.maxsum,right.maxsum),
			left.suffixsum+right.prefixsum);

    return result;
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,a,b; cin>>n;

    for(int i=0; i<n; i++)
	cin>>arr[i];

    build(0,0,n-1);

    cin>>m;
    while(m--)
    {
	cin>>a>>b;
	cout<<query(0,0,n-1,a-1,b-1).maxsum<<'\n';
    }
    
    return 0;
}
