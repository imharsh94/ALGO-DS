#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f,x,c=0; cin>>n;
    set< int > bf,tf;
    set< int >::iterator it;
    
    for(int i=0; i<n; i++)
    {
	cin>>f;
	bf.insert(f);
	cin>>x;
	for(int i=0; i<x; i++)
	{
	    cin>>f;
	    tf.insert(f);
	}
	    
    }

    for(it=tf.begin(); it!=tf.end(); it++)
    {
	if(bf.find(*it) == bf.end())
	    c++;
    }

    cout<<c<<'\n';
    return 0;
}
