#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,pal;
		int a[26],c=0;
		memset(a,0,sizeof(a));
		cin>>s;
		pal=s;

		for(int i=0; i<s.length();i++)
			a[ s[i] - 'a']++;


		for(int i = 0; i < 26; ++i)
		{
			if( a[i] % 2 != 0)
			  c++;
		}

		if( c > 1)
		{
			cout<<"-1\n";
			return 0;
		}

		
			
	}
	return 0;
}
