#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,z;
    cin>>n>>m>>z;
    int i=n,j=m,c=0,q=1,w=1;
    
    for(int a=1; a<=z; a++)
    {

	while(i<a)
	{
	    i = q*n; q++;
	}

	while(j<a)
	{
	    j= w*m; w++;
	}

       	if(i == j && j == a)
	    c++;
       
    }
    cout<<c<<'\n';
    return 0;
}
