#include<bits/stdc++.h>
using namespace std;

int maxsub(vector< int > &v)
{
	int n = v.size(), i;
	if(n == 0) return 0;
	if(n == 1) return v[0];
	int pos_pro,neg_pro,max_pro= v[0], past_pos,past_neg;

	past_pos = pos_pro = max(0,v[0]);
	past_neg = neg_pro = min(0,v[0]);

	
}

int main()
{
	int arr[] = {2,-5,-9,2,4};
	int n = sizeof(arr)/sizeof(arr[0]);

	vector< int > v(arr,arr+n);
	printf("Maximum Sub array product is %d\n",maxsub(v) );
	return 0;
}



    