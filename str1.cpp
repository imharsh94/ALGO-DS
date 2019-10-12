#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "zaddff";
    unordered_map< char,int > mp;
    unordered_map< char,int >:: iterator it;

    for(int i=0; i<s.length(); i++)
    {
        if(mp.find(s[i]) == mp.end())
        {
            mp.insert(make_pair(s[i],1));
        }
        else
        {
            mp[s[i]] += 1;
        }
        
    }

    for(auto &x : mp)
    {
        if(x.second == 1)
        {
            cout<<x.first<<'\n';
            break;
        }
    }

    for(it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second == 1)
        {
            cout<<it->first<<'\n';
            break;
        }
    }
    return 0;
}