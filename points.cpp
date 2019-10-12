#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;cin>>n;
    int a,b,x,y; cin>>a>>b;
    n--;
    int cor[101];
    fill_n(cor,100,1);
    while(n--)
    {
        cin>>x>>y;
        fill_n(cor+x,y-x,0);
        
    }
    for(int i=a; i<b; i++)
    {
        if(cor[i]==1)
           cnt++;
        //cout<<cor[i]<<" ";
    }
    //cout<<endl;
    cout<<cnt<<endl;
    return 0;
}