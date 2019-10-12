#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int t,i,j,n,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        if(n == 1)
            cout<<k<<'\n';
        else if(k>3)
        {
            j = log2(k);
            j = pow(2,j);

            if(n%2)
            {
                cout<<j<<" "<<j-2<<" 1 ";
                n-=3;
            }
            else
            {
                cout<<j<<" "<<j-1<<" ";
                n-=2;
            }
            while(n>0)
            {
                n--; cout<<"1 ";
            }
        }
        else if(k == 1)
        {
            while(n>0)
            {
                n--;
                cout<<"1 ";
            }
        }
        else if(k == 2)
        {
            cout<<"2 ";
            n-=1;
            while(n>0)
            {
                n--;
                cout<<"1 ";
            }
        }
        else if(k == 3)
        {
            if(n==2)
            {
                cout<<"1 2"<<endl;continue;
            }
            else if(n%2)
            {
                cout<<"3 ";n-=1;

            }
            else{
                cout<<"1 2 ";n-=2;
            }

            while(n>0)
            {
                n--;
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}