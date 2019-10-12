#include<bits/stdc++.h>
using namespace std;

int l,r;

bool f(int a[],int sum)
{
    while( l<r)
    {
	if(a[l] + a[r] == sum)
	    return 1;
	else if(a[l]+a[r] > sum)
	    r--;
	else
	    l++;
    }
    return 0;
}

int main()
{
    int n,sum;
    cin>>n>>sum;
    int a[n];
	
   
    for(int i=0; i<n; i++)
	cin>>a[i];

    sort(a,a+n);

    l=0;r=n-1;

    int ans = f(a,sum);
   if(ans)
       cout<<l<<" "<<r<<'\n';
   else
       cout<<"Impossible\n";
   return 0;
}
