#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int loc = s.find('^');
    
    long long int wl=0,wr=0,z;
    for(int i=0; i<loc; i++)
    {
        if(s[i] == '=')
            continue;
        else
             z = s[i] - '0';
            wl = wl + (z*(loc-i));
    }

    for(int i=loc+1 ; i<s.length() ; i++)
    {
        if(s[i] == '=')
            continue;
        else
             z = s[i] - '0';
            wr = wr + (z*(i-loc));  
    }
    
    if(wl == wr)
        cout<<"balance\n";
    else if(wl>wr)
        cout<<"left\n";
    else
        cout<<"right\n";
    return 0;
}