#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,s;
    char *str;
    scanf("%d:%d:%d%s",&h,&m,&s,str);

    if(*str == 'P' && *(str+1)=='M')
    {
        if(h+12 < 24)
            printf("%02d:%02d:%02d",h+12,m,s);
        else
            printf("00:%02d:%02d",h,m,s);
    }
    else
    {
        if(h == 12)
            printf("00:%02d:%02d",h,m,s);
        else
            printf("%02d:%02d:%02d",h,m,s);
    }
    
    
    
    

    return 0;
}