// hackerrank between two sets
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,flag1=0,count=0,flag2=0;
    cin>>n>>m;
    int a[n],b[m];

    for(int i=0; i<n; i++)
	cin>>a[i];

    for(int i=0; i<m; i++)
	cin>>b[i];


    for(int x=a[n-1]; x<= b[0]; x++)
    {
//	cout<<x<<'\n';
	for(int i=0; i<n; i++)
	{
	    if(x % a[i] != 0)
		flag1=1;
	}

	for(int i=0; i<m; i++)
	{
	    if(b[i] % x != 0)
		flag2 = 1;
	}

	if(flag1 == 0 && flag2 == 0)
	    count++;

	flag1=flag2=0;
    }
    cout<<count<<'\n';
    return 0;
}
