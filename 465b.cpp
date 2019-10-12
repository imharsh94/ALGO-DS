#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;

	int x=0,y=0,xi=0,yi=0,count=0;

	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == 'U')
		{
			if(x != y)
			{
			  xi=x;yi=y;	
			}
			
			y=y+1;
		}
		else if(s[i] =='R')
		{
			if(x != y)
			{
				xi=x;yi=y;
			}
			
			x=x+1;
		}
		if((xi<yi && x>y) || (xi>yi && x<y))
			count++;
	}

	cout<<count<<endl;
	return 0;
}