#include<bits/stdc++.h>
using namespace std;

int main()
{
    int levels;
    cin>>levels;
    int a,b,d;
    cin>>a;
    set< int > s;
    
    for(int i = 0; i < a; i++)
    {
        cin>>d;
        s.insert(d);
    }
    cin>>b;
    for(int i = 0; i < b; i++)
    {
        cin>>d;
        s.insert(d);
    }

    if(s.size() == levels )
        cout<<"I become the guy.\n";
    else
        cout<<"Oh, my keyboard!\n";
   return 0;
}