#include<bits/stdc++.h>
using namespace std;
char c[1000][1000];
int main()
{
    int n; cin>>n;

    while(n != 0)
    {
    
	string s; cin>>s;
	int z = s.length()/n;

	int t=0;
	for(int i=0; i<z; i++)
	{
	    if(i%2==0)
	    {
		for(int j=0; j<n; j++)
		{
	   
		c[i][j] = s[t++];
	    
		}
	    }
	    else
	    {
		for(int j=n-1; j>=0; j--)
		{
		    c[i][j] = s[t++];
		}
	    }
	
     }
    for(int i=0; i<n; i++)
	for(int j=0; j<z; j++)
	    cout<<c[j][i];
	
    
    cout<<endl;
	cin>>n;
    }
 return 0;
}

