#include<bits/stdc++.h>
using namespace std;

int main()
{
    map< int,int,greater<int> > m;
    map< int,int,greater<int> >::iterator it;

    int n,s,t=0,a,b,floor,sec;
    cin>>n>>s;

    for(int i=0; i<n; i++)
    {
	cin>>a>>b;
	m.insert(make_pair(a,b));
    }

    for(it=m.begin(); it != m.end(); ++it)
    {
	floor = it->first; sec = it->second;
	t = t+(s-floor);
	s = floor;
	if(t < sec)
	{
	    int x = sec - t;
	    t = t+x;
	}
    }
    map<int,int,greater<int> >::reverse_iterator rt;
    rt = m.rbegin();

    if(rt->first != 0)
	t = t + rt->first;
    cout<<t<<'\n';
    
    return 0;
}
