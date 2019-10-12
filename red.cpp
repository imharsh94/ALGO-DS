#include<bits/stdc++.h>
using namespace std;
#define NMAX 1111

char A[NMAX][NMAX];
int N,M;

void readInput()
{
	scanf("%d %d",&M,&N);
	for(int i=0; i<M; i++)
	{
		scanf("%s",&A[i][0]);
		for(int j=0 ; j<N ; j++)
			if(A[i][j] == 'R')
				A[i][j] = 0;
			else
				A[i][j] = 1;
	}
}

int solve(int parity)
{
	int ans=0;
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if(((i+j) & 1) == (A[i][j] ^ parity)) continue;
			if(A[i][j] == 0)
				ans += 5;
			else
				ans += 3;
		}
	}

	return ans;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		readInput();
		printf("%d\n", min(solve(0),solve(1)));
	}
	return 0;
}