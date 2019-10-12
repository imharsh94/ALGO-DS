#include<bits/stdc++.h>
using namespace std;

bool issubset(int a1[], int a2[], int m, int n)
{
    set< int > s;
    for(int i=0; i<4; i++)
    {
	s.insert(a1[i]);
    }

    for(int i=0; i<3; i++)
    {
	if(s.count(a2[i]) == 0)
	    return false;
    }
    return true;
}


int main()
{
    int a1[] = {1,2,3,4};
    int a2[] = {1,4};
	
    if(issubset(a1,a2,4,2))
	cout<<"It is a subset \n";
    else
	cout<<"It is not a subset \n";
    return 0;
}


