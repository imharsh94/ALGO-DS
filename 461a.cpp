#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y; 
	cin>>x>>y;

	int o = y-1;

	if(x-o < 0 || ((x-o) % 2 != 0) || y == 0 || (y==1 && x>0))
		cout<<"No\n";
	else
		cout<<"Yes\n";

	return 0;
}