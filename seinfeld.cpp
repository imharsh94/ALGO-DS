// spoj ANARC09A- seinfeild
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k=1;
    cin>>s;

    while(s[0] != '-')
    {
        int l=0,r=0,ans=0;
        stack< char > st;

        for(int i=0; i<s.length(); i++)
        {
            
            if(!st.empty() && st.top()=='{' && s[i]=='}')
                st.pop();
            else
                st.push(s[i]);
        } 
        //cout<<st.size()<<'\n';
        while(!st.empty())
        {
            char c = st.top();
            if(c == '{')
                l++;
            else
                r++;
            st.pop();
        }

        ans = (l/2)+(r/2)+(l%2 + r%2);
        cout<<k<<". "<<ans<<'\n';
        cin>>s;
        k++;
    }
}
