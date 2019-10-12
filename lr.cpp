#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
    int a;
    string s;
    ifstream ifs("input.txt");
    ofstream ofs("output.txt");
    ifs>>a>>s;

    for(int i=0; i<a/2; i++)
    {
        if(s[i]=='R' && s[i+a/2]=='L')
            ofs<<i+a/2+1<<" "<<i+1<<'\n';
        else
            ofs<<i+1<<" "<<i+a/2+1<<'\n';
    }
    return 0;
}