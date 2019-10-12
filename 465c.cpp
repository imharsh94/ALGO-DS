#include<bits/stdc++.h>
using namespace std;

int main()
{
	double R,X,Y,x,y,m,t;
	scanf("%lf %lf %lf %lf %lf",&R,&X,&Y,&x,&y);

	if((X-x)*(X-x)+(Y-y)*(Y-y) > R*R)
		printf("%.20lf %.20lf %.20lf\n",X,Y,R);
	else
	{
		t = atan2(Y-y,X-x);
		R = (R+ sqrt((X-x)*(X-x)+(Y-y)*(Y-y)))/2;
		printf("%.20lf %.20lf %.20lf\n", x+R*cos(t), y+sin(t)*R,R);
	}
	return 0;
}