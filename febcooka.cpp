#include<bits/stdc++.h>
using namespace std;

int main()
{
	map< int,string > mp;
	mp.insert(make_pair(0,"Beginner"));
	mp.insert(make_pair(1,"Junior Developer"));
	mp.insert(make_pair(2,"Middle Developer"));
	mp.insert(make_pair(3,"Senior Developer"));
	mp.insert(make_pair(4,"Hacker"));
	mp.insert(make_pair(5,"Jeff Dean"));
	int t;
	cin>>t;
	while(t--)
	{
		int c=0,x;
		for (int i = 0; i < 5; ++i)
		{
			cin>>x;
			c += x;
		}

		cout<<mp[c]<<endl;
	}
	return 0;
}