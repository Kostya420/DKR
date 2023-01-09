#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define N 3
void fill_matrix(int *row, int column);
void row_print(int *row, int column);
int diapazon(int left, int right);
int product(int *row, int column);

int main()
{
  int matrix[N][N];
  srand(time(NULL));
  fill_matrix(&matrix, N);
  row_print(&matrix, N);
  printf("product = %d", product(&matrix, N));
}
 int diapazon(int left, int right){
   return rand() % (right - left + 1) + left;}

 void fill_matrix(int *row, int column){
  for (int i = 0; i < column; i++ )
  for (int j = 0; j < column; j++ )
  row[i * column + j] = diapazon(5, 12);
}
 void row_print(int *row, int column){
  for (int j = 1; j <= column; j++)
  printf("");
  for (int i = 0; i < column; i++){
   for (int j = 0; j < column; j++)
   printf(" %d", row[i * column + j]);
   printf("\n\n\n");
 }
}
 int product(int *row, int column)
{
  int dobutok = 1;
  for (int i = 0; i < column; i++ )
  dobutok *= row[i * column + i];
  return dobutok;
}
