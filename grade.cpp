#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int grades[n];

    for(int i=0; i<n; i++)
        cin>>grades[i];

    for(int i=0; i<n; i++)
    {
        int x;
        if(grades[i] % 5 != 0)
            x = grades[i]/5 +1;
        else
            x = grades[i]/5;

        if(grades[i] >=  38 && abs(grades[i]- (x*5)) <3)
            grades[i] = x*5;
            
    }

    for(int i=0; i<n; i++)
        cout<<grades[i]<<'\n';

    return 0;
}