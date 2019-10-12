#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c=0,flag=0;
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
	for(int j=0; j<m; j++)
	{
	    if(i % 2 == 0)
		cout<<'#';
	    if(i % 2 == 1)
	    {
		if(c == 0 && j != m-1)
		    cout<<'.';
		else if(c == 0 && j == m-1 && flag == 0)
		{
		    cout<<'#';
		    c=1;
		}
	       	else if(c == 0 && j == m-1 && flag)
		{
		    cout<<'.';
		    flag=0;
		    
		}
		else if(c == 1 && j != 0)
		    cout<<'.';
		else if(c == 1 && j == 0)
		{
		    flag=1;
		    cout<<'#';
		    c=0;
		}
		    
	    }
	}
	cout<<'\n';
    }
    return 0;
}
