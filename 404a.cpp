#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
   
    set< char> db,x;

    for(int i=0; i<n; i++)
    {
	cin>>s;
	if(s[i] != s[n-i-1])
	{
	    cout<<"NO\n";
	    return 0;
	}
	else
	{
	    x.insert(s[i]);
	}
	for(int j=0; j<n; j++)
	{
	    if(j == i || j == (n-i-1))
		continue;
	    else if(s[j] == s[i])
	    {
		cout<<"NO\n";
		return 0;
	    }
	    else
	    {
		db.insert(s[j]);
	    }
	}
	
    }

    if(db.size() != 1 || x.size() != 1)
	cout<<"NO\n";
    else
	cout<<"YES\n";
    return 0;
}
