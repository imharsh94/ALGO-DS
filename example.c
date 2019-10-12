#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
float a,c;
int b;
a=atof(argv[1]);
b=a;
printf("integer is=%d\n",b);
c=a-b;
printf("decimal is=%f\n",c);
}
