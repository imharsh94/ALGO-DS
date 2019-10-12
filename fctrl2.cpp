#include<bits/stdc++.h>
using namespace std;
#define MAX 500

int multiply(int x, int res[], int resize);

void factorial(int n)
{
    int res[MAX];
    memset(res,0,sizeof(res));

    res[0]=1;
    int resize = 1;

    for(int x=2; x<=n; x++)
        resize = multiply(x,res,resize);

    for(int i=resize-1; i>=0 ; i--)
        cout<<res[i];
    cout<<'\n';
}

int multiply(int x, int res[], int resize)
{
    int carry=0;
    for(int i=0; i<resize;i++)
    {
        int prod = res[i]*x + carry;
        res[i] = prod%10;
        carry = prod/10;
    }

    while(carry)
    {
        res[resize] = carry%10;
        carry = carry/10;
        resize++;
    }
    return resize;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        factorial(n);
    }
    return 0;
}