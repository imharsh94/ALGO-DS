#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r=3,c=4,i,j,count=0;

    int **arr = (int **)malloc(r * sizeof(int *));
    for(i=0; i<r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));

    for (i = 0; i <  r; i++) 
      for (j = 0; j < c; j++) 
         arr[i][j] = ++count;  // OR *(*(arr+i)+j) = ++count 
  
    for (i = 0; i <  r; i++) 
      for (j = 0; j < c; j++) 
         printf("%d ", arr[i][j]); 
  
    return 0;
}