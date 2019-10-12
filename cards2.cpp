#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;
#define mp make_pair
#define pb push_back



int main()
{
	ll  n,m=0,i,j,k,a,b,x,t,y,z,c;
	cin>>t;string str;cin.ignore();
	while(t--)
	{	v.resize(50);v.clear();
		getline(cin,str);
		
		v.pb(str[0]);
		for(i=2;i<str.size();i+=2)
		{
			b=28;y=-1;
			for(j=0;j<v.size();j++)
			{
				if(v[j]>=str[i])
				{
					a=v[j]-str[i];
					if(b>a)
					{
						b=a;y=j;
					}
				}
			}
			if(y==-1) v.pb(str[i]);
			else
			{
				v[y]=str[i];
			}
		}
		cout<<v.size()<<endl;
	}
	return 0;
}