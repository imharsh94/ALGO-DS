#include<bits/stdc++.h>
using namespace std;

int main()
{
    set< string > s;
    s.insert("ABSINTH");s.insert("BEER");s.insert("BRANDY");
    s.insert("CHAMPAGNE");s.insert("GIN");s.insert("RUM");
    s.insert("SAKE");s.insert("TEQUILA");s.insert("WHISKEY");
    s.insert("WINE");s.insert("VODKA");


    set< string >::iterator it;
    string st;

    int a,n,c=0; cin>>n;
    while(n--)
    {
        cin>>st;
        if(s.find(st) != s.end()) c++;
        else
        {
            if(st[0] >= '0' && st[0]<='9')
            {
               a = stoi(st);
               if(a<18)
                 c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}