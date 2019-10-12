#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{


	 set< ll > s;
	 set< ll >::iterator it,iy;
	 ll n,a,b,c,count=0;
	 cin>>n>>a>>b>>c;
	 ll pro;
	 for (int i = 1; i < sqrt(n)+1 ; ++i)
	 {
		if( n%i == 0)
		{
			s.insert(i);
		
		    if(i != n/i)
			  s.insert(n/i);
		}
	 }
	  
	  for(it = s.begin(); it != s.end(); ++it)
	  {
	  		if(*it > a)
	  			continue;
	    	for(iy = s.begin(); iy != s.end() ; ++iy)
			 {
				
				if((*it)<=a && (*iy) <= b && n%((*it)*(*iy)) == 0)
				{
					pro = n/((*it)*(*iy));
					if( pro <= c)
						count++;			
				}
			 }
	    }

	  cout<<count<<'\n';

    }
	return 0;
}