#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n == 1)
    {
	cout<<1<<'\n';
	cout<<1<<'\n';
	return 0;
    }
    if(n == 2)
    {
      	cout<<1<<'\n';
	cout<<1<<'\n';
	return 0;
    }
    if(n == 3)
    {
      	cout<<2<<'\n';
	cout<<"1 3"<<'\n';
	return 0;
    }
     if(n == 4)
    {
      	cout<<4<<'\n';
	cout<<"3 1 4 2" <<'\n';
	return 0;
    }

     cout<<n<<endl;
     
     for(int i=n; i>0; i -= 2)
	 cout<<i<<" ";
     for(int i=n-1; i>0; i-=2)
	 cout<<i<<" ";
     cout<<endl;
     return 0;
}
