#include<bits/stdc++.h>
using namespace std;

int main()
{
    map< char,int > pri;
    pri['+'] = 1; pri['-']=2; pri['*']=3; pri['/']=4; pri['^'] = 5;
   

    int t; cin>>t;
    while(t--)
    {
        stack< char > st;
	string s,ans; cin>>s;

	for(int i=0; i<s.length(); i++)
	{
	    if(s[i]>='a' && s[i]<='z')
		ans += s[i];
	    else if(s[i]=='(' || (pri[s[i]] > pri[st.top()]) || st.top()=='(')
		st.push(s[i]);
	    else if(s[i]==')')
	    {
		while(st.top() != '(')
		{
		    char c = st.top();
		    ans += c;
		    st.pop();
		}
		st.pop();
	    }
	    else if(pri[st.top()] >= pri[s[i]])
	    {
		while(pri[st.top()] >= pri[s[i]])
		{
		    char c = st.top();
		    ans += c;
		    st.pop();
		}
	    }
	}

	while(!st.empty())
	{
	    char c = st.top();
	    if(c != '(')
		ans += c;
	    st.pop();
	}

	cout<<ans<<'\n';
    }
    
   
    return 0;
}
