#include <bits/stdc++.h>
using namespace std;
const int INF = 1000000009;
int main()
{
	int n;
	scanf("%d", &n);
	int minx = INF, maxx = -INF, miny = INF, maxy = -INF;
	for (int i = 0; i < n; ++i)
	{
		int x,y;
		scanf("%d %d", &x, &y);
		if(x == 0)
		{
			miny = min(miny,y);
			maxy = max(maxy,y);
		}
		if(y == 0)
		{
			minx = min(minx,x);
			maxx = max(maxx,x);
		}
	}
	int abx = max(abs(maxx),abs(minx)), aby = max(abs(miny),abs(maxy));
	double ans = sqrtl(powl(abx,2)+powl(aby,2));
	ans = max(ans,(double)(maxx-minx));
	ans = max(ans,(double)(maxy-miny));
	printf("%.10lf\n", ans);
	return 0;
}