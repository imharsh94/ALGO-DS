#include<bits/stdc++.h>
using namespace std;

vector<long long> stk;

int main()
{
	long long  a,b,cases,y;
	unsigned long long i,j;
	cin>>cases;
    string s;
    cin.ignore();
	while(cases--)
	{	
        stk.resize(50);
        stk.clear();
		getline(cin,s);
		
		stk.push_back(s[0]);
		for(i=2;i<s.size();i+=2)
		{
			b=28;y=-1;
			for(j=0;j<stk.size();j++)
			{
				if(stk[j]>=s[i])
				{
					a=stk[j]-s[i];
					if(b>a)
					{
						b=a;y=j;
					}
				}
			}
			if(y==-1) stk.push_back(s[i]);
			else
			{
				stk[y]=s[i];
			}
		}
		cout<<stk.size()<<endl;
	}
	return 0;
}