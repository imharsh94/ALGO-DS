#include<bits/stdc++.h>
using namespace std;

int main()
{
    //int a = 2<<3;
    //cout<<a<<'\n';
    char zero = '0';    string s = "123";
    int index = 0;
    //int n = s[index] - zero;
    int n=0;
    int len = s.length();
    while (index < len) {
                
    n = n * 10 + ( s[index] - zero );
    index++;
    }
    cout<<n<<'\n';
    return 0;
}