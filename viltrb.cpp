// codechef nov long challenge 1.
 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
  int t;
  cin>>t;
  while(t--)
   {
    string s;
    char temp;
    cin>>s;
    int ca=0,cb=0,j=0,ta=0,tb=0;
    for(int i=0; i<s.length();i++)
     {
       if(s[i]=='A'|| s[i]=='B')
        {
         j=i;
         break;
        }
     }
     temp = s[j];
    for(int i=j+1; i<s.length(); i++)
    {
      if(s[i]=='A' || s[i] == 'B')
       {
         if(temp == s[i] && s[i]=='A')
         {
           ca = ca + (i-j-1);
           j=i;
           temp = s[i];
         }
        else if(temp == s[i] && s[i]=='B')
         {
           cb = cb + (i-j-1);
           j=i;
           temp = s[i];
         } 
        else if(s[i]=='A' || s[i]=='B')
         {
          j=i;
          temp = s[i];
         }
       }
       
       
    }
    
    for(int i=0;i<s.length();i++)
      {
       if(s[i]=='A') ta += 1;
       if(s[i]=='B') tb +=1;
      }
      cout<<ta+ca<<" "<<tb+cb<<endl;
      
    }  
  return 0;
 }
