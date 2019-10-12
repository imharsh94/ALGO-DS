#include<bits/stdc++.h>
using namespace std;

int main()
{
    
     string s;
     
     getline(cin,s);
     transform(s.begin(),s.end(),s.begin(), ::tolower);
     int v = s.length()-2;
     while(s[v] == ' ')
        v--;
     if(s[v]=='a'||s[v]=='e'||s[v]=='i'||s[v]=='o'||s[v]=='u'||s[v]=='y')
        cout<<"YES\n";
     else
        cout<<"NO\n";
     
    return 0;
}