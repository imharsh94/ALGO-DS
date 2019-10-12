#include<stdio.h>
#include<stdlib.h>
int main(int argc, char*argv[])
{
int i,sum=0,a;
float avg;
for(i=1;i<argc;i++)
{a=atoi(argv[i]);
sum+=a;}
avg=sum/(argc-1);
printf("the sum is %d\n",sum);
printf("the average is %f\n",avg);
}

