#include <bits/stdc++.h>
using namespace std;

int N, Q, X, A, B, L, R;

int main() {
    ios_base::sync_with_stdio(false);
	cin>>N>>Q;
	
	for(int i = 0; i < N; i++) {
		cin>>X;
		if(X == -1) A++;
		else 		B++;
	}
	
	while(Q--) {
		cin>>L>>R;
		X = R - L + 1;
		
		if(X % 2) cout<<"0\n";
		else 	 cout<<(A>=(X/2) && B>=(X/2))<<endl;
	}
	
}