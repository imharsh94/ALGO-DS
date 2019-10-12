#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0,j=0;;
	char s[1005];
	cin>>n>>s;
	while(s[i]=='.') 
	  i++;
	while(n>0 && s[n-1]=='.') 
	  s[n--]='L';
	while(s[j]!='L') 
	  j++;
	cout<<i+1<<" "<<j;
	return 0;
}