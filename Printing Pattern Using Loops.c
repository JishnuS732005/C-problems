#  https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int size = 2*n-1;
      int matrix[size][size];
      for(int i=0;i<size;i++) {
          for(int j=0;j<size;j++) {
              int min_dist=i < j ? i:j;
          min_dist=min_dist<size-i ? min_dist : size-i-1;
          min_dist=min_dist<size-j ? min_dist : size-j-1;
          matrix[i][j]=n-min_dist;         
          }
      }
      for(int i=0;i<size;i++) {
          for(int j=0;j<size;j++) {
              printf("%d ",matrix[i][j]);
          }
          printf("\n");
      }
    return 0;
}
