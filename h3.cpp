#include<bits/stdc++.h>
using namespace std;


void miss(set< int > &s, int n, int low,int high)
{
    for(int x = low; x<=high; x++)
	if(s.find(x) == s.end())
	    cout<<x<<" ";
}


int main()
{
    set< int > s;
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    int low = 1, high = 10;
    miss(s,s.size(),low,high);
    
    return 0;
}
