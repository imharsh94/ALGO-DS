#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,tot=0,c=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
	cin>>a;
	tot = tot + a;
    }
    n=n+1;
    tot = tot % n;
    if(tot == 0)
	tot = n;
    for(int i=1; i<=5; i++)
    {
	if((tot+i)%n != 1)
	    c++;
    }
    cout<<c<<'\n';
    return 0;
}
