#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    string s;
    cin>>c;
    getline(cin,s);

    set< char > se;

    for(int i=0 ; i<s.length()-1;)
    {
        se.insert(s[i]);
        i+=3;
    }

    cout<<se.size()<<'\n';
    return 0;
}