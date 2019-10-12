#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,x,z;
    cin>>x>>s;
    int a[26]={0};
    for(int i=0;i<x.length();i++)
    {
        a[x[i]-97]=1;
    }
   int c;
   cin>>c;
   while(c--)
   {
       int flag=0;
       cin>>z;
       int t= z.length();
       if(t==s.length())
       {
           for(int i=0;i<s.length();i++)
           {
               if(s[i] == '?' && a[z[i]-97])
               continue;
               

             if(s[i] == '*' && a[z[i]-97] == 0)
             continue;
             

              if(s[i] == z[i] )
             continue;

             else{flag=1;break;}

            
           }
       }
       else
       {
        for(int i=0,j=0; i<z.length();i++,j++)
        {
            if(s[j]=='?' && a[z[i]-97])
            continue;
            if(s[i]=='*' )
            {
                if(s[j++] == z[i])
                continue;
            }
            else{flag=1;break;}
        }
       }
    if(flag)
     cout<<"NO";
    else
      cout<<"YES";  
   } 
   return 0;
}