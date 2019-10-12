#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	map< string,string > mymap;
	map< string,string >:: iterator it;

	string a,b;
	for(int i=0; i<n; i++)
	{
		cin>>a>>b;
		mymap.insert( pair< string,string >(b,a) );
	}

	

	for (int i = 0; i < m; ++i)
	{
		cin>>a>>b;
		string d = b.substr(0,b.length()-1);
		cout<<a<<" "<<b<<" #"<<mymap.find(d)->second<<'\n';
	}
	return 0;
}