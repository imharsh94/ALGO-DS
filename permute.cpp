#include<bits/stdc++.h>
using namespace std;
set< string > st;

void swap(string &s, int a,int b)
{
    char temp = s[a];
    s[a] = s[b];
    s[b] = temp;
}

void permute(string &s,int x, int end)
{
    if(x == end)
        {
           st.insert(s);
           //cout<<s<<'\n';
        }

    for(int i=x; i<end; i++)
    {
        swap(s,x,i);
        permute(s,x+1,end);
        swap(s,x,i);
    }
}

int main()
{
    string s="abb";
    int l = s.length();
    permute(s,0,l);
    for(auto it=st.begin(); it != st.end();++it)
        cout<<*it<<'\n';
    return 0;
}