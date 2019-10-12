//spoj
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,c;
cin>>t;
while(t--)
  {
  string str;
   scanf("%d",&c);
   cin.ignore();
   
   int a[8]={0};
   getline(cin,str);
   
   for(int i=0; i<38; i++)
     {
       if(str[i]=='T' && str[i+1]=='T' && str[i+2]=='T')
        a[0]++;
       else if(str[i]=='T' && str[i+1]=='T' && str[i+2]=='H') 
        a[1]++;
       else if(str[i]=='T' && str[i+1]=='H' && str[i+2]=='T') 
        a[2]++; 
       else if(str[i]=='T' && str[i+1]=='H' && str[i+2]=='H') 
        a[3]++; 
       else if(str[i]=='H' && str[i+1]=='T' && str[i+2]=='T') 
        a[4]++; 
       else if(str[i]=='H' && str[i+1]=='T' && str[i+2]=='H') 
        a[5]++; 
       else if(str[i]=='H' && str[i+1]=='H' && str[i+2]=='T') 
        a[6]++;   
       else if(str[i]=='H' && str[i+1]=='H' && str[i+2]=='H') 
        a[7]++;   
     }
     
      printf("%d ",c);
      for(int i=0;i<8;++i)
         printf("%d ",a[i]);
      printf("\n");
   }
return 0;
}
