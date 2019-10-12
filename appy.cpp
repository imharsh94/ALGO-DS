#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,flag = 1;
    cin>>n;
    char a[n][n] ;
    //memset(a,0,sizeof a);

    
    for(int i= 0; i< n; i++)
    {
       for(int j=0 ; j< n; j++)
       {
           cin>>a[i][j];
       }
    }


     for(int i = 0; i < n; i++)
    {
        c=0;
       for(int j=0 ; j< n; j++)
       {
        if(i-1>=0 && a[i-1][j] == 'o')
            {c++;}
        if(i+1<n && a[i+1][j] == 'o')
            {c++;}
        if(j-1>=0 && a[i][j-1] == 'o')
            {c++;}
        if(j+1<n && a[i][j+1] == 'o' )
           { c++;}

           if(c%2 != 0)
          {
             flag = 0;
             cout<<"NO\n";
             break;
          }
      
       }
       if(flag == 0)
        break;
       
      
    }

    if(flag)
       { cout<<"YES\n";}
    
    return 0;
}