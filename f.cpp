#include <iostream>
using namespace std;
 
int factorial(int n,int h)
{

	h =h+1;
	//cout<<h<<endl;
 if(n<= 1)
  return 1;
 else
  return h*factorial(n-1,h);
  cout<<h<<endl;
}
 
 
int main() {
 int z = factorial(5,1);
 cout<<z;
	return 0;
}
