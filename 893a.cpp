#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=3,w;
    cin>>n;
    for(int i=0; i<n; i++)
    {
	cin>>w;
	if(w != s)
	    s = 6-w-s;
	else
	{
	    cout<<"NO\n";
	    return 0;
	}
    }
    cout<<"YES\n";
    return 0;
}
