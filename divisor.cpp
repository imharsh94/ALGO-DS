#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int temp = 0;
    while (n > 0)
    {
        int r = n % 10;
        temp += r;
        n /= 10;
    }
    return temp;
}

int main()
{
    int no;
    cin >> no;
    int ans = 1, s;
    for (int i = 2; i <= no; i++)
    {
        if (no % i == 0)
            s = sum(i);
        if (s > sum(ans))
            ans = i;
    }
    cout<<ans<<'\n';
    return 0;
}