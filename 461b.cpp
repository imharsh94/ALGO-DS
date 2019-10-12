#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

template<typename T= int>
inline T read()
{
	T val=0,sign=1; char ch;
	for(ch = getchar(); ch<'0' || ch>'9'; ch = getchar())
		if(ch == '-') sign = -1;
	for(;ch>='0' && ch<='9'; ch = getchar())
		val = val*10+ch-'0';
	return sign*val;
}

int main()
{
	int n = read();
	int ans=0;

	for(int i=1; i<=n; i++)
		for(int j=i; j<=n ; j++)
		{
			int x = i^j;
			if(x<j || i+j<=x || x>n) continue;
			ans++;
		}
	
	
	
	 cout<<ans<<'\n';
	
	return 0;
}