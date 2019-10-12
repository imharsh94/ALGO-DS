// minimum adjacent swaps required to sort an array

#include <bits/stdc++.h>
using namespace std;

int findMinSwaps(int arr[], int n) {
  int count = 0;
  int zeroes[n];
  memset(zeroes, 0, sizeof(zeroes));
  zeroes[n - 1] = 1 - arr[n - 1];

  for (int i = n - 2; i >= 0; i--) {
    zeroes[i] = zeroes[i + 1];

    if (arr[i] == 0) zeroes[i]++;
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] == 1) count += zeroes[i];
  }

  return count;
}

int main() {
  int arr[] = {0, 0, 1, 0, 1, 0, 1, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << findMinSwaps(arr, n) << endl;
  return 0;
}
