#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,pos,flag=0,j; cin>>n;
    string s,t; cin>>s>>t;
    vector< int > ans;

    for(int i=0; i<n; i++)
    {
	if(s[i] == t[i])
	    continue;

	flag=0;
	for(j=i+1; j<n; j++)
	{
	     pos = -1;
	    if(t[i] == s[j])
	    {
		flag=1;
		pos = j;
		break;
	    }
	}
	if(j == n)
	   return cout<<-1,0;
	
	for(int k = pos-1; k>=i; k--)
	{
	    c++;
	    swap(s[k],s[k+1]);
	    ans.push_back(k);
	}
    }


    cout<<c<<endl;
    for(int i=0; i<c; i++)
	cout<<ans[i]+1<<" ";
    cout<<endl;
    
    return 0;
}
