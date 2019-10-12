#include<bits/stdc++.h>
using namespace std;

char arr[30][30];

bool check(int i,int j,int x,int y)
{
    int c=0,f=0;
    for(int a=0;a<5;a++)
    {
        c+=arr[i + x*a][j + y*a] == 'X';
        f+=arr[i + x*a][j + y*a] == '.';
        
    }
    if(c==4 && f==1) return true;
    return false;
    
}

int main()
{
    for(int i=10;i<20;i++){
        for(int j=10;j<20;j++) cin>>arr[i][j];
    }

    bool ok;
    for(int i=10;i<20;i++){
        for(int j=10;j<20;j++)
        {
            ok|=check(i,j,1,1);
            ok|=check(i,j,1,0);
            ok|=check(i,j,0,1);
            ok|=check(i,j,1,-1);
        }
    }
    puts(ok ? "YES" : "NO");
    return 0;
}