//hackerearth ashu segment tree
#include<bits/stdc++.h>

using namespace std;
int tree[300050][2],A[100005];

void build(int l,int r,int i)
{
	if(l==r)
	{
	  if(A[l] % 2)
	   {
		tree[i][1] = 1;
		tree[i][0] = 0;
	    }
	  else
		{
			tree[i][0]=1;
			tree[i][1]=0;
		}
	}

	else
	{
		 int mid = (l+r)/2;
		 build(l,mid,2*i);
		 build(mid+1,r,2*i+1);
		 tree[i][0] = tree[2*i][0] + tree[2*i+1][0];
		 tree[i][1] = tree[2*i][1] + tree[2*i+1][1];
	}
}

int query(int left,int right,int l,int r,int num,int i)
{
	if(l<= left && right<= r)
	{
		if(num == 2)
			return tree[i][1];
		else
			return tree[i][0];

	}

	else if(l>right || r< left)
		return 0;
	else
	{
		int mid = (left+right)/2;
		int p1 = query(left,mid,l,r,num,2*i);
		int p2 = query(mid+1,right,l,r,num,2*i+1);
		return p1+p2;
	}
}

void update(int l,int r,int i,int val,int idx)
{
	if(l == r)
	{
		A[idx] = val;
		if(A[idx] % 2)
			{
				tree[i][1] = 1;
				tree[i][0] = 0;

			}
		else
		{
			tree[i][0] = 1;
			tree[i][1] = 0;
		}	
	}
	else
	{
		int mid = (l+r)/2;
		if(idx>=l && idx<=mid)
			update(l,mid,2*i,val,idx);
		else
			update(mid+1,r,2*i+1,val,idx);

	    tree[i][0] = tree[2*i][0] + tree[2*i+1][0];
	    tree[i][1] = tree[2*i][1] + tree[2*i+1][1];
	}
}



int main()
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
		cin>>A[i];	

	int q,x,y,type;

	build(1,n,1);
	cin>>q;

	while(q--)
	{
		cin>>type>>x>>y;
		if(type == 0)
			update(1,n,1,y,x);
		else
			cout<<query(1,n,x,y,type,1)<<'\n';
	}
	return 0;
}