// set stl practise
#include<bits/stdc++.h>
using namespace std;

int main()
{
	set< int > myset;
	set< int >::iterator it;
	pair< set<int>::iterator,bool > ret;

	for(int i=1; i<7; i++)
		myset.insert(i*10);

	ret = myset.insert(20);

	if(ret.second == false)
		it = ret.first; // it points to 20

	myset.insert(it,25); // efficient insertion
	it = myset.find(50);
	myset.erase(it);

	myset.erase(60);

	for(it=myset.begin(); it!=myset.end();++it)
		cout<<*it<<" ";
return 0;
}	