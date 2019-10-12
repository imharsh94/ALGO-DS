#include<bits/stdc++.h>
using namespace std;
string s,t;

int lcs(int m,int n)
{
   int l[m+1][n+1];

   for(int i=0; i<=m; i++)
   {
       for(int j=0; j<=n; j++)
       {
	   if(i==0 || j==0)
	       l[i][j] = 0;
	   else if(s[i-1] == t[j-1])
	       l[i][j] = l[i-1][j-1]+1;
	   else
	       l[i][j] = max(l[i][j-1],l[i-1][j]);
       }
   }
   return l[m][n];
}


int main()
{
 
    cin>>s;
    t = reverse(s.begin(), s.end());
    int m = s.length();
    int n = t.length();
 
 cout<< lcs(m,n)<<endl;

return 0;
}
