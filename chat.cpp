#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a,b,c,d,e;

    a = s.find('h',0);
    b = s.find('e',a+1);
    c = s.find('l',b+1);
    d = s.find('l',c+1);
    e = s.find('o',d+1);

    if(a == -1 || b == -1 || c == -1 || d== -1 || e ==-1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}