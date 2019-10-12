#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a=1,b=1,c;
	cin>>n;
	
	set< int > s;
	s.insert(1);

	for(int i=0; i<n; i++)
	{
		c = a+b;
		s.insert(c);
		a=b;
		b=c;

	}
	for(int i=1;i<=n;i++)
		{
			if(s.count(i)==1)
				cout<<"O";
			else
				cout<<"o";
		}


	return 0;
}