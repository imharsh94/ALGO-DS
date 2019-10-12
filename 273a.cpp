#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,tot=0;
    for(int i=0; i<5 ; i++)
    {
	cin>>a;
	tot += a;
    }
    if(tot ==0)
	cout<<-1;
   else if(tot%5 == 0)
	cout<<tot/5;
    else
	cout<<-1;
    return 0;
}
