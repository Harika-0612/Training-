#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
int main()
{
 int matrix[ROW][COL];
 int transpose[COL][ROW];
 int i,j;
 printf("Enter the elements of %d x %d matrix ", ROW,COL);
 for(i=0;i<ROW;i++)
 {
  for(j=0;j<COL;j++)
  {
   scanf("%d", &matrix[i][j]);
  }
 }
 for(i=0;i<ROW;i++)
 {
  for(j=0;j<COL;j++)
  {
   transpose[j][i]=matrix[i][j];
  }
 }
 printf("The original matrix");
 for(i=0;i<ROW;i++)
 {
  for(j=0;j<COL;j++)
  {
   printf("%d ",matrix[i][j]);
  }
  printf("\n");
 }
 printf("The transpose of matrix ");
 for(i=0;i<ROW;i++)
 {
  for(j=0;j<COL;j++)
  {
   printf("%d ",transpose[i][j]);
  }
  printf("\n");
 }
 printf("\n");
 return EXIT_SUCCESS;
 }

