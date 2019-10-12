#include<bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;
};

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value/a.weight;
    double r2 = (double)b.value/b.weight;
    return r1>r2;
}

double knap(int W, struct Item arr[],int n)
{
    sort(arr,arr+n,cmp);
    int curweight = 0;
    double finalvalue =0.0;

    for(int i=0; i<n; i++)
    {
	if(curweight + arr[i].weight <= W)
	{
	    curweight += arr[i].weight;
	    finalvalue += arr[i].value;
	}
	else
	{
	    int remain = W - curweight;
	    finalvalue += arr[i].value* ((double)remain/arr[i].weight);
	    break;
	}
    }
    return finalvalue;
}

int main()
{
    int W=50;
    Item arr[] = {{120,30}, {60,10}, {100,20}};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    // sort(arr,arr+3,cmp);

    cout<<knap(W,arr,n)<<'\n';
    return 0;
}
