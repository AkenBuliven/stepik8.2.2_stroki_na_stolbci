# stepik8.2.2_stroki_na_stolbci


Транспонирование 
Для заданной матрицы вывести на экран транспонированную матрицу.

Входные данные:
Два натуральных числа 
N
N и 
M
M. Далее с новой строки 
N
N строк по 
M
M целых чисел в каждой. 
N
N и 
M
M не превышают десяти.

Выходные данные: 
Вывести матрицу 
M
M на 
N
N. Числа в строках записывать через пробел.

Подсказки: 
Транспонированная матрица получается из обычной заменой строк на столбики. Пример:


Исходная матрица:
1 2 3 4
5 6 7 8

Транспонированная матрица:
1 5
2 6
3 7
4 8

Sample Input:
3 4
1 2 3 4
1 3 4 5
0 2 3 -2
Sample Output:
1 1 0 
2 3 2 
3 4 3 
4 5 -2 


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

