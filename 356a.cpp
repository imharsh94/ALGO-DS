#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0,a,temp,ans;
    map< int,int > mp;
    for(int i=0; i<5; i++)
    {
	cin>>a;
	sum = sum+a;
	mp[a]++;
    }

    temp = sum;
    ans = sum;
    for(auto x: mp)
    {
	if(x.second > 1)
	    temp = sum - (x.first*min(3,x.second));
	    if(temp < ans)
	    {
		ans = temp;
	    }
    }

    cout<<ans<<'\n';
    return 0;
}
	
