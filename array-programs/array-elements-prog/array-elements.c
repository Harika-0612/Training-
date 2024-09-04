#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
 int arr[MAX];
 printf("Enter the array elements:");
 for(int i=0;i<MAX;i++)
 {
  scanf("%d",&arr[i]);
  }
  for(int i=0;i<MAX;i++)
  {
  printf("%d  ",arr[i]);
  
  }
  printf("\n");

  for(int i=0;i<MAX;i++)
  {
  printf("%d  ",*(arr+i));
  }
  printf("\n");

 return EXIT_SUCCESS;
 }

