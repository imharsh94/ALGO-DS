#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
int len = s.length();
int steps,front,back,ans=len;

for(int i=0;i<len-1;i++)
 {
   front = i;
   steps = i;
   back = len-1;
   while(front <= back)
   { 
     if(s[front] != s[back])
      steps++;
     front++;
     back--; 
   }
   ans = min(ans,steps);
 }
 
 cout<<ans<<endl;
return 0;
}
