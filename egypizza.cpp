#include<bits/stdc++.h>
using namespace std;
map< string,int > mp;
int ans;

int main()
{
   
    int n;
    cin>>n;
    string s;
    while(n--)
    {
	cin>>s;
	mp[s]++;
    }
    
    ans = mp["3/4"];
    
    mp["1/4"] = max(0,(mp["1/4"] - mp["3/4"]));
    
    ans = ans + mp["1/4"]/4;
    mp["1/4"] = mp["1/4"]%4;
    
    ans = ans +  mp["1/2"]/2;
    mp["1/2"] = mp["1/2"]%2;

    if(mp["1/2"] && mp["1/4"]>0)
    {
	ans = ans+1;
	mp["1/2"] = 0;
	mp["1/4"] = max(0,mp["1/4"]-2);
    }

    if(mp["1/4"])
	ans = ans+1;
    

    if(mp["1/2"])
	ans += 1;
	
    cout<<ans+1<<'\n';
    return 0;
}
