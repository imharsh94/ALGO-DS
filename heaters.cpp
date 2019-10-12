#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,r,count=0,last=-1,pos=-1;

    cin>>n>>r;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    while(last < n-1)
    {
        
        for(int i=n-1; i>max(-1,last-r+1); i--)
        {
            pos = -1;
            if(a[i] == 1)
            {
                if(i-r <= last)
                {
                    pos = i;
                    count++;
                    break;
                }
            }

        }

        if(pos == -1)
        {
            return cout<<-1<<'\n',0;
           // return 0;
        }
            


        last = pos + r -1;
    }

    cout<<count<<'\n';
    return 0;
}