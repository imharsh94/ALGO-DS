#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int flag=0,i,j;
	cin>>s;
	set< char > v;
	set< char > f;

	
	set< char >::iterator it;


	if(s.length() < 26)
		cout<<-1<<'\n';
	else
	{
		for( i=0; i< s.length()-26+1  ; i++)
		{

	      for(char i ='A'; i<='Z' ; i++)
		    f.insert(i);
		  int c=0;
			for(j=0 ; j<26 ; j++)
			{
				if( s[i+j] != '?' )
					{ 
					  if(f.count(s[i+j]) == 1)
					  	f.erase(s[i+j]);
					}
				else
				{
					c++;
				}	
			}
			if(f.size() == c)
			{
				flag=1;
				
				break;
			}


		}

		
		if(flag)
		{
		  for(int z = 0 ; z<s.length() ; z++)
		  {
			if(s[z] != '?')
				cout<<s[z];
			else if(s[z] == '?' && (z<i || z>i+25))
				cout<<'A';
			else
			{
				it = f.begin();
				cout<<*it;
				f.erase(it);
			}

		  }
		  cout<<'\n';
	    }
	  else
	  	cout<<-1<<endl;
	} 
	return 0;
}
