#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int t[n+2],times=0,jokes=0,songs=0;

    for(int i=1; i<=n ; i++)
        cin>>t[i];

    for(int i=1; i<=n ; i++)
    {
       
        if(times + t[i] <= d)
        {
            songs++;
            times = times +t[i];
        }
            
       if(times +10<= d )
       {
           times = times+10;
           jokes = jokes + 2;
       }
       
       else
            break;
    }
    d = d - times;
    jokes = jokes + d/5;
    if(songs == n)
        cout<<jokes<<'\n';
    else
        cout<<-1<<'\n';
    return 0;
}