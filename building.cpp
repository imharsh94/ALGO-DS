#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,h,a,b,k,z;
    cin>>n>>h>>a>>b>>k;

    while(k--)
    {
	ll ans1,ans2,ans3,ta,fa,tb,fb;
	cin>>ta>>fa>>tb>>fb;

	if(ta == tb)
	{
	    cout<<abs(fa-fb)<<'\n';
	   
	}
	else
	{
	    if(fa>=a && fa<=b)
	    ans1=0;
	    else
	    {
	       if((abs(fa-a) < abs(fa-b)))
	       {
		ans1  = abs(fa-a);
		fa=a;
	       }
	       else
	       {
	       	ans1 = abs(fa-b);
		fa=b;
	       }
	    }

	     ans2 = abs(tb-ta);
	     ans3 = abs(fb-fa);
	     // cout<<ans1<<" "<<ans2<<" "<<ans3<<'\n';
	     cout<<ans1+ans2+ans3<<'\n';
	 }


    }
   
    return 0;
}
