#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){

  int n, m, i, j;
  scanf("%d %d", &n, &m);

  int array[n][m];

  for(i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &array[i][j]);
    }
  } 
  printf("\n");

  for (j = 0; j < m; j++)
  {
    for ( i = 0; i < n; i++)
        printf("%d ", array[i][j]);
    printf("\n");
  }


  return 0;
   
}

