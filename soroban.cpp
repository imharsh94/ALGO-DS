#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,r;
    cin>>n;
    if(n==0)
        cout<<"O-|-OOOO";
    else
    {

    while(n>0)
    {
        r = n%10;
        
        if(r>=5)
        {
            cout<<"-O|"; r = r-5;
        }
        else
        {
            cout<<"O-|";
        }
            for(int i=0; i<5; i++)
            {
                if(r==i)
                    cout<<"-";
                else
                    cout<<"O";
            }
        
        cout<<endl;
        n/=10;
    }
    }
    return 0;
}