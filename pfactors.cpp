// ! prime factors of a number
#include<bits/stdc++.h>
using namespace std;

set< int > s;
set< int >:: iterator it;

void primeFactors(int n)
{
    while(n%2 == 0)
    {
        s.insert(2);
        n = n/2;
    }

    for(int i=3; i<= sqrt(n); i+=2)
    {
        while(n%i == 0)
        {
           s.insert(i);
            n = n/i;
        }
    }
    if(n>2)
       s.insert(n);
}

int main()
{
    int n = 60;
    primeFactors(n);

    for(it=s.begin(); it!=s.end(); it++)
        cout<<*it<<' ';
    return 0;
}
