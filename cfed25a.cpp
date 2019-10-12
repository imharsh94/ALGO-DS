#include <iostream>
using namespace std;

int main() {
	int n, no=0;
	char c;
	cin >> n;
	while(n--) {
		cin >> c;
		if(c=='0') {
			cout << no;
			no=0;
		}
		else ++no;
	}
	cout << no;
	return 0;
}