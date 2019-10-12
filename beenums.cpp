#include<bits/stdc++.h>
#define ll long long
using namespace std;


bool f(int n)
{
    int  d = 6,sum=1,i=1,c=0;
    while(sum<n)
    {
	sum = sum + d;
	i++;
	d = 6*i;c++;
    }
    cout<<c<<'\n';
    if(sum == n)
	return true;
    else
	return false;
}

int main()
{
    int n; cin>>n;
    while(n != -1)
    {
	if(f(n))
	    cout<<"Y\n";
	else
	    cout<<"N\n";
	cin>>n;
    }
    return 0;
}
