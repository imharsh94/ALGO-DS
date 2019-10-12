#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    
    cin>>t;
    
    while(t--)
    {
        int tr,dr,ts,ds,a,flag=0;
        set< int > truth,dare;
        

        cin>>tr;
        for(int i=0; i<tr; i++)
        {
             cin>>a;
             truth.insert(a);
        }

        cin>>dr;
        for(int i=0; i<dr; i++)
        {
             cin>>a;
             dare.insert(a);
        }  

        cin>>ts;
        for(int i=0; i<ts; i++)
        {
            cin>>a;
            if(truth.find(a) == truth.end())
            {
                flag=1;
               // break;
            }
        }
        //cout<<"hi\n";
        cin>>ds;
        for(int i=0; i<ds; i++)
        {
            cin>>a;
            if(dare.find(a) == dare.end())
            {
                flag=1;
                break;
            }
        }

        if(flag)
            cout<<"no\n";
        else
            cout<<"yes\n";

    }
    return 0;
}