#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
	map< string, int > mp;
	map< string,int >::iterator it;
	int n; cin>>n;
	string s,t;
	cin.ignore();
	for(int i=0; i<n; i++)
	{
	    
	    getline(cin,s);
	    
	    mp[s]++;
	}

	for(it=mp.begin(); it!=mp.end();++it)
	    cout<<it->first<<" "<<it->second<<'\n';
	
    }
    return 0;
}
