#include<bits/stdc++.h>
using namespace std;
int n,h,l,r,q;
int main() {
	cin>>n>>h>>l>>r>>q;
	int a,b,c,d;
	while (q--) {
		cin>>a>>b>>c>>d;
		if (a==c) cout<<abs(b-d);
		else {
			if (b<l&&d<l) cout<<abs(a-c)+l-b+l-d;
			else if (b>r&&d>r) cout<<abs(a-c)+b-r+d-r;
			else cout<<abs(a-c)+abs(d-b);
		}
		cout<<endl;
	}
}
