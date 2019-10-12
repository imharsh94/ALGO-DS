#include<bits/stdc++.h>
using namespace std;
string s,t;

int lcs(int m,int n)
{
    if(m ==0 || n == 0)
	return 0;
    if(s[m-1] == t[n-1])
	return 1+lcs(m-1,n-1);
    else
	return max(lcs(m,n-1),lcs(m-1,n));
}
    
int main()
{
    cin>>s>>t;
    int m = s.length();
    int n = t.length();

    cout<<lcs(m,n)<<'\n';
    return 0;
}
