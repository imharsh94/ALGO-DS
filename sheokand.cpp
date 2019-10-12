#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
	bitset< 34 > bs,ss,ts;
	int n,i=0,z; cin>>n;
	bs=n;
	ss=n;
	z=n;
	while(bs.count() != 2)
	{
	    i++;
	    // z = n-i;
	    // bs=z;
	    // if(bs.count()==2)
	    //	break;
	    z = n+i;
	    bs = z;
	    if(bs.count()==2)
		break;
	    
	}
	

	int num=n,ans=INT_MAX;
	if(ss.count() != 2)
	{
	
	for(int j=0; j<ss.size(); j++)
	{
	    if(ss[j] == 1)
	    {
		num  = num - pow(2,i);
		ts = num;
		if(ts.count() == 2)
		{ans = n- num;break;}
	    }
	}
	}
	cout<<min(ans,i)<<'\n';
    }
    return 0;
}
