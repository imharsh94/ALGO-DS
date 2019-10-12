#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[] = { '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A' };

    string t; cin>>t;
    string a,b; cin>>a>>b;

    if(t == a.substr(1,1) && t!= b.substr(1,1))
        cout<<"YES\n";
    else
    {
        if(a.substr(1,1) == b.substr(1,1))
            {
                int i,j;
                for( i=0;i<9;i++)
                {
                    if(arr[i] == a[0])
                    break;
                }

                for( j=0;j<9;j++)
                {
                    if(arr[j] == b[0])
                    break;
                }
                if(i > j)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        else
            cout<<"NO\n";
    }
    return 0;
}