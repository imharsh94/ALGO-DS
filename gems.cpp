#include<bits/stdc++.h>
using namespace std;
int a[2][2];
int main()
{
    bool ans = 0;
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2;
    cin>>c1>>c2;
    cin>>d1>>d2;
    set< int > s;
    for(int i=1; i<=9; i++)
    {
        if(r1 - i <=9 && r1-i >0)
        {
             a[0][0] = i; a[0][1] = r1-i;
         s.insert(a[0][0]);  s.insert(a[0][1]);
         
        }
        if(c1 - a[0][0] <= 9 && c1 - a[0][0] >=1)
        {
            a[1][0] = c1-a[0][0];
            s.insert(a[1][0]);
        }
        if(c2-a[0][1]<=9 && c2-a[0][1]>0)
        {
            a[1][1]=c2-a[0][1];
            s.insert(a[1][1]);
        }

        if(s.size()==4 && (a[0][0]+a[1][1]==d1) && (a[0][1]+a[1][0]==d2) &&(a[1][0]+a[1][1]==r2)) 
        {
            ans=1;break;
        }
        else{
            s.clear();
            a[0][0]=0; a[0][1]=0;
            a[1][0]=0; a[1][1]=0;
        }

    }

    if(ans)
    {
        cout<<a[0][0]<<" "<<a[0][1]<<'\n';
        cout<<a[1][0]<<" "<<a[1][1]<<'\n';
        
    }
    else
    {
        cout<<-1<<'\n';
    }
    return 0;
}