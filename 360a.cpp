#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,c=0,temp=0,k=0,ans=0;
    string a;
    cin>>n>>d;

    for(int i=0; i<d; i++)
    {
	cin>>a;k=0;
	for(int i=0; i<a.length(); i++)
	    if(a[i] == '1')
		k++;

	if(k != n)
	{
	    c++;
	    if(c > temp)
		temp = c;
	}
	else if(k == n)
	    c=0;
    }

    cout<<temp<<'\n';
    return 0;
}
