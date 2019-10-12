#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,b=0,c=0;
    cin>>n>>m;

    for(int a=0; (a*a+b<=n && a+b*b<=m); a++)
    {
	for(b=0 ;(a*a+b<=n && a+b*b<=m); b++)
	{
	    if(a*a+b== n && a+b*b == m)
		c++;
	}
	
	b=0;
    }

    cout<<c<<endl;
    return 0;
}
