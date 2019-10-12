#include<bits/stdc++.h>
using namespace std;

//int n=0;

int colla(int x, int &n)
{
	if(x==1)
		return 1;
	else if (x % 2 == 0)
	{
		n++;
		colla(x/2, n+1);
	}
	else if(x%2 != 0)
	{
		n++;
		colla(3*x+1,n);
	}
}

int main()
{
	int k,n=0;
	cin>>k;
	colla(k,n);
	cout<<n<<endl;
}