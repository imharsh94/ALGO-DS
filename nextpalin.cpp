#include<bits/stdc++.h>
using namespace std;
string K;
int flag;

void palin()
{
    int len,i,temp,t,tmp1;
    len = K.length();
    
    
    
    flag=1;
    for(i=0; i<len; i++)
    {
	if(K[i] != '9')
	{
	    flag=0;break;
	}
    }
    if(flag)
    {
	K[0] ='1';
	for(i=1; i<len; i++)
	    K[i]='0';
	K = K +"1";
//	K[len+1]='\n';
	return ;
    }
    flag=0;
    for(i=0; i<len/2; i++)
    {
	if(K[i] < K[len-i-1])
	    flag=-1;
	if(K[i] > K[len-i-1])
	    flag=1;
	K[len-i-1] = K[i];
    }

    if(flag==-1 || flag==0)
    {
	t=0;
	if(len%2 == 0)
	    tmp1 = len/2-1;
	else
	    tmp1 = len/2;
	while(K[tmp1-t] == '9')
	{
	    K[tmp1 - t]='0';
	    K[len-tmp1+t-1] = '0';
	    t++;
	}
	K[tmp1-t]++;
	K[len-1-tmp1+t] = K[tmp1-t];
    }
//    K[len]='\n';
    return ;
}

int main()
{
    int t,i;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {

	cin>>K;

	palin();
	cout<<K<<'\n';
    }
    return 0;
}
