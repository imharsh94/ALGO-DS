#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,40};
    int *b;
    b = (int *)a;
    cout<<*(b+1)<<'\n';
    return 0;
}