#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i=0;
    cin>>a>>b;

    while( a<= b )
    {
	a = 3*a;
	b = 2*b;
	i++;
    }
    cout<<i<<'\n';
    return 0;
}
