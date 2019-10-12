//codefoeces 303 A
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ans=n;
	for(int i=0;s.size()>0 && i<s.length()-1;)
	{
		if((s[i] == '0' && s[i+1] == '1') || (s[i]=='1' && s[i+1]=='0'))
			{
				s.erase(i,2);ans = ans-2;
				if(i==0)
					i=0;
				else
					i=i-1;
			}
		else
			i++;	
	}
	cout<<ans<<endl;
	return 0;
}