#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,t;
    scanf("%d:%d", &h,&m);
    t = h*60+m;
    do{
        t = (t+1)%(24*60);
    }while(t/60/10 != t%60%10 || t/60%10 != t%60/10);
    printf("%02d:%02d", t/60,t%60);
    return 0;
}