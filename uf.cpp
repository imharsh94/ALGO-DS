#include<bits/stdc++.h>
using namespace std;
int arr[20010];
int sz[20010];

int root( int i)
{
    while(arr[i] != i)
    {
	arr[i]= arr[arr[i]];
	i = arr[i];
    }
    return i;
}

void uni(int a,int b)
{
    int roota = root(a);
    int rootb = root(b);
    if(roota == rootb)
	return;
    if(sz[roota] < sz[rootb])
    {
	arr[roota] = arr[rootb];
	sz[rootb] += sz[roota];
    }
    else
    {
	arr[rootb] = arr[roota];
	sz[roota] += sz[rootb];
    }
}

bool find(int a,int b)
{
    if(root(a) == root(b))
	return true;
    else
	return false;
    
}

void initialize(int n)
{
    for(int i=1; i<=n; i++)
    {
	arr[i] = i;
	sz[i]=1;
    }
}

int main()
{
    int n,e,a,b,y,z,flag=0; cin>>n>>e;
    
    
    initialize(n);

    while(e--)
    {
	cin>>a>>b;
	y = root(a);
	z = root(b);
	if(y != z)
	    uni(y,z);
	else
	{
	    flag=1;break;
	}
    }
    
    if(flag)
	cout<<"NO\n";
    else
	cout<<"YES\n";
    
    return 0;
}
