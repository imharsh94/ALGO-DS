#include<bits/stdc++.h>
using namespace std;

int x[12];
int main()
{
    string s[12] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B","H"},a,b,c;
    cin>>a>>b>>c;
    for(int i=0; i<12; i++)
        if(a==s[i]|| b==s[i]|| c==s[i])x[i]=1;
    for(int i=0;i<12;i++)
    {
        if(x[i])
        {
            if(x[(i+4)%12] && x[(i+7)%12])
            {
                cout<<"major\n";
                return 0;
            }
            if(x[(i+3)%12] && x[(i+7)%12])
            {
                cout<<"minor\n";
                return 0;
            }
        }
    }
    cout<<"strange\n";
    return 0;
}