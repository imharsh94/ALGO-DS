#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
	string f,b; cin>>f>>b;
	int flag=0;
	for(int i=0; i<f.length(); i++)
	{
	    if(f[i]=='o' || b[i]=='o')
	    {
		if((f[(i+1)%3]=='b'|| b[(i+1)%3]=='b') && (f[(i+2)%3]=='b'|| b[(i+2)%3]=='b'))
		{
		    flag=1;break;
		}
	    }
	}
	if(flag)
	    cout<<"yes\n";
	else
	    cout<<"no\n";
    }
    return 0;
}
