#include<bits/stdc++.h>
using namespace std;

void swap(int *&e, int *&f)
{
    int *temp = e;
    e = f;
    f = temp;
}

int main()
{
    int a=10, b=20;
    int *c = &a;
    int *d = &b;

    int **e = &c;
    int **f = &d;

    cout<<**e<<" "<<**f<<'\n';
    swap(*e,*f);

    cout<<**e<<" "<<**f<<'\n';
    return 0;
}