#include<bits/stdc++.h>
using namespace std;

int c[4];
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='n')c[0]++;
        if(s[i]=='i')c[1]++;
        if(s[i]=='e')c[2]++;
        if(s[i]=='t')c[3]++;
    }
    int ans=0;
    
    if(c[0]>=3 && c[1]>=1 && c[2]>=3 && c[3]>=1)
    {
        ans++;
        c[0]-=3; c[1]-=1; c[2]-=3; c[3]-=1;
        while(c[0]>=2 && c[1]>=1 && c[2]>=3 && c[3]>=1)
        {
        ans++;c[0]-=2; c[1]-=1; c[2]-=3; c[3]-=1;
        
       }
    }
    
   
    cout<<ans<<'\n';
}