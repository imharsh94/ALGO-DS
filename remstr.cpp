//remove recursive string
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[] = "ah";
    char s[]="harsh";
    char *str = s;
    char *st = s1;
    str--;
    str[0] = st[1];
    str--;
    str[0] = s1[0];
    cout<<str<<'\n';
    return 0;
}