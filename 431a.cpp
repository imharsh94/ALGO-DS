#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a1,a2,a3,a4,tot=0;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
	if(s[i] == '1')
	    tot += a1;
	else if(s[i] == '2')
	    tot += a2;
	else if(s[i] == '3')
	    tot += a3;
	else
	    tot += a4;
    }

    cout<<tot<<'\n';
    return 0;
}
   
    
