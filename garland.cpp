#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int r=0,c=0;


        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == 'R')r++;
            if(s[i] == s[(i+1)%s.length()])c++;
        }

        //cout<<r<<' '<<c<<" ";

        if(((2*r) != s.length()) || (c != 0 && c != 2))
            cout<<"no\n";
        else
            cout<<"yes\n";
    }
    return 0;
}