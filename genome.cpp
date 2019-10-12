#include<bits/stdc++.h>
using namespace std;

set< int > s;
set< int >::iterator it;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    it = s.begin();
    if(s1.length() != s2.length())
        return cout<<"NO\n",0;

    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i] != s2[i])
            s.insert(i);
    }
   // cout<<s.size()<<'\n';
    it = s.begin();
    int a = *it;
    ++it;
    int b = *it;
    //cout<<a<<'\n';
    //cout<<b<<'\n';

    if(s.size() != 2)
        cout<<"NO\n";
    else
    {
       
        swap(s1[a],s1[b]);
        if(s1 == s2)
            cout<<"YES\n";
        else  
            cout<<"NO\n";
    }

    return 0;
}