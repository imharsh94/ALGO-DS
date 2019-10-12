#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string st;
		cin>>st;
		int ans=0,c=0;
		int s[4]={0};
		for(int i=0; i<st.length(); i++)
		{
			for (int j = i; j < i+4; j++)
			{
				if(st[j] == 'c') s[0] = 1;
				if(st[j] == 'h') s[1] = 1;
				if(st[j] == 'e') s[2] = 1;
				if(st[j] == 'f') s[3] = 1;
			}
			for(int i=0 ; i<4 ; i++)
			{
				if(s[i] == 1)
				  c++;
				s[i] = 0;
			}
			if(c==4)
				ans++;
			c = 0;
				
		}
		if(ans == 0)
			cout<<"normal"<<'\n';
		else
			cout<<"lovely "<<ans<<'\n';
	}
	return 0;
}