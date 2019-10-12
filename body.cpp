#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,chest=0,biceps=0,back=0;
    cin>>n;
    int e[n];

    for(int i=0; i<n; i++)
        cin>>e[i];

    for(int i=0; i<n; i+=3)
        chest += e[i];

    for(int i=1; i<n; i+=3)
        biceps += e[i];

    for(int i=2; i<n; i+=3)
        back += e[i];

    if(chest > biceps && chest>back)
        cout<<"chest\n";
    if(back>chest && back>biceps)
        cout<<"back\n";
    if(biceps>chest && biceps>back)
        cout<<"biceps\n";
    return 0;
}