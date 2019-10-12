#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,z=0;
    cin>>n>>m;
    char s[n+1][m+1];
    char a[2]={'W','B'};

    for(int i=0;i<n;i++)
        cin>>s[i];



    for(int i=0;i<n; i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j] == '-')
                {
                    z = (z+1)%2;
                }
            else
              {

                  s[i][j] = a[z];
                  z=(z+1)%2;
              }
        }

        if(m%2 == 0)
            z=(z+1)%2;
    }


    for(int i=0;i<n;i++)
        cout<<s[i]<<'\n';
    return 0;
}