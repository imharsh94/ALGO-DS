//hackerearth segment tree coins
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vii;
typedef vector<vl> vll;
typedef pair<int,int> ii;
 
vi lazy,cnt;


void update(int node,int s,int e,int l,int r,int val)
{
	if(s>e || s>r || e<l)
		return;
	if(s>=l && e<=r)
	{
		lazy[node] += val;
		return;
	}
	int mid = (s+e)/2;
	update(2*node,s,mid,l,r,val);
	update(2*node+1,mid+1,e,l,r,val);
}

void flat(int node,int s,int e)
{
	if(s!=e)
	{
		lazy[2*node] += lazy[node];
		lazy[2*node+1] += lazy[node];
		lazy[node]=0;
		int mid=(s+e)/2;
		flat(node*2,s,mid);
		flat(node*2+1,mid+1,e);
	}
	else
	{
		cnt[lazy[node]]++;
	}
}

int main()
{
	int n,m,q;
	scanf("%d %d",&n,&m);
	int size = pow(2,log2(n)+10);
	lazy.resize(size,0);
	cnt.resize(n+1,0);

	for(int i=0;i<m;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		update(1,1,n,x,y,1);
	}

	flat(1,1,n);

	for(int i=cnt.size()-2; i>=0;--i)
	{
		cnt[i] += cnt[i+1];
	}

	cin>>q;
	for (int i = 0; i < q; ++i)
	{
		int x;
		cin>>x;
		printf("%d",cnt[x]);
	}
 return 0;
}