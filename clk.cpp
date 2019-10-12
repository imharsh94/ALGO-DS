#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b; cin>>n;
    set< int > rows,columns;

    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        columns.insert(a);
        rows.insert(b);
    }
    cout<<min(rows.size(),columns.size())<<endl;
    return 0;
}