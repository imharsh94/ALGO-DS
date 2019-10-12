// hackerearth two arrays 
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,q;
	cin>>n>>q;
	ll a[n+100],b[n+100];

	
	for(int i=1;i<=n;i++)
 		cin>>a[i];

 	for(int i=1;i<=n;i++)
 		cin>>b[i];
	for(int i=2; i<=n; i+=2)
		swap(a[i],b[i]);

	for(int i=1;i<=n;i++)
	{
		a[i] += a[i-1];
		b[i] += b[i-1];
	}	

	while(q--)
	{
		int c,l,r;
		cin>>c>>l>>r;
		if(c==1){
			if(l%2){
				cout << a[r]-a[l-1] << endl;
			}else{
				cout << b[r]-b[l-1] << endl;
			}
		}else{
			if(l%2 == 0){
				cout << a[r]-a[l-1] << endl;
			}else{
				cout << b[r]-b[l-1] << endl;
			}
		}	

	}
 	
	return 0; 
}