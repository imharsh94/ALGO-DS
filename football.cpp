 // codechef football match
 #include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef long double LD;
typedef pair<int,int> pii;
typedef pair<LL, LL> pll;

#define fi				first
#define sec 			second

const int MAX = 1e5 + 5;

string s[MAX];

int main() {
	ios_base::sync_with_stdio(false);
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 1; i <= n; ++i) {
			cin >> s[i];
		}
		int x=0;
		string a = s[1],b;
		for(int i=1 ; i<=n ; i++)
		 {
		   if(s[i] == a)
		     x+=1;
		   else
		     b=s[i];  
		 }
		 if(x > (n-x))
		   cout<<a<<endl;
	     else if((n-x) > x)
	       cout<<b<<endl;
	     else
	       cout<<"Draw\n";   
	}	
 return 0;
 }
