#include<bits/stdc++.h>
using namespace std;
string s,l,g;
int len;

int main()
{
    int t,x,flag;
    cin>>t;
    while(t--)
    {
	cin>>s;
	l=s;g=s;
	flag=1;
	len = s.length();
	
	for(int i=0;i<len/2; i++)
	{
	    l[len-1-i] = l[i];
	    g[len-i-1] = g[i];
	}

	if(stoi(l)-stoi(s) == 0)
	{
	    cout<<s<<'\n';flag=0;
	}
	else if(stoi(l) < stoi(s))
	{
	    int c=0;
	    if(len%2 == 0)
		x = len/2 - 1;
	    else
		x = len/2;
	    
	    while(g[x-c] == '9')
	    {
		g[x-c] = '0';
		g[len - 1-x+c] = '0';
		    c++;
	    }
	    g[x-c]++;
	    g[len-1-x+c]= g[x-c];

	    // cout<<g<<'\n';
	}

	else if(stoi(g) > stoi(s))
	{
	     int c=0;
	    if(len%2 == 0)
		x = len/2 - 1;
	    else
		x = len/2;
	    
	    while(l[x-c] == '0')
	    {
		l[x-c] = '9';
		l[len - 1-x+c] = '9';
		    c++;
	    }
	    l[x-c]--;
	    l[len-1-x+c]= l[x-c];

	    // cout<<l<<'\n';
	}
	if(flag)
	{
	if(stoi(g)-stoi(s) < stoi(s)-stoi(l))
	    cout<<g<<'\n';
	else
	    cout<<l<<'\n';
	}
    }
    return 0;
}
