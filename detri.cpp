// hackerrank maximum perimeter triangle
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,x,y,z; cin>>n;
    int sticks[n];

    ll ans = -1 ;
    for(int i=0; i<n; i++)
        cin>>sticks[i];

    sort(sticks,sticks+n);

    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                int peri = sticks[i]+sticks[j]+sticks[k];
                if(sticks[i]+ sticks[j] > sticks[k])
                    {
                        if(peri > ans)
                        {
                            ans = peri;
                            x = sticks[i];
                            y = sticks[j];
                            z = sticks[k];
                        }
                        else  if(ans == peri)
                        {
                            if(sticks[k] > z)
                            {
                                x = sticks[i];
                                y = sticks[j];
                                z = sticks[k];
                            }
                            else if(z == sticks[k] && x<sticks[i])
                            {
                                x = sticks[i];
                                y = sticks[j];
                                z = sticks[k];
                            }
                        }
                    }
            }
        }
    }
    if(ans != -1)
        cout<<x<<" "<<y<<" "<<z<<'\n';
    else
        cout<<-1<<'\n';
    return 0;
}