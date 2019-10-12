// ! TOP DOWN APPROACH OF MAXIMUM TRIANGLE SUM

#include <iostream>
#include <algorithm>
using namespace std;
#define N 4

int calculateMaxPath(int arr[][N], int m) {

	int** dp = new int*[m];
	for (int i = 0; i < m; ++i)
		dp[i] = new int[N];

	for (int i = 0; i < N; i++)
		dp[0][i] = arr[0][i];

	for (int i = 1; i < m; i++) {
		for (int j = 0; j < N; j++) {
			if (j == 0)
				dp[i][j] =  dp[i - 1][j] + arr[i][j];

			else 
				dp[i][j] = max(dp[i - 1][j] + arr[i][j], dp[i - 1][j - 1] + arr[i][j]);

			
		}
	}
	int max = dp[m-1][0];
	for (int i = 0; i < N; i++) {
		if (dp[m - 1][i] > max)
			max = dp[m-1][i];
	}
	
	return max;
}

int main() {
	int arr[][N] = { {3, 0, 0,0},
					  {7, 4, 0,0},
					  {2, 4, 6,0},
					  {10,5,9,3}};

	cout << calculateMaxPath(arr,N);

	return 0;
}